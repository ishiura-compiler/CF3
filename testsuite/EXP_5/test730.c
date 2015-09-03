#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MIN;
uint8_t x11 = 95U;
volatile int64_t t3 = -61LL;
uint64_t x17 = 410436049572734981LLU;
int8_t x19 = -61;
int32_t x25 = -498513;
int8_t x36 = -1;
uint64_t x47 = 73121756LLU;
volatile int32_t t12 = INT32_MAX;
int32_t x58 = 27;
volatile uint8_t x61 = 36U;
uint64_t t17 = 1580879042LLU;
int8_t x74 = -24;
int64_t t18 = -122437141213040908LL;
static int32_t x84 = -1027574;
uint64_t x89 = UINT64_MAX;
volatile uint64_t t21 = 91994957947LLU;
static uint8_t x94 = UINT8_MAX;
int8_t x97 = 0;
int8_t x99 = INT8_MIN;
uint32_t x100 = UINT32_MAX;
static uint32_t t23 = 908849U;
int64_t x102 = INT64_MIN;
uint16_t x104 = 578U;
static volatile uint64_t t25 = 144194252906LLU;
int8_t x120 = INT8_MIN;
uint16_t x122 = 1201U;
int32_t t29 = 1;
int16_t x126 = -1;
int64_t t31 = 0LL;
uint8_t x145 = 9U;
static volatile int16_t x146 = INT16_MAX;
uint32_t x150 = UINT32_MAX;
int64_t t35 = 244237895029159290LL;
int32_t x153 = 83252;
uint8_t x155 = 5U;
static volatile uint8_t x161 = 1U;
uint64_t x165 = UINT64_MAX;
int8_t x167 = 1;
volatile uint64_t t39 = UINT64_MAX;
int64_t x169 = -1LL;
int16_t x172 = -2794;
uint64_t t42 = 2573380042LLU;
volatile int32_t t43 = 86;
int16_t x206 = -1;
static int64_t x207 = -1LL;
int16_t x208 = INT16_MIN;
static uint64_t x212 = UINT64_MAX;
static int16_t x214 = INT16_MIN;
volatile uint32_t x221 = UINT32_MAX;
volatile int64_t x224 = -6329LL;
static uint16_t x227 = UINT16_MAX;
static int32_t t51 = -1304818;
int32_t x232 = INT32_MIN;
volatile uint64_t t53 = 46466LLU;
volatile uint8_t x238 = UINT8_MAX;
volatile uint32_t t55 = 0U;
volatile uint32_t t58 = 607906793U;
int16_t x267 = INT16_MIN;
uint64_t x272 = 31375315727232LLU;
volatile uint8_t x275 = 26U;
volatile int64_t x277 = 1052719840147591961LL;
int16_t x281 = INT16_MIN;
static uint64_t x282 = 3959212963980055052LLU;
int16_t x285 = -1;
uint8_t x294 = 3U;
uint16_t x295 = UINT16_MAX;
int16_t x301 = INT16_MAX;
uint32_t x302 = UINT32_MAX;
uint32_t x316 = 271705415U;
int64_t x323 = -4348LL;
int64_t x327 = INT64_MIN;
static int8_t x331 = -8;
int32_t x332 = INT32_MIN;
volatile int8_t x333 = INT8_MAX;
volatile uint64_t t78 = 89042LLU;
volatile int16_t x350 = INT16_MAX;
static volatile int16_t x351 = INT16_MIN;
uint64_t x364 = 339770365219852319LLU;
volatile int8_t x365 = 24;
int64_t t84 = 1928304645418562LL;
uint16_t x377 = 15208U;
int8_t x380 = INT8_MIN;
int32_t x383 = INT32_MAX;
int32_t t87 = 206;
static volatile int16_t x386 = -1;
int32_t x388 = INT32_MIN;
int64_t x389 = -4063LL;
static volatile int16_t x393 = INT16_MIN;
int8_t x405 = -1;
int16_t x415 = INT16_MAX;
static int16_t x418 = -1;
int32_t t95 = -4164229;
uint16_t x421 = UINT16_MAX;
static int8_t x425 = INT8_MAX;
uint16_t x426 = UINT16_MAX;
uint32_t t97 = 799030780U;
int64_t x436 = 1592683LL;
volatile int64_t t99 = 4LL;


