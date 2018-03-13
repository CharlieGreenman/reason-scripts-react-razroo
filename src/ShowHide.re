type actions =
  | DoNothing;

let component = ReasonReact.reducerComponent("ShowHide");

let make = (~name, _children) => {
  ...component,
  initialState: () => 0, /* here, state is an `int` */
  reducer: (action, state) =>
    switch action {
      | DoNothing => ReasonReact.NoUpdate;
    },
  render: (self) => {
    let greeting =
      "Hello: " ++ name ++ ". You've clicked the button " ++ string_of_int(self.state) ++ " time(s)!";
    <div>{ReasonReact.stringToElement(greeting)}</div>
  }
};
