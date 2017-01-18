-- phpMyAdmin SQL Dump
-- version 4.5.1
-- http://www.phpmyadmin.net
--
-- Host: 127.0.0.1
-- Czas generowania: 18 Sty 2017, 15:29
-- Wersja serwera: 10.1.19-MariaDB
-- Wersja PHP: 7.0.13

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `magazynn`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `clients`
--

CREATE TABLE `clients` (
  `id_clients` int(11) NOT NULL,
  `name` varchar(255) COLLATE utf8_polish_ci NOT NULL,
  `nip` int(10) NOT NULL,
  `regon` int(9) NOT NULL,
  `cdata` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `clients`
--

INSERT INTO `clients` (`id_clients`, `name`, `nip`, `regon`, `cdata`) VALUES
(2, 'rgersgftert', 2147483647, 565656432, 16),
(5, 'fsdfsdfsdq', 1111222233, 111222343, 23);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `common_data`
--

CREATE TABLE `common_data` (
  `id_common_data` int(11) NOT NULL,
  `address` varchar(255) COLLATE utf8_polish_ci NOT NULL,
  `phone` varchar(20) COLLATE utf8_polish_ci DEFAULT NULL,
  `email` varchar(255) COLLATE utf8_polish_ci DEFAULT NULL,
  `other_info` text COLLATE utf8_polish_ci,
  `status` tinyint(1) NOT NULL DEFAULT '1'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `common_data`
--

INSERT INTO `common_data` (`id_common_data`, `address`, `phone`, `email`, `other_info`, `status`) VALUES
(1, 'ul. Warszawska 111 25-110 Kielce', '791517315', 'wipekxxx@gmail.com', 'fgsdgrfdgdgsdgdgdfgsdgdgdgdgfdgdfg', 1),
(2, 'ul. Krzywa 222 26-010 Guldonów', '508810882', 'kris95@onet.pl', 'gsdgsergsegds', 1),
(14, 'Jagodne 121 25-555 Mirzec', '600600', 'skladanowski1a@gmail.com', 'grubas', 1),
(15, 'ul. Krzywa 1 25-555 Gdziestam', '666666666', 'test@gmadil.com', 'gvfdgdfgdfgdf\r\ngdfgdfgdfg', 1),
(16, 'thghgfdh 45645', '5646456', 'tryhrtyrt', 'trhfghfrtdhgf', 1),
(17, 'dfgdfsgfds fdgfdsg dfgdsfg', '546456456', 'dfsgdfgsdfgsdfg', 'cfhdghdfgbdfgbfgd', 1),
(18, 'dfgfdgfdg dfgfdgfd', '56456456', 'dfgdgdf', 'fgdhfghdfghdfghfdhfd', 1),
(19, 'dfgfdgfdg dfgfdgfdc', '5645641546', 'dfgdgdfc', 'fgdhfghdfghdfghfdhfd', 1),
(20, 'gfdghdhydert', '456456546', 'rfdegdfsg', 'shgtretyhrftgrt', 1),
(22, 'fdgdfg sgdsgfds', '34534534', 'sdfgdfsgdsf', 'hfdghdfhdfghdfg', 1),
(23, 'fdgdsfg dfgdfsgq', '345345345', 'dfsgsfdgdfsq', 'dfgdfsgdsfgq', 1),
(24, 'tgyhrty try', '45364564', 'rtyterytre', 'tdryrtygvgtyr', 1),
(25, 'rstreterttgertg', '43543534', 'erterwter', 'tyrtuyhrtujh', 1),
(26, 'polopdfgdfdfggdf', '345345342', 'polopfgvfdgfdgdf', 'gfsdfgdfgdsf', 1);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `employers`
--

CREATE TABLE `employers` (
  `id_employers` int(11) NOT NULL,
  `name` varchar(50) COLLATE utf8_polish_ci NOT NULL,
  `surname` varchar(50) COLLATE utf8_polish_ci NOT NULL,
  `login` varchar(25) COLLATE utf8_polish_ci NOT NULL,
  `password` varchar(100) COLLATE utf8_polish_ci NOT NULL,
  `last_log_in` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `last_log_out` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `cdata` int(11) NOT NULL,
  `type` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `employers`
--

INSERT INTO `employers` (`id_employers`, `name`, `surname`, `login`, `password`, `last_log_in`, `last_log_out`, `cdata`, `type`) VALUES
(1, 'Krzysztof', 'Adamczyk', 'wipek', '*00A51F3F48415C7D4E8908980D443C29C69B60C9', '2017-01-18 15:28:35', '2017-01-18 15:25:25', 1, 1),
(5, 'polopgdfgdfgdf', 'polopgdfgdfgdf', 'polopfdgddgf', '*00A51F3F48415C7D4E8908980D443C29C69B60C9', '2016-12-06 21:32:23', '2016-12-06 21:32:23', 26, 0);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `features`
--

CREATE TABLE `features` (
  `id_features` int(11) NOT NULL,
  `name` varchar(255) COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `features`
--

INSERT INTO `features` (`id_features`, `name`) VALUES
(1, 'Taktowanie'),
(2, 'Pamięć cache'),
(3, 'Pamięć'),
(4, 'Rok produkcji'),
(5, 'Złącze'),
(7, 'Param'),
(9, 'gfdgdf'),
(10, 'gdfdf');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `items`
--

CREATE TABLE `items` (
  `id_items` int(11) NOT NULL,
  `name` varchar(255) COLLATE utf8_polish_ci NOT NULL,
  `model` varchar(255) COLLATE utf8_polish_ci NOT NULL,
  `quantity` int(11) NOT NULL DEFAULT '0',
  `price` decimal(10,2) NOT NULL DEFAULT '0.00',
  `id_producers` int(11) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `items`
--

INSERT INTO `items` (`id_items`, `name`, `model`, `quantity`, `price`, `id_producers`) VALUES
(1, 'Procesor', 'i5', 120, '512.45', 2),
(2, 'Karta graficzna', 'Geforce 1010', 91, '456.45', 3),
(5, 'Procesor', 'i7', 100, '4534.54', 2),
(6, 'Dysk SSD', 'SSD-128', 100, '120.99', 1);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `producers`
--

CREATE TABLE `producers` (
  `id_producers` int(11) NOT NULL,
  `name` varchar(255) COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `producers`
--

INSERT INTO `producers` (`id_producers`, `name`) VALUES
(1, 'Producent nieustalony'),
(2, 'Intel'),
(3, 'Nvidia'),
(4, 'Kingston');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `products_features`
--

CREATE TABLE `products_features` (
  `id_items` int(11) NOT NULL,
  `id_features` int(11) NOT NULL,
  `value` varchar(255) COLLATE utf8_polish_ci NOT NULL,
  `id_products_features` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `products_features`
--

INSERT INTO `products_features` (`id_items`, `id_features`, `value`, `id_products_features`) VALUES
(1, 1, '2.4 Ghz', 1),
(1, 2, '8MB', 2),
(2, 3, '8GB', 3),
(2, 5, 'PCI-EXPRESS', 4),
(5, 1, '3GHz', 5),
(5, 7, 'dsfds343', 7),
(6, 7, '564534', 11),
(6, 5, 'yhfghgf', 12);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `providers`
--

CREATE TABLE `providers` (
  `id_providers` int(11) NOT NULL,
  `name` varchar(255) COLLATE utf8_polish_ci NOT NULL,
  `NIP` int(10) NOT NULL,
  `REGON` int(9) NOT NULL,
  `cdata` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `providers`
--

INSERT INTO `providers` (`id_providers`, `name`, `NIP`, `REGON`, `cdata`) VALUES
(2, 'sdfgdfsg', 2147483647, 124645347, 22),
(3, 'dfgdsfgdf', 2147483647, 98765123, 24),
(4, 'fdsgfsdgsdf', 2147483647, 456789345, 25);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `provides`
--

CREATE TABLE `provides` (
  `id_provides` int(11) NOT NULL,
  `id_employers` int(11) NOT NULL,
  `id_providers` int(11) NOT NULL,
  `date` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `price` decimal(11,2) NOT NULL DEFAULT '0.00',
  `status` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `provides_items`
--

CREATE TABLE `provides_items` (
  `id_provides` int(11) NOT NULL,
  `id_items` int(11) NOT NULL,
  `quantity` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `sales`
--

CREATE TABLE `sales` (
  `id_sales` int(11) NOT NULL,
  `id_employers` int(11) NOT NULL,
  `id_clients` int(11) NOT NULL,
  `date` datetime NOT NULL DEFAULT CURRENT_TIMESTAMP,
  `price` decimal(11,2) NOT NULL DEFAULT '0.00',
  `status` tinyint(1) NOT NULL DEFAULT '0'
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `sales`
--

INSERT INTO `sales` (`id_sales`, `id_employers`, `id_clients`, `date`, `price`, `status`) VALUES
(7, 1, 5, '2016-12-05 22:38:01', '50366.35', 1),
(8, 1, 5, '2016-12-05 22:57:00', '0.00', 0),
(9, 1, 5, '2016-12-05 23:11:34', '0.00', 0);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `sales_items`
--

CREATE TABLE `sales_items` (
  `id_sales` int(11) NOT NULL,
  `id_items` int(11) NOT NULL,
  `quantity` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `sales_items`
--

INSERT INTO `sales_items` (`id_sales`, `id_items`, `quantity`) VALUES
(7, 5, 10),
(8, 1, 10),
(7, 2, 11),
(9, 2, 19);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indexes for table `clients`
--
ALTER TABLE `clients`
  ADD PRIMARY KEY (`id_clients`),
  ADD UNIQUE KEY `nip` (`nip`,`regon`,`cdata`),
  ADD UNIQUE KEY `name` (`name`);

--
-- Indexes for table `common_data`
--
ALTER TABLE `common_data`
  ADD PRIMARY KEY (`id_common_data`),
  ADD UNIQUE KEY `id_common_data` (`id_common_data`),
  ADD UNIQUE KEY `email` (`email`),
  ADD UNIQUE KEY `phone` (`phone`),
  ADD UNIQUE KEY `phone_2` (`phone`);

--
-- Indexes for table `employers`
--
ALTER TABLE `employers`
  ADD PRIMARY KEY (`id_employers`),
  ADD UNIQUE KEY `login` (`login`),
  ADD UNIQUE KEY `id_employers` (`id_employers`),
  ADD UNIQUE KEY `cdata` (`cdata`);

--
-- Indexes for table `features`
--
ALTER TABLE `features`
  ADD PRIMARY KEY (`id_features`);

--
-- Indexes for table `items`
--
ALTER TABLE `items`
  ADD PRIMARY KEY (`id_items`);

--
-- Indexes for table `producers`
--
ALTER TABLE `producers`
  ADD PRIMARY KEY (`id_producers`);

--
-- Indexes for table `products_features`
--
ALTER TABLE `products_features`
  ADD PRIMARY KEY (`id_products_features`),
  ADD UNIQUE KEY `id_products_features` (`id_products_features`);

--
-- Indexes for table `providers`
--
ALTER TABLE `providers`
  ADD PRIMARY KEY (`id_providers`),
  ADD UNIQUE KEY `id_providers` (`id_providers`,`NIP`,`REGON`,`cdata`);

--
-- Indexes for table `provides`
--
ALTER TABLE `provides`
  ADD PRIMARY KEY (`id_provides`);

--
-- Indexes for table `sales`
--
ALTER TABLE `sales`
  ADD PRIMARY KEY (`id_sales`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT dla tabeli `clients`
--
ALTER TABLE `clients`
  MODIFY `id_clients` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
--
-- AUTO_INCREMENT dla tabeli `common_data`
--
ALTER TABLE `common_data`
  MODIFY `id_common_data` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=27;
--
-- AUTO_INCREMENT dla tabeli `employers`
--
ALTER TABLE `employers`
  MODIFY `id_employers` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;
--
-- AUTO_INCREMENT dla tabeli `features`
--
ALTER TABLE `features`
  MODIFY `id_features` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;
--
-- AUTO_INCREMENT dla tabeli `items`
--
ALTER TABLE `items`
  MODIFY `id_items` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
--
-- AUTO_INCREMENT dla tabeli `producers`
--
ALTER TABLE `producers`
  MODIFY `id_producers` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
--
-- AUTO_INCREMENT dla tabeli `products_features`
--
ALTER TABLE `products_features`
  MODIFY `id_products_features` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=13;
--
-- AUTO_INCREMENT dla tabeli `providers`
--
ALTER TABLE `providers`
  MODIFY `id_providers` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;
--
-- AUTO_INCREMENT dla tabeli `provides`
--
ALTER TABLE `provides`
  MODIFY `id_provides` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;
--
-- AUTO_INCREMENT dla tabeli `sales`
--
ALTER TABLE `sales`
  MODIFY `id_sales` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
