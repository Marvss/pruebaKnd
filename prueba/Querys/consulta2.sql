USE [empresa]
CREATE TABLE [dbo].[departamento](
	[id] [int] IDENTITY(1,1) NOT NULL,
	[descripcion] [varchar](50) NOT NULL,
 CONSTRAINT [pk_departamentos] PRIMARY KEY CLUSTERED 
);

