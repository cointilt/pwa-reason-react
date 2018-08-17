let comp = "Dashboard" |> ReasonReact.statelessComponent;

let make = _ => {
  ...comp,
  render: _ => {
    <span>(ReasonReact.string("Dashboard"))</span>
  },
};
