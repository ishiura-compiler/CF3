#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x1 = -1;
uint8_t x2 = 0U;
int32_t x4 = INT32_MIN;
volatile uint8_t x5 = 20U;
uint32_t x6 = 3475U;
volatile int64_t x7 = -1LL;
volatile int32_t x15 = INT32_MIN;
int16_t x17 = INT16_MIN;
int32_t x26 = INT32_MAX;
volatile int32_t x27 = INT32_MAX;
volatile uint32_t t6 = 460895409U;
volatile uint32_t t7 = 440335U;
int8_t x37 = INT8_MIN;
static uint8_t x39 = 13U;
int16_t x46 = INT16_MAX;
volatile int64_t t10 = INT64_MIN;
volatile uint16_t x49 = UINT16_MAX;
volatile uint64_t x50 = 387264669LLU;
static int16_t x52 = INT16_MIN;
volatile uint64_t x53 = UINT64_MAX;
static int32_t x54 = -1390;
int32_t x60 = INT32_MIN;
volatile uint64_t t13 = 227758764834LLU;
int32_t x62 = INT32_MAX;
volatile uint8_t x67 = UINT8_MAX;
static int16_t x69 = INT16_MIN;
int64_t x70 = INT64_MIN;
int32_t x72 = -1;
volatile int64_t t16 = 773887715977LL;
volatile int64_t x73 = 2LL;
uint16_t x74 = 3U;
static int64_t x75 = -1LL;
volatile uint64_t x83 = 18842817006717745LLU;
static volatile int8_t x84 = INT8_MIN;
int16_t x89 = -2856;
int32_t t20 = -15133475;
static volatile int64_t t21 = -8LL;
int32_t x101 = -6127616;
static int8_t x103 = INT8_MAX;
volatile int64_t x110 = 5521769LL;
int8_t x111 = -3;
int32_t x120 = 62988;
int16_t x121 = 14801;
static int32_t x123 = 7973;
uint32_t x142 = UINT32_MAX;
uint64_t x144 = 1LLU;
static uint32_t x147 = 2459441U;
int32_t x149 = -1;
volatile int32_t t34 = -881539233;
int8_t x154 = 1;
int32_t t35 = 1;
int64_t x165 = INT64_MIN;
volatile int64_t t38 = 1474783LL;
int32_t t39 = -31920;
int64_t t40 = -301420434308634LL;
int16_t x179 = INT16_MIN;
int64_t t41 = INT64_MIN;
int32_t x182 = INT32_MIN;
int64_t x187 = 10813778933190LL;
uint64_t t45 = 6LLU;
int16_t x197 = -208;
int32_t t46 = 75;
volatile int32_t x201 = -22291;
uint64_t x205 = UINT64_MAX;
int16_t x210 = INT16_MAX;
int8_t x218 = -1;
static int8_t x222 = -3;
int64_t x234 = -1LL;
uint32_t x235 = 1598556U;
int64_t x249 = 19224832045724115LL;
volatile int64_t x250 = 1408169167883LL;
int64_t t58 = -1152428542641LL;
int16_t x262 = -9754;
uint8_t x264 = 8U;
int32_t x270 = -1;
volatile uint8_t x282 = 2U;
static volatile int32_t x294 = INT32_MIN;
uint8_t x296 = 0U;
static uint32_t x297 = UINT32_MAX;
int16_t x310 = INT16_MIN;
int32_t x312 = INT32_MAX;
int8_t x314 = INT8_MIN;
int64_t x324 = 12043012550LL;
int64_t x328 = 730441LL;
int64_t x329 = INT64_MIN;
static int64_t t78 = INT64_MIN;
uint64_t t82 = UINT64_MAX;
int32_t x350 = 304;
int64_t x351 = -1LL;
uint8_t x358 = 0U;
int64_t t86 = -55LL;
volatile int32_t t87 = 18;
static uint32_t t88 = 185163151U;
int16_t x373 = INT16_MAX;
static int8_t x378 = -1;
int16_t x406 = 48;
uint64_t x408 = 127554LLU;
volatile uint32_t x411 = UINT32_MAX;


