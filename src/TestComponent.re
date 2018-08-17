type url = ReasonReact.Router.url;

let comp = "TestComponent" |> ReasonReact.statelessComponent;

let make = (~url:url, _children) => {
  ...comp,
  render: _self => {
    <div>
      <h4>(ReasonReact.string("TestComponent"))</h4>
      <p>(ReasonReact.string(String.concat("/", url.path)))</p>
    </div>
  },
};
