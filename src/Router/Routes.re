type url = ReasonReact.Router.url;
type state = { url };
type action = UpdateUrl(url);
type children = (~url:url) => ReasonReact.reactElement;

let comp = "Routes" |> ReasonReact.reducerComponent;

let make = children => {
  ...comp,
  initialState: () => {
    url: ReasonReact.Router.dangerouslyGetInitialUrl(),
  },
  reducer: (action, _state) => switch action {
  | UpdateUrl(url) => ReasonReact.Update({ url: url });
  },
  didMount: self => {
    let routeWatcherId = ReasonReact.Router.watchUrl(url => {
      self.send(UpdateUrl(url));
    });

    self.onUnmount(() => ReasonReact.Router.unwatchUrl(routeWatcherId));
  },
  render: self => children(~url=self.state.url),
};