void f0(void) {
	int8_t x1 = -1;
	int64_t x2 = 158591314LL;
	uint8_t x3 = 3U;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = 20448087967134LL;

	t0 = (x1-((x2%x3)%x4));

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 12208;
	int32_t x7 = -1;
	static int16_t x8 = INT16_MIN;
	int32_t t1 = INT32_MIN;

	t1 = (x5-((x6%x7)%x8));

	if (t1 != INT32_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	uint64_t x10 = 2634695LLU;
	uint8_t x12 = 4U;
	uint64_t t2 = 1LLU;

	t2 = (x9-((x10%x11)%x12));

	if (t2 != 255LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	volatile uint16_t x15 = UINT16_MAX;
	int64_t x16 = INT64_MIN;

	t3 = (x13-((x14%x15)%x16));

	if (t3 != 32640LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = 5;
	int8_t x20 = -62;
	static volatile uint64_t t4 = 3795573730949470034LLU;

	t4 = (x17-((x18%x19)%x20));

	if (t4 != 410436049572734976LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int64_t x22 = 1LL;
	volatile uint8_t x23 = 28U;
	static int32_t x24 = -1;
	volatile int64_t t5 = -10014701749835498LL;

	t5 = (x21-((x22%x23)%x24));

	if (t5 != -32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	static volatile uint16_t x27 = 15U;
	int16_t x28 = INT16_MAX;
	int64_t t6 = -63499839LL;

	t6 = (x25-((x26%x27)%x28));

	if (t6 != -498505LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static uint8_t x30 = 1U;
	int16_t x31 = 10214;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = 8378U;

	t7 = (x29-((x30%x31)%x32));

	if (t7 != 4294967294U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile int16_t x34 = INT16_MIN;
	int32_t x35 = INT32_MAX;
	volatile int64_t t8 = INT64_MIN;

	t8 = (x33-((x34%x35)%x36));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x37 = 0U;
	int32_t x38 = INT32_MAX;
	uint8_t x39 = 5U;
	int16_t x40 = -1;
	static volatile int32_t t9 = -637515;

	t9 = (x37-((x38%x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 85;
	static uint64_t x42 = 25117992471067794LLU;
	static int64_t x43 = INT64_MIN;
	int32_t x44 = 3;
	volatile uint64_t t10 = 83LLU;

	t10 = (x41-((x42%x43)%x44));

	if (t10 != 85LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	uint32_t x46 = 226047315U;
	uint64_t x48 = 830407809556317951LLU;
	volatile uint64_t t11 = 15339439292447LLU;

	t11 = (x45-((x46%x47)%x48));

	if (t11 != 18446744073702869568LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MAX;
	volatile int8_t x50 = INT8_MIN;
	int16_t x51 = -1;
	int8_t x52 = INT8_MIN;

	t12 = (x49-((x50%x51)%x52));

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	static int16_t x54 = INT16_MIN;
	static uint8_t x55 = UINT8_MAX;
	uint32_t x56 = UINT32_MAX;
	int64_t t13 = 19807355051199669LL;

	t13 = (x53-((x54%x55)%x56));

	if (t13 != -4294967169LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int8_t x59 = -1;
	static volatile int8_t x60 = 6;
	int32_t t14 = 1425397;

	t14 = (x57-((x58%x59)%x60));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 217542LLU;
	volatile int32_t x63 = -4;
	int16_t x64 = -1;
	volatile uint64_t t15 = 113804933LLU;

	t15 = (x61-((x62%x63)%x64));

	if (t15 != 18446744073709334110LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = INT16_MIN;
	uint8_t x66 = UINT8_MAX;
	int64_t x67 = -1LL;
	int64_t x68 = INT64_MIN;
	volatile int64_t t16 = -29709LL;

	t16 = (x65-((x66%x67)%x68));

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 29U;
	uint64_t x70 = UINT64_MAX;
	int64_t x71 = -1391651615486188LL;
	int8_t x72 = 6;

	t17 = (x69-((x70%x71)%x72));

	if (t17 != 26LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int64_t x75 = -4918LL;
	uint32_t x76 = 166058446U;

	t18 = (x73-((x74%x75)%x76));

	if (t18 != -104LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = INT64_MIN;
	uint8_t x80 = 6U;
	volatile int64_t t19 = 7096LL;

	t19 = (x77-((x78%x79)%x80));

	if (t19 != 252LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile uint8_t x82 = 17U;
	int16_t x83 = 1;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x81-((x82%x83)%x84));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x90 = 120;
	volatile int32_t x91 = INT32_MAX;
	uint64_t x92 = 9510147515LLU;

	t21 = (x89-((x90%x91)%x92));

	if (t21 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x93 = UINT32_MAX;
	uint32_t x95 = UINT32_MAX;
	volatile int8_t x96 = 59;
	volatile uint32_t t22 = 1488187U;

	t22 = (x93-((x94%x95)%x96));

	if (t22 != 4294967276U) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x98 = 296U;

	t23 = (x97-((x98%x99)%x100));

	if (t23 != 4294967256U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = UINT32_MAX;
	uint64_t x103 = 165835444396LLU;
	volatile uint64_t t24 = 40478798570203LLU;

	t24 = (x101-((x102%x103)%x104));

	if (t24 != 4294966803LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 12U;
	int16_t x106 = -2657;
	uint64_t x107 = 1963651071121LLU;
	int64_t x108 = -1LL;

	t25 = (x105-((x106%x107)%x108));

	if (t25 != 18446742381822073253LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = 1;
	int16_t x110 = -224;
	int32_t x111 = 161;
	int8_t x112 = -1;
	static int32_t t26 = 46292;

	t26 = (x109-((x110%x111)%x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x113 = 0U;
	static int8_t x114 = -1;
	volatile int16_t x115 = 1;
	static int32_t x116 = INT32_MIN;
	int32_t t27 = 3632965;

	t27 = (x113-((x114%x115)%x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	int64_t x118 = -2165505266924777080LL;
	uint8_t x119 = 19U;
	static int64_t t28 = -3696338835LL;

	t28 = (x117-((x118%x119)%x120));

	if (t28 != 265LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x121 = INT16_MAX;
	static int8_t x123 = 1;
	static int16_t x124 = INT16_MAX;

	t29 = (x121-((x122%x123)%x124));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 0U;
	int8_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	volatile uint32_t t30 = 9995U;

	t30 = (x125-((x126%x127)%x128));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x129 = INT16_MIN;
	int64_t x130 = INT64_MAX;
	int32_t x131 = 160170721;
	int32_t x132 = INT32_MIN;

	t31 = (x129-((x130%x131)%x132));

	if (t31 != -3527547LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x134 = -1343;
	int32_t x135 = -333;
	int64_t x136 = INT64_MIN;
	uint64_t t32 = 0LLU;

	t32 = (x133-((x134%x135)%x136));

	if (t32 != 10LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x141 = -1;
	int64_t x142 = INT64_MIN;
	int64_t x143 = 323857924LL;
	int8_t x144 = INT8_MAX;
	static volatile int64_t t33 = 4930873341LL;

	t33 = (x141-((x142%x143)%x144));

	if (t33 != 9LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x147 = INT8_MAX;
	static int32_t x148 = -13530502;
	int32_t t34 = -422124073;

	t34 = (x145-((x146%x147)%x148));

	if (t34 != 8) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = UINT16_MAX;
	static int16_t x151 = -1;
	static int64_t x152 = INT64_MIN;

	t35 = (x149-((x150%x151)%x152));

	if (t35 != 65535LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x154 = UINT32_MAX;
	int16_t x156 = INT16_MAX;
	uint32_t t36 = 1607U;

	t36 = (x153-((x154%x155)%x156));

	if (t36 != 83252U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 23U;
	uint64_t x158 = 461596LLU;
	uint32_t x159 = 250382103U;
	int64_t x160 = 20LL;
	static volatile uint64_t t37 = 84416LLU;

	t37 = (x157-((x158%x159)%x160));

	if (t37 != 7LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x162 = INT8_MIN;
	static uint8_t x163 = 8U;
	uint64_t x164 = 22491933712LLU;
	static volatile uint64_t t38 = 3890606809792LLU;

	t38 = (x161-((x162%x163)%x164));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = INT64_MIN;
	int32_t x168 = INT32_MAX;

	t39 = (x165-((x166%x167)%x168));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x170 = INT16_MAX;
	uint32_t x171 = 56693562U;
	volatile int64_t t40 = -165158698LL;

	t40 = (x169-((x170%x171)%x172));

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	static uint64_t x178 = UINT64_MAX;
	int64_t x179 = INT64_MIN;
	int32_t x180 = -7756321;
	uint64_t t41 = 263701514148263LLU;

	t41 = (x177-((x178%x179)%x180));

	if (t41 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = 905014;
	int32_t x182 = -1;
	int64_t x183 = INT64_MIN;
	static uint64_t x184 = 3LLU;

	t42 = (x181-((x182%x183)%x184));

	if (t42 != 905014LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x185 = 1U;
	uint16_t x186 = 52U;
	int16_t x187 = 933;
	volatile uint8_t x188 = UINT8_MAX;

	t43 = (x185-((x186%x187)%x188));

	if (t43 != -51) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile uint64_t x190 = 182950930157339184LLU;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	volatile uint64_t t44 = 549477690347408894LLU;

	t44 = (x189-((x190%x191)%x192));

	if (t44 != 18263793141404728784LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 38U;
	int64_t x198 = 143LL;
	uint16_t x199 = UINT16_MAX;
	static volatile int64_t x200 = INT64_MAX;
	volatile int64_t t45 = -124LL;

	t45 = (x197-((x198%x199)%x200));

	if (t45 != -105LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x205-((x206%x207)%x208));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	volatile uint32_t x211 = UINT32_MAX;
	static volatile uint64_t t47 = 3697167798137589LLU;

	t47 = (x209-((x210%x211)%x212));

	if (t47 != 18446744069414616960LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x213 = 37U;
	int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t48 = -1;

	t48 = (x213-((x214%x215)%x216));

	if (t48 != 38) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x217 = 11U;
	int64_t x218 = -22467LL;
	int16_t x219 = 104;
	int64_t x220 = INT64_MIN;
	int64_t t49 = -255091143464491LL;

	t49 = (x217-((x218%x219)%x220));

	if (t49 != 14LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x222 = UINT64_MAX;
	uint16_t x223 = 3187U;
	uint64_t t50 = 25044LLU;

	t50 = (x221-((x222%x223)%x224));

	if (t50 != 4294965953LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = 1U;
	static volatile int8_t x226 = -1;
	uint8_t x228 = 45U;

	t51 = (x225-((x226%x227)%x228));

	if (t51 != 2) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -965;
	static int32_t x230 = 72;
	volatile int16_t x231 = 15;
	volatile int32_t t52 = -233;

	t52 = (x229-((x230%x231)%x232));

	if (t52 != -977) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 84554914LLU;
	uint16_t x234 = 849U;
	uint64_t x235 = 15395175LLU;
	static uint64_t x236 = 92LLU;

	t53 = (x233-((x234%x235)%x236));

	if (t53 != 84554893LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MIN;
	volatile uint16_t x239 = UINT16_MAX;
	int64_t x240 = INT64_MIN;
	int64_t t54 = -5979055846790034LL;

	t54 = (x237-((x238%x239)%x240));

	if (t54 != -383LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x245 = 4U;
	int8_t x246 = INT8_MAX;
	volatile int8_t x247 = -1;
	uint32_t x248 = 21U;

	t55 = (x245-((x246%x247)%x248));

	if (t55 != 4U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = 38412501232LL;
	int16_t x251 = 2;
	int16_t x252 = 10;
	int64_t t56 = 1040807LL;

	t56 = (x249-((x250%x251)%x252));

	if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x253 = 753U;
	static int64_t x254 = INT64_MIN;
	int64_t x255 = INT64_MIN;
	static int64_t x256 = -1LL;
	static int64_t t57 = 96571511314449LL;

	t57 = (x253-((x254%x255)%x256));

	if (t57 != 753LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = -1;
	int8_t x258 = INT8_MIN;
	volatile uint8_t x259 = UINT8_MAX;
	uint32_t x260 = 26U;

	t58 = (x257-((x258%x259)%x260));

	if (t58 != 4294967271U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x261 = -28541;
	volatile int16_t x262 = INT16_MAX;
	int16_t x263 = -1;
	volatile int8_t x264 = -1;
	static int32_t t59 = -271817;

	t59 = (x261-((x262%x263)%x264));

	if (t59 != -28541) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = -1LL;
	uint16_t x266 = 805U;
	int32_t x268 = -2923632;
	volatile int64_t t60 = -656608223399975858LL;

	t60 = (x265-((x266%x267)%x268));

	if (t60 != -806LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x269 = INT32_MAX;
	int16_t x270 = -1;
	volatile int8_t x271 = INT8_MIN;
	volatile uint64_t t61 = 6013LLU;

	t61 = (x269-((x270%x271)%x272));

	if (t61 != 18446740380184811264LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x273 = -1;
	volatile int64_t x274 = 48955043793611LL;
	int16_t x276 = INT16_MIN;
	volatile int64_t t62 = 52358816009563410LL;

	t62 = (x273-((x274%x275)%x276));

	if (t62 != -8LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x278 = -1;
	static volatile int64_t x279 = INT64_MIN;
	uint8_t x280 = 62U;
	int64_t t63 = 77736753056623092LL;

	t63 = (x277-((x278%x279)%x280));

	if (t63 != 1052719840147591962LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x283 = INT16_MIN;
	int16_t x284 = INT16_MIN;
	static volatile uint64_t t64 = 11LLU;

	t64 = (x281-((x282%x283)%x284));

	if (t64 != 14487531109729463796LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x286 = -1;
	static uint16_t x287 = 2U;
	static uint16_t x288 = UINT16_MAX;
	int32_t t65 = -2871548;

	t65 = (x285-((x286%x287)%x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x289 = INT32_MAX;
	static int8_t x290 = INT8_MAX;
	static volatile int8_t x291 = INT8_MAX;
	static uint8_t x292 = 24U;
	int32_t t66 = INT32_MAX;

	t66 = (x289-((x290%x291)%x292));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = -1;
	volatile uint16_t x296 = 924U;
	volatile int32_t t67 = 960679;

	t67 = (x293-((x294%x295)%x296));

	if (t67 != -4) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x297 = -1;
	uint32_t x298 = 43144U;
	int8_t x299 = 7;
	uint8_t x300 = 33U;
	volatile uint32_t t68 = 1U;

	t68 = (x297-((x298%x299)%x300));

	if (t68 != 4294967292U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x303 = 116;
	int32_t x304 = 160488;
	static volatile uint32_t t69 = 5U;

	t69 = (x301-((x302%x303)%x304));

	if (t69 != 32752U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x305 = INT64_MIN;
	int64_t x306 = INT64_MAX;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = 7;
	volatile uint64_t t70 = 1342LLU;

	t70 = (x305-((x306%x307)%x308));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MAX;
	uint8_t x310 = 30U;
	static volatile uint32_t x311 = 28U;
	static volatile uint64_t x312 = 45299LLU;
	uint64_t t71 = 1LLU;

	t71 = (x309-((x310%x311)%x312));

	if (t71 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = -1424;
	volatile uint32_t x315 = 1984332U;
	volatile uint32_t t72 = 106796356U;

	t72 = (x313-((x314%x315)%x316));

	if (t72 != 2146612224U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x317 = -1;
	volatile int32_t x318 = INT32_MAX;
	uint32_t x319 = UINT32_MAX;
	volatile int8_t x320 = INT8_MAX;
	uint32_t t73 = 23391U;

	t73 = (x317-((x318%x319)%x320));

	if (t73 != 4294967288U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x321 = UINT64_MAX;
	int8_t x322 = INT8_MIN;
	volatile int64_t x324 = INT64_MIN;
	volatile uint64_t t74 = 5LLU;

	t74 = (x321-((x322%x323)%x324));

	if (t74 != 127LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x325 = 18U;
	uint8_t x326 = 3U;
	uint16_t x328 = UINT16_MAX;
	int64_t t75 = 2184LL;

	t75 = (x325-((x326%x327)%x328));

	if (t75 != 15LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x329 = -3463LL;
	int64_t x330 = INT64_MIN;
	volatile int64_t t76 = -25LL;

	t76 = (x329-((x330%x331)%x332));

	if (t76 != -3463LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x334 = 25835858U;
	int32_t x335 = -1;
	static uint64_t x336 = 612855936LLU;
	volatile uint64_t t77 = 2124LLU;

	t77 = (x333-((x334%x335)%x336));

	if (t77 != 18446744073683715885LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = -1;
	int16_t x338 = INT16_MIN;
	volatile uint64_t x339 = 1931631898417LLU;
	int32_t x340 = -1;

	t78 = (x337-((x338%x339)%x340));

	if (t78 != 18446742731036362958LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x345 = 1962U;
	volatile int64_t x346 = 1702424LL;
	int16_t x347 = INT16_MAX;
	volatile int32_t x348 = 975892471;
	volatile int64_t t79 = 2781192488224368524LL;

	t79 = (x345-((x346%x347)%x348));

	if (t79 != -29345LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x349 = 288211610001193LLU;
	uint32_t x352 = 5882U;
	uint64_t t80 = 118137476214222076LLU;

	t80 = (x349-((x350%x351)%x352));

	if (t80 != 288211609997836LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x353 = INT32_MIN;
	static int8_t x354 = -1;
	volatile uint16_t x355 = UINT16_MAX;
	uint32_t x356 = 11U;
	uint32_t t81 = 764713319U;

	t81 = (x353-((x354%x355)%x356));

	if (t81 != 2147483645U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = -31;
	volatile int16_t x362 = INT16_MAX;
	static int8_t x363 = -1;
	uint64_t t82 = 751LLU;

	t82 = (x361-((x362%x363)%x364));

	if (t82 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x366 = -4;
	static int32_t x367 = INT32_MIN;
	volatile int32_t x368 = INT32_MAX;
	int32_t t83 = 299884;

	t83 = (x365-((x366%x367)%x368));

	if (t83 != 28) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = -31;
	uint16_t x370 = 6U;
	int64_t x371 = 684756556615488LL;
	int32_t x372 = INT32_MIN;

	t84 = (x369-((x370%x371)%x372));

	if (t84 != -37LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = -1;
	uint8_t x374 = 0U;
	volatile uint64_t x375 = UINT64_MAX;
	static int32_t x376 = INT32_MIN;
	uint64_t t85 = UINT64_MAX;

	t85 = (x373-((x374%x375)%x376));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x378 = UINT32_MAX;
	static int8_t x379 = 24;
	uint32_t t86 = 31U;

	t86 = (x377-((x378%x379)%x380));

	if (t86 != 15193U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x381 = 55;
	int32_t x382 = INT32_MIN;
	int8_t x384 = INT8_MAX;

	t87 = (x381-((x382%x383)%x384));

	if (t87 != 56) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x385 = 44394551582271LLU;
	int8_t x387 = 42;
	uint64_t t88 = 4293LLU;

	t88 = (x385-((x386%x387)%x388));

	if (t88 != 44394551582272LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x390 = 98998121LLU;
	int32_t x391 = INT32_MAX;
	int8_t x392 = INT8_MAX;
	volatile uint64_t t89 = 59449LLU;

	t89 = (x389-((x390%x391)%x392));

	if (t89 != 18446744073709547456LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x394 = UINT16_MAX;
	uint64_t x395 = 770623062753095860LLU;
	uint8_t x396 = UINT8_MAX;
	uint64_t t90 = 17849051620678LLU;

	t90 = (x393-((x394%x395)%x396));

	if (t90 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x397 = INT16_MAX;
	int32_t x398 = -1;
	int8_t x399 = INT8_MIN;
	int16_t x400 = -75;
	volatile int32_t t91 = -7101611;

	t91 = (x397-((x398%x399)%x400));

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x406 = INT16_MIN;
	static volatile int64_t x407 = INT64_MIN;
	int32_t x408 = -54096904;
	volatile int64_t t92 = 893510955LL;

	t92 = (x405-((x406%x407)%x408));

	if (t92 != 32767LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x409 = 1U;
	volatile int8_t x410 = INT8_MAX;
	volatile uint64_t x411 = 10100917124440LLU;
	static int16_t x412 = -3192;
	volatile uint64_t t93 = 626201LLU;

	t93 = (x409-((x410%x411)%x412));

	if (t93 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = -1;
	int32_t x414 = 561;
	static int64_t x416 = 813161049130LL;
	volatile int64_t t94 = -6388LL;

	t94 = (x413-((x414%x415)%x416));

	if (t94 != -562LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int8_t x419 = 11;
	volatile int16_t x420 = -1;

	t95 = (x417-((x418%x419)%x420));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x422 = 272140503971LL;
	int16_t x423 = -19;
	int8_t x424 = -1;
	int64_t t96 = -5640024191441477LL;

	t96 = (x421-((x422%x423)%x424));

	if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x427 = UINT16_MAX;
	uint32_t x428 = 31U;

	t97 = (x425-((x426%x427)%x428));

	if (t97 != 127U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x429 = -1LL;
	static int64_t x430 = INT64_MIN;
	int32_t x431 = 449575;
	volatile int64_t x432 = INT64_MIN;
	volatile int64_t t98 = -268865182806LL;

	t98 = (x429-((x430%x431)%x432));

	if (t98 != 405132LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MIN;
	int16_t x434 = -1;
	volatile uint32_t x435 = 3U;

	t99 = (x433-((x434%x435)%x436));

	if (t99 != -2147483648LL) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

