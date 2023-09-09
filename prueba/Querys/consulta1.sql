USE [empresa]
GO

/****** Object:  Table [dbo].[empleados]    Script Date: 9/8/2023 7:49:18 PM ******/
SET ANSI_NULLS ON
GO

SET QUOTED_IDENTIFIER ON
GO

CREATE TABLE [dbo].[empleados](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[nombre] [varchar](50) NOT NULL,
	[fecha_ingreso] [date] NOT NULL,
	[turno] [varchar](20) NOT NULL,
	[estado] [varchar](20) NOT NULL,
	[departamento] [int] NULL,
 CONSTRAINT [pk_empleados] PRIMARY KEY CLUSTERED 
(

ALTER TABLE [dbo].[empleados]  WITH CHECK ADD FOREIGN KEY([departamento])
REFERENCES [dbo].[departamento] ([id])
GO


