// Generated by BUCKLESCRIPT VERSION 4.0.3, PLEASE EDIT WITH CARE

import * as ReactDOMRe from "reason-react/src/ReactDOMRe.js";
import * as ReasonReact from "reason-react/src/ReasonReact.js";
import * as Utils$PwaReason from "../utils.bs.js";

var component = ReasonReact.statelessComponent("Link");

function make(path, children) {
  return /* record */[
          /* debugName */component[/* debugName */0],
          /* reactClassInternal */component[/* reactClassInternal */1],
          /* handedOffState */component[/* handedOffState */2],
          /* willReceiveProps */component[/* willReceiveProps */3],
          /* didMount */component[/* didMount */4],
          /* didUpdate */component[/* didUpdate */5],
          /* willUnmount */component[/* willUnmount */6],
          /* willUpdate */component[/* willUpdate */7],
          /* shouldUpdate */component[/* shouldUpdate */8],
          /* render */(function () {
              var onClick = function ($$event) {
                $$event.preventDefault();
                return Utils$PwaReason.pushRoute(path);
              };
              return ReactDOMRe.createElementVariadic("a", {
                          href: "#" + path,
                          onClick: onClick
                        }, children);
            }),
          /* initialState */component[/* initialState */10],
          /* retainedProps */component[/* retainedProps */11],
          /* reducer */component[/* reducer */12],
          /* jsElementWrapped */component[/* jsElementWrapped */13]
        ];
}

export {
  component ,
  make ,
  
}
/* component Not a pure module */