void f0(void) {
	volatile uint16_t x3 = 424U;
	int32_t t0 = INT32_MIN;

	t0 = (x1&((x2/x3)|x4));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x8 = -1;
	int64_t t1 = 143916047933846328LL;

	t1 = (x5&((x6/x7)|x8));

	if (t1 != 20LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	uint8_t x10 = UINT8_MAX;
	static int32_t x11 = -1;
	uint64_t x12 = 5677989514LLU;
	volatile uint64_t t2 = 1LLU;

	t2 = (x9&((x10/x11)|x12));

	if (t2 != 139LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int64_t x14 = -1LL;
	uint8_t x16 = 19U;
	volatile int64_t t3 = 281529764995783848LL;

	t3 = (x13&((x14/x15)|x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x18 = -3705594595119657591LL;
	int64_t x19 = INT64_MIN;
	uint32_t x20 = UINT32_MAX;
	static volatile int64_t t4 = -335617866160LL;

	t4 = (x17&((x18/x19)|x20));

	if (t4 != 4294934528LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = UINT32_MAX;
	int32_t x28 = INT32_MIN;
	uint32_t t5 = 5765U;

	t5 = (x25&((x26/x27)|x28));

	if (t5 != 2147483649U) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 4U;
	volatile uint8_t x30 = UINT8_MAX;
	volatile int32_t x31 = INT32_MIN;
	int8_t x32 = -1;

	t6 = (x29&((x30/x31)|x32));

	if (t6 != 4U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	static int8_t x34 = 3;
	volatile uint32_t x35 = UINT32_MAX;
	int8_t x36 = INT8_MIN;

	t7 = (x33&((x34/x35)|x36));

	if (t7 != 4294967168U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x38 = UINT16_MAX;
	int8_t x40 = 20;
	volatile int32_t t8 = 258976;

	t8 = (x37&((x38/x39)|x40));

	if (t8 != 4992) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 2U;
	uint64_t x42 = 54LLU;
	uint16_t x43 = 482U;
	volatile int8_t x44 = INT8_MIN;
	volatile uint64_t t9 = 289612717LLU;

	t9 = (x41&((x42/x43)|x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = INT64_MIN;
	static int8_t x47 = INT8_MIN;
	static volatile int16_t x48 = INT16_MIN;

	t10 = (x45&((x46/x47)|x48));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x51 = -1;
	uint64_t t11 = 16662775266270LLU;

	t11 = (x49&((x50/x51)|x52));

	if (t11 != 32768LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x55 = INT16_MIN;
	int64_t x56 = -33067888LL;
	volatile uint64_t t12 = 258LLU;

	t12 = (x53&((x54/x55)|x56));

	if (t12 != 18446744073676483728LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	static uint64_t x58 = UINT64_MAX;
	int16_t x59 = 10;

	t13 = (x57&((x58/x59)|x60));

	if (t13 != 18446744071991564672LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = 14U;
	int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	int64_t t14 = 2LL;

	t14 = (x61&((x62/x63)|x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 203288083588854396LLU;
	int8_t x66 = INT8_MIN;
	static volatile uint16_t x68 = 887U;
	static volatile uint64_t t15 = 1477LLU;

	t15 = (x65&((x66/x67)|x68));

	if (t15 != 628LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x71 = 4U;

	t16 = (x69&((x70/x71)|x72));

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x76 = INT32_MAX;
	int64_t t17 = -88LL;

	t17 = (x73&((x74/x75)|x76));

	if (t17 != 2LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x77 = INT8_MAX;
	volatile uint64_t x78 = 1519779LLU;
	volatile int32_t x79 = INT32_MIN;
	int16_t x80 = 5;
	uint64_t t18 = 14LLU;

	t18 = (x77&((x78/x79)|x80));

	if (t18 != 5LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = -1LL;
	uint64_t t19 = 500415418LLU;

	t19 = (x81&((x82/x83)|x84));

	if (t19 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = -1;
	int8_t x92 = -1;

	t20 = (x89&((x90/x91)|x92));

	if (t20 != -2856) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -27366930;
	int16_t x94 = -1;
	int64_t x95 = INT64_MIN;
	static int64_t x96 = 46702273862987349LL;

	t21 = (x93&((x94/x95)|x96));

	if (t21 != 46702273837819972LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	int32_t x98 = 295184516;
	int32_t x99 = INT32_MIN;
	int32_t x100 = -50053;
	int32_t t22 = 637173;

	t22 = (x97&((x98/x99)|x100));

	if (t22 != 123) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x102 = -1;
	uint64_t x104 = 179026004594946LLU;
	static uint64_t t23 = 2762LLU;

	t23 = (x101&((x102/x103)|x104));

	if (t23 != 179025999855616LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = -1;
	int32_t x107 = -347034757;
	int32_t x108 = INT32_MAX;
	volatile int64_t t24 = 110789467736535LL;

	t24 = (x105&((x106/x107)|x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x109 = UINT64_MAX;
	int16_t x112 = INT16_MAX;
	uint64_t t25 = 150886877205LLU;

	t25 = (x109&((x110/x111)|x112));

	if (t25 != 18446744073707716607LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -667;
	int32_t x118 = 23;
	int64_t x119 = INT64_MAX;
	int64_t t26 = 8595502872587628LL;

	t26 = (x117&((x118/x119)|x120));

	if (t26 != 62468LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x122 = INT8_MIN;
	int32_t x124 = -1;
	volatile int32_t t27 = -377225029;

	t27 = (x121&((x122/x123)|x124));

	if (t27 != 14801) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = INT32_MAX;
	volatile int8_t x128 = -2;
	int32_t t28 = 421;

	t28 = (x125&((x126/x127)|x128));

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x129 = UINT64_MAX;
	volatile int8_t x130 = -1;
	static uint8_t x131 = 27U;
	uint8_t x132 = UINT8_MAX;
	uint64_t t29 = 45095LLU;

	t29 = (x129&((x130/x131)|x132));

	if (t29 != 255LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 595U;
	static int32_t x134 = 992194;
	volatile int8_t x135 = 7;
	static int32_t x136 = INT32_MIN;
	volatile int32_t t30 = -804353;

	t30 = (x133&((x134/x135)|x136));

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x137 = INT32_MIN;
	uint8_t x138 = 0U;
	volatile int8_t x139 = INT8_MAX;
	int32_t x140 = -1;
	int32_t t31 = INT32_MIN;

	t31 = (x137&((x138/x139)|x140));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 23U;
	static int8_t x143 = INT8_MIN;
	uint64_t t32 = 8347597316249LLU;

	t32 = (x141&((x142/x143)|x144));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = 10377947074924686LLU;
	uint8_t x146 = 16U;
	int32_t x148 = -588878718;
	volatile uint64_t t33 = 1LLU;

	t33 = (x145&((x146/x147)|x148));

	if (t33 != 417726594LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x150 = UINT16_MAX;
	volatile uint16_t x151 = UINT16_MAX;
	static uint16_t x152 = UINT16_MAX;

	t34 = (x149&((x150/x151)|x152));

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = UINT8_MAX;
	static int16_t x155 = -1;
	static int16_t x156 = 128;

	t35 = (x153&((x154/x155)|x156));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	volatile int8_t x160 = 8;
	uint32_t t36 = 162960U;

	t36 = (x157&((x158/x159)|x160));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = -67398LL;
	int16_t x162 = -1;
	static volatile int64_t x163 = -1LL;
	uint32_t x164 = 154329566U;
	static volatile int64_t t37 = 113091330446LL;

	t37 = (x161&((x162/x163)|x164));

	if (t37 != 154329242LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x166 = -1;
	uint16_t x167 = UINT16_MAX;
	uint32_t x168 = UINT32_MAX;

	t38 = (x165&((x166/x167)|x168));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = 238U;
	uint16_t x170 = UINT16_MAX;
	int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;

	t39 = (x169&((x170/x171)|x172));

	if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x173 = -1LL;
	int16_t x174 = -26;
	static int16_t x175 = 14256;
	uint16_t x176 = 6941U;

	t40 = (x173&((x174/x175)|x176));

	if (t40 != 6941LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x177 = -52;
	uint8_t x178 = UINT8_MAX;
	volatile int64_t x180 = INT64_MIN;

	t41 = (x177&((x178/x179)|x180));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 61408U;
	static volatile int32_t x183 = -3963930;
	uint32_t x184 = UINT32_MAX;
	static volatile uint32_t t42 = 7U;

	t42 = (x181&((x182/x183)|x184));

	if (t42 != 61408U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	static int32_t x186 = -9684779;
	static int16_t x188 = INT16_MAX;
	volatile int64_t t43 = -20781LL;

	t43 = (x185&((x186/x187)|x188));

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -1;
	volatile int16_t x190 = INT16_MIN;
	uint8_t x191 = UINT8_MAX;
	int16_t x192 = -1;
	static volatile int32_t t44 = -46411;

	t44 = (x189&((x190/x191)|x192));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -1LL;
	volatile uint64_t x194 = 0LLU;
	int8_t x195 = INT8_MAX;
	uint8_t x196 = 18U;

	t45 = (x193&((x194/x195)|x196));

	if (t45 != 18LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x198 = 9U;
	int32_t x199 = -721;
	static int16_t x200 = INT16_MIN;

	t46 = (x197&((x198/x199)|x200));

	if (t46 != -32768) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x202 = INT8_MIN;
	static int64_t x203 = -1LL;
	static uint32_t x204 = 1U;
	static int64_t t47 = 967343LL;

	t47 = (x201&((x202/x203)|x204));

	if (t47 != 129LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x206 = 1028296801092646LLU;
	static uint16_t x207 = 15U;
	static int32_t x208 = INT32_MAX;
	uint64_t t48 = 5933105460982032LLU;

	t48 = (x205&((x206/x207)|x208));

	if (t48 != 68554120495103LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x209 = -4939;
	int8_t x211 = 25;
	int32_t x212 = INT32_MAX;
	int32_t t49 = -27575697;

	t49 = (x209&((x210/x211)|x212));

	if (t49 != 2147478709) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	static int8_t x214 = 2;
	int8_t x215 = -1;
	int32_t x216 = INT32_MAX;
	int32_t t50 = -9681680;

	t50 = (x213&((x214/x215)|x216));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x217 = -1;
	uint64_t x219 = UINT64_MAX;
	static int32_t x220 = 5;
	volatile uint64_t t51 = 550855813338915781LLU;

	t51 = (x217&((x218/x219)|x220));

	if (t51 != 5LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x221 = 0U;
	static int64_t x223 = INT64_MIN;
	int32_t x224 = -123023601;
	int64_t t52 = 1813294671LL;

	t52 = (x221&((x222/x223)|x224));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = 25255U;
	volatile uint64_t x226 = UINT64_MAX;
	int32_t x227 = INT32_MIN;
	static int64_t x228 = INT64_MIN;
	uint64_t t53 = 6535764895970741LLU;

	t53 = (x225&((x226/x227)|x228));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x233 = 1564194032LLU;
	int8_t x236 = -1;
	uint64_t t54 = 5975540106LLU;

	t54 = (x233&((x234/x235)|x236));

	if (t54 != 1564194032LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = -51;
	int8_t x238 = 3;
	static uint64_t x239 = 648LLU;
	uint32_t x240 = UINT32_MAX;
	volatile uint64_t t55 = 2797682733174LLU;

	t55 = (x237&((x238/x239)|x240));

	if (t55 != 4294967245LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MAX;
	uint32_t x242 = 153820564U;
	int32_t x243 = -99616448;
	static int8_t x244 = -1;
	volatile int64_t t56 = -190107898838822740LL;

	t56 = (x241&((x242/x243)|x244));

	if (t56 != 4294967295LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x245 = 662480948LLU;
	static uint64_t x246 = 40613479LLU;
	int32_t x247 = -10910;
	int64_t x248 = 198148460334LL;
	uint64_t t57 = 634979529388911LLU;

	t57 = (x245&((x246/x247)|x248));

	if (t57 != 571508772LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x251 = -27;
	int16_t x252 = INT16_MAX;

	t58 = (x249&((x250/x251)|x252));

	if (t58 != 19224831968063955LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -1;
	int64_t x254 = -28LL;
	int16_t x255 = -1;
	int64_t x256 = -520118511378704LL;
	volatile int64_t t59 = 470LL;

	t59 = (x253&((x254/x255)|x256));

	if (t59 != -520118511378692LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = -197227057378296LL;
	uint32_t x258 = 823327U;
	int16_t x259 = -1;
	int16_t x260 = INT16_MIN;
	volatile int64_t t60 = -3915418445688756LL;

	t60 = (x257&((x258/x259)|x260));

	if (t60 != 2135818240LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x261 = UINT32_MAX;
	uint16_t x263 = UINT16_MAX;
	volatile uint32_t t61 = 0U;

	t61 = (x261&((x262/x263)|x264));

	if (t61 != 8U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x265 = 206974062U;
	int32_t x266 = INT32_MIN;
	int32_t x267 = 14137851;
	volatile uint8_t x268 = 1U;
	volatile uint32_t t62 = 3175066U;

	t62 = (x265&((x266/x267)|x268));

	if (t62 != 206974056U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x269 = 1U;
	int8_t x271 = INT8_MIN;
	int32_t x272 = INT32_MAX;
	volatile int32_t t63 = 15841363;

	t63 = (x269&((x270/x271)|x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 7;
	uint8_t x274 = UINT8_MAX;
	int8_t x275 = -1;
	uint8_t x276 = 1U;
	int32_t t64 = 455820;

	t64 = (x273&((x274/x275)|x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MIN;
	uint32_t x278 = 9158698U;
	volatile int8_t x279 = INT8_MIN;
	int16_t x280 = INT16_MIN;
	uint32_t t65 = 0U;

	t65 = (x277&((x278/x279)|x280));

	if (t65 != 4294934528U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x283 = 1789333LLU;
	volatile int8_t x284 = -1;
	uint64_t t66 = 12893LLU;

	t66 = (x281&((x282/x283)|x284));

	if (t66 != 4294967295LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int16_t x286 = 162;
	volatile uint16_t x287 = 19441U;
	volatile int64_t x288 = INT64_MIN;
	static int64_t t67 = -16944176382630015LL;

	t67 = (x285&((x286/x287)|x288));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x289 = -1LL;
	int8_t x290 = INT8_MIN;
	uint64_t x291 = 158LLU;
	static int16_t x292 = -1;
	uint64_t t68 = UINT64_MAX;

	t68 = (x289&((x290/x291)|x292));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MAX;
	static volatile uint8_t x295 = 31U;
	volatile int32_t t69 = 90522668;

	t69 = (x293&((x294/x295)|x296));

	if (t69 != 30654) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x298 = INT8_MIN;
	uint32_t x299 = 117996U;
	int16_t x300 = INT16_MIN;
	volatile uint32_t t70 = 0U;

	t70 = (x297&((x298/x299)|x300));

	if (t70 != 4294938159U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1LL;
	uint8_t x302 = 1U;
	int32_t x303 = INT32_MIN;
	int16_t x304 = INT16_MIN;
	int64_t t71 = 14407484324LL;

	t71 = (x301&((x302/x303)|x304));

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x305 = 3U;
	static int32_t x306 = INT32_MIN;
	static uint32_t x307 = UINT32_MAX;
	volatile uint64_t x308 = 44931826721545LLU;
	volatile uint64_t t72 = 3874856959976870LLU;

	t72 = (x305&((x306/x307)|x308));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = INT64_MAX;
	uint32_t x311 = UINT32_MAX;
	int64_t t73 = -263LL;

	t73 = (x309&((x310/x311)|x312));

	if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = -10;
	int32_t x315 = INT32_MIN;
	uint8_t x316 = 12U;
	volatile int32_t t74 = -23;

	t74 = (x313&((x314/x315)|x316));

	if (t74 != 4) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x317 = INT16_MIN;
	int32_t x318 = INT32_MAX;
	volatile uint64_t x319 = 3893369125545LLU;
	uint32_t x320 = UINT32_MAX;
	volatile uint64_t t75 = 1865563548LLU;

	t75 = (x317&((x318/x319)|x320));

	if (t75 != 4294934528LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x321 = 0LLU;
	static int64_t x322 = INT64_MIN;
	static uint16_t x323 = 58U;
	static uint64_t t76 = 1573497394501308LLU;

	t76 = (x321&((x322/x323)|x324));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x325 = 72U;
	volatile int64_t x326 = 4332061LL;
	volatile uint32_t x327 = 38745U;
	volatile int64_t t77 = -385427846368018387LL;

	t77 = (x325&((x326/x327)|x328));

	if (t77 != 72LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x330 = 31U;
	int16_t x331 = -1;
	uint8_t x332 = UINT8_MAX;

	t78 = (x329&((x330/x331)|x332));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x333 = -10108082845LL;
	int8_t x334 = 0;
	int32_t x335 = 1;
	volatile uint8_t x336 = 1U;
	int64_t t79 = 611219477754LL;

	t79 = (x333&((x334/x335)|x336));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = INT32_MIN;
	uint32_t x338 = 6306784U;
	int32_t x339 = INT32_MIN;
	static int64_t x340 = -48667LL;
	volatile int64_t t80 = 27799284755538085LL;

	t80 = (x337&((x338/x339)|x340));

	if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MIN;
	static volatile int16_t x342 = 76;
	uint32_t x343 = 100965957U;
	static uint64_t x344 = 6892305790LLU;
	uint64_t t81 = 348206199250LLU;

	t81 = (x341&((x342/x343)|x344));

	if (t81 != 6892290048LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x345 = UINT64_MAX;
	volatile int32_t x346 = INT32_MIN;
	int64_t x347 = 3037LL;
	static int64_t x348 = -1LL;

	t82 = (x345&((x346/x347)|x348));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = -9;
	int64_t x352 = INT64_MIN;
	static volatile int64_t t83 = 1602542LL;

	t83 = (x349&((x350/x351)|x352));

	if (t83 != -304LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x353 = 9;
	int16_t x354 = INT16_MAX;
	int32_t x355 = -1;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t84 = 55452U;

	t84 = (x353&((x354/x355)|x356));

	if (t84 != 9U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x357 = UINT8_MAX;
	static uint16_t x359 = 36U;
	static int64_t x360 = -1LL;
	volatile int64_t t85 = -5161LL;

	t85 = (x357&((x358/x359)|x360));

	if (t85 != 255LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = INT64_MIN;
	int16_t x362 = INT16_MAX;
	static int64_t x363 = INT64_MAX;
	uint32_t x364 = 2U;

	t86 = (x361&((x362/x363)|x364));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = INT32_MAX;
	int8_t x366 = -1;
	int32_t x367 = -1;
	int32_t x368 = INT32_MIN;

	t87 = (x365&((x366/x367)|x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x369 = -5005;
	int32_t x370 = 35479;
	uint8_t x371 = UINT8_MAX;
	uint32_t x372 = UINT32_MAX;

	t88 = (x369&((x370/x371)|x372));

	if (t88 != 4294962291U) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x374 = 0;
	int16_t x375 = INT16_MAX;
	uint64_t x376 = 109949LLU;
	volatile uint64_t t89 = 1667280110893LLU;

	t89 = (x373&((x374/x375)|x376));

	if (t89 != 11645LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	static uint16_t x379 = 50U;
	int8_t x380 = 1;
	int64_t t90 = -6LL;

	t90 = (x377&((x378/x379)|x380));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x381 = -17;
	static volatile uint32_t x382 = UINT32_MAX;
	uint32_t x383 = 245U;
	int16_t x384 = INT16_MIN;
	volatile uint32_t t91 = 0U;

	t91 = (x381&((x382/x383)|x384));

	if (t91 != 4294966894U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = -6611;
	volatile int16_t x386 = -3;
	int16_t x387 = INT16_MIN;
	static uint64_t x388 = 3501661593785367446LLU;
	uint64_t t92 = 13LLU;

	t92 = (x385&((x386/x387)|x388));

	if (t92 != 3501661593785360900LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x389 = 2025;
	volatile uint64_t x390 = 1787642219318LLU;
	int8_t x391 = INT8_MIN;
	static int64_t x392 = INT64_MIN;
	uint64_t t93 = 108899254930004LLU;

	t93 = (x389&((x390/x391)|x392));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x393 = -1;
	int32_t x394 = INT32_MAX;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = 100U;
	static int32_t t94 = -372686000;

	t94 = (x393&((x394/x395)|x396));

	if (t94 != 100) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	static int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MIN;
	static volatile int64_t t95 = INT64_MIN;

	t95 = (x397&((x398/x399)|x400));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = INT16_MIN;
	static int16_t x402 = INT16_MIN;
	int8_t x403 = INT8_MIN;
	uint16_t x404 = 252U;
	volatile int32_t t96 = 6;

	t96 = (x401&((x402/x403)|x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x405 = INT32_MIN;
	volatile int64_t x407 = INT64_MIN;
	volatile uint64_t t97 = 2469400LLU;

	t97 = (x405&((x406/x407)|x408));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x409 = -4;
	static int8_t x410 = -1;
	static int32_t x412 = 1;
	volatile uint32_t t98 = 3149U;

	t98 = (x409&((x410/x411)|x412));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = INT8_MIN;
	static int32_t x414 = 4;
	uint16_t x415 = 12294U;
	int64_t x416 = -1LL;
	static volatile int64_t t99 = -129522266485890588LL;

	t99 = (x413&((x414/x415)|x416));

	if (t99 != -128LL) { NG(); } else { ; }
	
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

