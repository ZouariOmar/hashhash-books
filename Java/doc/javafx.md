# JavaFx

## FXML

- FXML lets you _describe_ and _configure_ your scene graph in a declarative format.
- This approach has several advantages:
  - FXML markup structure is hierarchical, so it reflects the structure of your scene graph.
  - FXML **describes your view** and **supports a Model-View-Controller (MVC) architecture**, providing better structure for larger applications.
  - FXML reduces the JavaFX code you have to write to create and configure scene graph nodes.
  - You can design your UI with Scene Builder. This drag-and-drop tool is a stand-alone application that provides a visual rendering of your scene. And Scene Builder generates the FXML markup for you.
  - You can also edit your FXML markup with text and IDE editors.

> NOTE: The top-level container includes the name of the JavaFX controller class with attribute `fx:controller`.

## JavaFX FXML controller

### Constructor vs initialize method

```java
public class MainViewController {
  public MainViewController() {
    System.out.println("first");
  }

  @FXML
  public void initialize() {
    System.out.println("second");
  }
}
// Output
// first
// second
```

- The constructor is called first, then any `@FXML` annotated fields are populated, then `initialize()` is called.
- This means the constructor does **not have access to `@FXML`** fields referring to components defined in the `.fxml` file, while `initialize()` does have access to them.
