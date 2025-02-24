# Install Cisco Packet Tracer on Arch Linux

## Prerequisites

Before installing Cisco Packet Tracer, ensure you have the necessary dependencies installed:

```bash
sudo pacman -S --needed base-devel git
```

You also need to download the official Packet Tracer `.deb` package from Cisco's website:

1. Go to [Cisco Networking Academy](https://www.netacad.com/)
2. Log in or create an account
3. Navigate to the **Packet Tracer** download page
4. Download the latest **CiscoPacketTracer_811_Ubuntu_64bit.deb** file

## Installation Steps

1. Clone the AUR repository for Packet Tracer:
   ```bash
   git clone https://aur.archlinux.org/packettracer.git
   ```
2. Navigate into the cloned directory:
   ```bash
   cd packettracer
   ```
3. Copy the downloaded `.deb` file into the `packettracer` directory:
   ```bash
   cp ~/Downloads/CiscoPacketTracer_811_Ubuntu_64bit.deb ./packettracer
   ```
4. Build and install the package:
   ```bash
   makepkg -i
   ```

## Running Packet Tracer

Once installed, you can start Packet Tracer using:

```bash
packettracer
```

Alternatively, you can launch it from your application menu.

## Updating Packet Tracer

To update Packet Tracer when a new version is available:

```bash
cd packettracer
git pull
makepkg -i
```

## Uninstallation

To remove Packet Tracer from your system:

```bash
sudo pacman -Rns packettracer
```

## Troubleshooting

If you encounter issues:

- Ensure all dependencies are installed
- Check for missing libraries using `ldd /usr/bin/packettracer`
- Run `packettracer` from the terminal to check for error messages
