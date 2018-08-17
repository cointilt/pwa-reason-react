let component = ReasonReact.statelessComponent("Error");

let make = _ => {
  ...component,
  render: _ => <div>{ReasonReact.string("Error")}</div>,
};
