open Utils;

type link = (string, string);
type links = list(link);

let myLinks = [
  ("/", "Home"),
  ("/error", "Error"),
];

let component = "App" |> ReasonReact.statelessComponent;

let make = _children => {
  ...component,
  render: _self => {
    let myTitle = "Hell World";

    <div className="app">
      <h1>(renderString("My App"))</h1>
      <p>(renderString(myTitle))</p>

      <nav>
        <ul>
          (renderListJSX(
            ((path, text)) => (
              <li key=(path)>
                <Link path>(text |> renderString)</Link>
              </li>
            ),
            myLinks,
          ))
        </ul>
      </nav>

      <div>
        <Routes>
          ...(
            (~url) => switch url.path {
            | [] => <Dashboard />
            | _ => <Error />
            } 
          )
        </Routes>
      </div>
    </div>
  },
};
