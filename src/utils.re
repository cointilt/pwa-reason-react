/* Reason React Helper Methods */

let renderString = ReasonReact.string;
let renderArray = ReasonReact.array;
let renderList = xs => xs
  |> Array.of_list
  |> renderArray;

let renderListJSX = (renderMethod, listItems) =>
  List.map(renderMethod, listItems)
    |> renderList;

/* Reason React Router Helper Methods */

let pushRoute = ReasonReact.Router.push;
let watchUrl = ReasonReact.Router.watchUrl;
let unwatchUrl = ReasonReact.Router.unwatchUrl;
let getInitialRoute = ReasonReact.Router.dangerouslyGetInitialUrl;
