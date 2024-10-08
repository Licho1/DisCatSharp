using System;

namespace DisCatSharp.CommandsNext.Attributes;

/// <summary>
///     Defines this command overload's priority. This determines the order in which overloads will be attempted to be
///     called. Commands will be attempted in order of priority, in descending order.
/// </summary>
[AttributeUsage(AttributeTargets.Method, Inherited = false)]
public sealed class PriorityAttribute : Attribute
{
	/// <summary>
	///     Defines this command overload's priority. This determines the order in which overloads will be attempted to be
	///     called. Commands will be attempted in order of priority, in descending order.
	/// </summary>
	/// <param name="priority">Priority of this command overload.</param>
	public PriorityAttribute(int priority)
	{
		this.Priority = priority;
	}

	/// <summary>
	///     Gets the priority of this command overload.
	/// </summary>
	public int Priority { get; }
}
