open Utils;

let component = "Link" |> ReasonReact.statelessComponent;

let make = (~path : string, children) => {
  ...component,
  render: _self => {
    let onClick = event => {
      event->ReactEvent.Mouse.preventDefault;
      pushRoute(path);
    };
    
    <a
      href=("#" ++ path)
      onClick
    >
      ...children
    </a>
  },
};
