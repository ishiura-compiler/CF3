#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x6 = INT32_MIN;
static volatile uint32_t t0 = 1U;
static uint16_t x10 = UINT16_MAX;
volatile uint64_t t3 = UINT64_MAX;
volatile int16_t x21 = -1;
volatile int8_t x27 = INT8_MAX;
int16_t x32 = INT16_MIN;
int32_t x38 = INT32_MIN;
uint8_t x47 = UINT8_MAX;
int64_t x48 = INT64_MIN;
volatile int16_t x55 = -15;
volatile int32_t x56 = INT32_MAX;
uint64_t x62 = UINT64_MAX;
int8_t x73 = INT8_MIN;
int64_t x76 = INT64_MIN;
static uint16_t x77 = 145U;
static int8_t x78 = INT8_MIN;
static uint64_t x85 = 3296LLU;
uint8_t x91 = 1U;
volatile uint64_t t18 = 41034LLU;
int64_t x109 = INT64_MAX;
int16_t x110 = -1;
int8_t x112 = INT8_MAX;
uint64_t x114 = 26389LLU;
int16_t x115 = INT16_MIN;
int8_t x132 = -6;
volatile int32_t t28 = 31;
uint64_t t29 = 1163971941281137LLU;
static volatile int64_t x147 = -1LL;
static uint32_t x155 = 251476U;
int8_t x160 = 30;
uint64_t x161 = UINT64_MAX;
int32_t x166 = 0;
uint8_t x168 = UINT8_MAX;
volatile int64_t x170 = -3099395858222292290LL;
int8_t x174 = 16;
int16_t x178 = -2;
int64_t x184 = 178284637312LL;
static int16_t x188 = INT16_MIN;
static int16_t x201 = INT16_MIN;
static int32_t x216 = -704981;
uint16_t x218 = 19U;
static int64_t x221 = -1LL;
volatile uint8_t x222 = 1U;
int64_t x224 = INT64_MIN;
int8_t x227 = 6;
int8_t x228 = -19;
volatile int64_t t49 = -2668402929LL;
int64_t x236 = -29489951349743404LL;
uint16_t x245 = 2U;
int32_t x247 = -1;
int16_t x253 = 1471;
volatile int8_t x258 = INT8_MAX;
uint16_t x265 = 2243U;
volatile int64_t x270 = -3826175LL;
uint16_t x271 = UINT16_MAX;
static uint64_t t61 = 260525LLU;
static int64_t x280 = -1LL;
volatile int64_t t62 = -1LL;
int8_t x283 = 2;
volatile int16_t x285 = INT16_MIN;
volatile int32_t x287 = -1;
volatile uint8_t x293 = 18U;
static volatile int64_t t66 = 901737084619044LL;
uint32_t x303 = 18U;
static int16_t x311 = INT16_MAX;
uint64_t t71 = 121286LLU;
uint32_t x317 = UINT32_MAX;
uint16_t x319 = UINT16_MAX;
uint64_t x320 = UINT64_MAX;
uint64_t t72 = 213474689155569LLU;
volatile uint64_t x324 = UINT64_MAX;
volatile int8_t x325 = INT8_MIN;
uint32_t x329 = 9965138U;
int64_t x332 = INT64_MIN;
int64_t t75 = -259714403717LL;
int32_t x336 = -1;
static int64_t x337 = INT64_MIN;
uint8_t x345 = UINT8_MAX;
volatile int64_t t78 = 460071143758LL;
static volatile uint16_t x356 = 615U;
int8_t x359 = INT8_MAX;
int16_t x360 = -1;
int16_t x366 = INT16_MIN;
uint64_t x367 = 15565725LLU;
volatile uint64_t t83 = 2534502203962LLU;
volatile int64_t t84 = 0LL;
int64_t x379 = INT64_MIN;
int64_t x381 = 1566510LL;
int32_t x383 = INT32_MAX;
volatile int64_t x388 = INT64_MAX;
int8_t x389 = INT8_MIN;
int32_t x391 = INT32_MIN;
volatile int64_t t89 = -50LL;
int32_t x396 = -774;
int16_t x402 = INT16_MIN;
int32_t x416 = 691357;
volatile int16_t x421 = INT16_MAX;
int64_t t96 = -60662242LL;


void f0(void) {
	int16_t x5 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	static uint32_t x8 = 9U;

	t0 = (x5|(x6-(x7^x8)));

	if (t0 != 4294934538U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	static int8_t x12 = 1;
	uint64_t t1 = UINT64_MAX;

	t1 = (x9|(x10-(x11^x12)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	static uint8_t x14 = UINT8_MAX;
	volatile uint32_t x15 = UINT32_MAX;
	uint8_t x16 = 3U;
	uint32_t t2 = 42U;

	t2 = (x13|(x14-(x15^x16)));

	if (t2 != 2147483907U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = -1;
	int64_t x18 = INT64_MIN;
	int16_t x19 = 6;
	uint64_t x20 = UINT64_MAX;

	t3 = (x17|(x18-(x19^x20)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = -902553;
	volatile int64_t x23 = 29204470833205193LL;
	int8_t x24 = INT8_MIN;
	volatile int64_t t4 = -1LL;

	t4 = (x21|(x22-(x23^x24)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 3U;
	int32_t x26 = -1;
	static int8_t x28 = -58;
	int32_t t5 = -1377;

	t5 = (x25|(x26-(x27^x28)));

	if (t5 != 71) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 0U;
	int32_t x30 = -1;
	static uint64_t x31 = UINT64_MAX;
	uint64_t t6 = 67778904854705LLU;

	t6 = (x29|(x30-(x31^x32)));

	if (t6 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 810614LL;
	int8_t x34 = INT8_MIN;
	int8_t x35 = INT8_MIN;
	int8_t x36 = -17;
	int64_t t7 = -1LL;

	t7 = (x33|(x34-(x35^x36)));

	if (t7 != -137LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 85281198938LLU;
	uint16_t x39 = 1U;
	int32_t x40 = -18955;
	uint64_t t8 = 14715716927637LLU;

	t8 = (x37|(x38-(x39^x40)));

	if (t8 != 18446744073091406686LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 0LLU;
	static uint64_t x42 = 3704745198652199404LLU;
	int16_t x43 = INT16_MAX;
	int64_t x44 = INT64_MIN;
	volatile uint64_t t9 = 110001830380LLU;

	t9 = (x41|(x42-(x43^x44)));

	if (t9 != 12928117235506942445LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	int32_t x46 = -1;
	int64_t t10 = -198728LL;

	t10 = (x45|(x46-(x47^x48)));

	if (t10 != -256LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -11;
	uint16_t x50 = 436U;
	static volatile uint32_t x51 = 2759579U;
	uint64_t x52 = 2880500LLU;
	volatile uint64_t t11 = 8769LLU;

	t11 = (x49|(x50-(x51^x52)));

	if (t11 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = 0;
	static volatile int64_t t12 = 19690745LL;

	t12 = (x53|(x54-(x55^x56)));

	if (t12 != -9223372034707292174LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 1U;
	static uint64_t x58 = 15352LLU;
	static uint64_t x59 = 1291130573LLU;
	static uint32_t x60 = 118557758U;
	volatile uint64_t t13 = 10LLU;

	t13 = (x57|(x58-(x59^x60)));

	if (t13 != 18446744072436326661LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int16_t x63 = -1;
	uint64_t x64 = 8341402004978293260LLU;
	volatile uint64_t t14 = 39866557711LLU;

	t14 = (x61|(x62-(x63^x64)));

	if (t14 != 18446744072828115468LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x74 = 16618894;
	int8_t x75 = INT8_MIN;
	static volatile int64_t t15 = -1LL;

	t15 = (x73|(x74-(x75^x76)));

	if (t15 != -114LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x79 = 0U;
	int16_t x80 = 1;
	int32_t t16 = -12510;

	t16 = (x77|(x78-(x79^x80)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x86 = 3511544LLU;
	int32_t x87 = -3568768;
	int64_t x88 = 48330996486LL;
	uint64_t t17 = 1708LLU;

	t17 = (x85|(x86-(x87^x88)));

	if (t17 != 48338021618LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 3614238978LLU;
	int32_t x90 = INT32_MIN;
	volatile int32_t x92 = -1;

	t18 = (x89|(x90-(x91^x92)));

	if (t18 != 18446744073028823298LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = 736940LL;
	int16_t x94 = -2;
	int32_t x95 = -5;
	static int32_t x96 = INT32_MIN;
	volatile int64_t t19 = -326194584LL;

	t19 = (x93|(x94-(x95^x96)));

	if (t19 != -2146746705LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MIN;
	uint32_t x98 = UINT32_MAX;
	uint32_t x99 = 1339875U;
	volatile int64_t x100 = -18605223542470688LL;
	volatile int64_t t20 = 319268293166LL;

	t20 = (x97|(x98-(x99^x100)));

	if (t20 != -4LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = INT8_MIN;
	volatile uint16_t x103 = 0U;
	int8_t x104 = -5;
	volatile int64_t t21 = -75462LL;

	t21 = (x101|(x102-(x103^x104)));

	if (t21 != -123LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x106 = -1;
	int16_t x107 = -6;
	static volatile int64_t x108 = INT64_MAX;
	volatile int64_t t22 = INT64_MAX;

	t22 = (x105|(x106-(x107^x108)));

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x111 = 704490434;
	int64_t t23 = -170883190609LL;

	t23 = (x109|(x110-(x111^x112)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -11;
	uint32_t x116 = 1U;
	uint64_t t24 = 137954771092LLU;

	t24 = (x113|(x114-(x115^x116)));

	if (t24 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1;
	int8_t x118 = 6;
	int16_t x119 = INT16_MIN;
	uint64_t x120 = 25979922787475LLU;
	uint64_t t25 = UINT64_MAX;

	t25 = (x117|(x118-(x119^x120)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = 2771173U;
	int8_t x124 = 13;
	volatile int64_t t26 = -5428156LL;

	t26 = (x121|(x122-(x123^x124)));

	if (t26 != -9223372032562612456LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x129 = 310;
	int32_t x130 = 1753072;
	volatile int64_t x131 = 1LL;
	static int64_t t27 = 377172045424084LL;

	t27 = (x129|(x130-(x131^x132)));

	if (t27 != 1753079LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x137 = UINT8_MAX;
	int32_t x138 = INT32_MIN;
	volatile int8_t x139 = INT8_MIN;
	static int32_t x140 = 6;

	t28 = (x137|(x138-(x139^x140)));

	if (t28 != -2147483393) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = INT64_MIN;
	uint64_t x142 = 22828528712LLU;
	volatile int64_t x143 = 24464LL;
	static int64_t x144 = INT64_MAX;

	t29 = (x141|(x142-(x143^x144)));

	if (t29 != 9223372059683328985LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x145 = 26;
	int16_t x146 = INT16_MIN;
	int64_t x148 = -1LL;
	volatile int64_t t30 = -2007828514795LL;

	t30 = (x145|(x146-(x147^x148)));

	if (t30 != -32742LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x149 = INT16_MIN;
	static int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MIN;
	volatile int32_t x152 = INT32_MIN;
	int64_t t31 = 91563406666140861LL;

	t31 = (x149|(x150-(x151^x152)));

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x153 = INT8_MIN;
	uint32_t x154 = 205490U;
	volatile int64_t x156 = 439479618054283LL;
	int64_t t32 = 538LL;

	t32 = (x153|(x154-(x155^x156)));

	if (t32 != -45LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x157 = UINT16_MAX;
	int32_t x158 = -15404;
	volatile int64_t x159 = INT64_MIN;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x157|(x158-(x159^x160)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x162 = 1;
	volatile uint64_t x163 = 98152107082648LLU;
	int64_t x164 = -64080232760LL;
	uint64_t t34 = UINT64_MAX;

	t34 = (x161|(x162-(x163^x164)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x165 = INT8_MAX;
	int16_t x167 = INT16_MIN;
	volatile int32_t t35 = -52463491;

	t35 = (x165|(x166-(x167^x168)));

	if (t35 != 32639) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = 10860487143LL;
	int8_t x171 = -1;
	int8_t x172 = -1;
	volatile int64_t t36 = 5531224LL;

	t36 = (x169|(x170-(x171^x172)));

	if (t36 != -3099395856024476673LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x173 = 2U;
	int16_t x175 = INT16_MIN;
	volatile int8_t x176 = INT8_MIN;
	int32_t t37 = -499;

	t37 = (x173|(x174-(x175^x176)));

	if (t37 != -32622) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x177 = INT32_MIN;
	int8_t x179 = INT8_MIN;
	static int8_t x180 = INT8_MIN;
	volatile int32_t t38 = -18459351;

	t38 = (x177|(x178-(x179^x180)));

	if (t38 != -2) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = -182306325;
	int64_t x182 = 14299LL;
	int64_t x183 = -564214278142LL;
	volatile int64_t t39 = 448541035415806LL;

	t39 = (x181|(x182-(x183^x184)));

	if (t39 != -8422405LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = 1;
	static volatile uint64_t x186 = 135322628LLU;
	volatile int16_t x187 = -1;
	uint64_t t40 = 2039LLU;

	t40 = (x185|(x186-(x187^x188)));

	if (t40 != 135289861LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x189 = -1LL;
	volatile int8_t x190 = -1;
	int8_t x191 = 7;
	int32_t x192 = 143;
	volatile int64_t t41 = -2LL;

	t41 = (x189|(x190-(x191^x192)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x193 = -1;
	static volatile int16_t x194 = -1;
	int16_t x195 = 29;
	uint64_t x196 = 41453306502LLU;
	volatile uint64_t t42 = UINT64_MAX;

	t42 = (x193|(x194-(x195^x196)));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = -1;
	volatile int64_t x198 = INT64_MIN;
	int32_t x199 = -1455;
	uint16_t x200 = 27277U;
	volatile int64_t t43 = 10881302LL;

	t43 = (x197|(x198-(x199^x200)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x202 = INT64_MIN;
	uint32_t x203 = 755U;
	int64_t x204 = -1LL;
	static int64_t t44 = 5221440LL;

	t44 = (x201|(x202-(x203^x204)));

	if (t44 != -32012LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x205 = INT32_MIN;
	volatile int32_t x206 = INT32_MIN;
	int64_t x207 = -850LL;
	uint32_t x208 = 2U;
	volatile int64_t t45 = -407247814852072LL;

	t45 = (x205|(x206-(x207^x208)));

	if (t45 != -2147482796LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x213 = 337613U;
	uint8_t x214 = UINT8_MAX;
	static volatile uint16_t x215 = UINT16_MAX;
	volatile uint32_t t46 = 9U;

	t46 = (x213|(x214-(x215^x216)));

	if (t46 != 999407U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = -15405216642LL;
	int16_t x219 = -7210;
	int32_t x220 = INT32_MIN;
	volatile int64_t t47 = 6483932170775353LL;

	t47 = (x217|(x218-(x219^x220)));

	if (t47 != -372827009LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x223 = -3;
	int64_t t48 = -4239348LL;

	t48 = (x221|(x222-(x223^x224)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = INT32_MAX;
	volatile int64_t x226 = -1LL;

	t49 = (x225|(x226-(x227^x228)));

	if (t49 != 2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 176091710LLU;
	uint8_t x230 = 15U;
	volatile int64_t x231 = -61LL;
	uint16_t x232 = UINT16_MAX;
	uint64_t t50 = 56LLU;

	t50 = (x229|(x230-(x231^x232)));

	if (t50 != 176095231LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -1;
	int32_t x234 = INT32_MAX;
	int32_t x235 = -9527;
	static int64_t t51 = -3597604LL;

	t51 = (x233|(x234-(x235^x236)));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x237 = INT16_MIN;
	volatile int32_t x238 = -1;
	static int8_t x239 = INT8_MIN;
	uint32_t x240 = 3799458U;
	static volatile uint32_t t52 = 1390075U;

	t52 = (x237|(x238-(x239^x240)));

	if (t52 != 4294965725U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x241 = UINT64_MAX;
	uint8_t x242 = UINT8_MAX;
	int16_t x243 = -1254;
	int8_t x244 = INT8_MIN;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = (x241|(x242-(x243^x244)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x246 = UINT32_MAX;
	uint32_t x248 = 450817U;
	volatile uint32_t t54 = 16090145U;

	t54 = (x245|(x246-(x247^x248)));

	if (t54 != 450819U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = 935016940076123445LLU;
	uint8_t x250 = 104U;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = 1;
	volatile uint64_t t55 = 0LLU;

	t55 = (x249|(x250-(x251^x252)));

	if (t55 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x254 = 29;
	int32_t x255 = -134156311;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t56 = 33;

	t56 = (x253|(x254-(x255^x256)));

	if (t56 != -2013325889) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x259 = -1;
	uint64_t x260 = 3626827579939684LLU;
	uint64_t t57 = 143713517393705293LLU;

	t57 = (x257|(x258-(x259^x260)));

	if (t57 != 18446744073709542372LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x261 = 21U;
	volatile int32_t x262 = -40;
	int8_t x263 = -1;
	int8_t x264 = INT8_MIN;
	static volatile int32_t t58 = 857;

	t58 = (x261|(x262-(x263^x264)));

	if (t58 != -163) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x266 = -1LL;
	static int16_t x267 = 2415;
	int32_t x268 = -1;
	volatile int64_t t59 = 10695214066331LL;

	t59 = (x265|(x266-(x267^x268)));

	if (t59 != 2543LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = 3667U;
	volatile int16_t x272 = INT16_MIN;
	volatile int64_t t60 = 371856754167793LL;

	t60 = (x269|(x270-(x271^x272)));

	if (t60 != -3793325LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x273 = INT16_MIN;
	uint8_t x274 = 51U;
	uint8_t x275 = 14U;
	uint64_t x276 = 17957459586LLU;

	t61 = (x273|(x274-(x275^x276)));

	if (t61 != 18446744073709545895LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -192;
	static uint16_t x278 = 3U;
	int16_t x279 = 0;

	t62 = (x277|(x278-(x279^x280)));

	if (t62 != -188LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = -1;
	int8_t x282 = 1;
	int32_t x284 = INT32_MIN;
	int32_t t63 = 503;

	t63 = (x281|(x282-(x283^x284)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x286 = -808825608;
	uint8_t x288 = 0U;
	volatile int32_t t64 = 9;

	t64 = (x285|(x286-(x287^x288)));

	if (t64 != -13063) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x289 = -11;
	int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MIN;
	static uint64_t x292 = UINT64_MAX;
	uint64_t t65 = 158482434925018797LLU;

	t65 = (x289|(x290-(x291^x292)));

	if (t65 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x294 = 13209372LL;
	static uint32_t x295 = 0U;
	volatile int8_t x296 = INT8_MIN;

	t66 = (x293|(x294-(x295^x296)));

	if (t66 != -4281757794LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MAX;
	uint64_t x300 = 194907196LLU;
	uint64_t t67 = 198233LLU;

	t67 = (x297|(x298-(x299^x300)));

	if (t67 != 18446744071756942397LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x301 = 6U;
	int16_t x302 = INT16_MAX;
	uint8_t x304 = 78U;
	uint32_t t68 = 14564U;

	t68 = (x301|(x302-(x303^x304)));

	if (t68 != 32679U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x305 = INT8_MAX;
	static int64_t x306 = 11509541LL;
	static volatile int32_t x307 = -33321;
	volatile int16_t x308 = -2;
	static volatile int64_t t69 = -898052642LL;

	t69 = (x305|(x306-(x307^x308)));

	if (t69 != 11476223LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = 178788223774469LLU;
	static uint64_t x312 = 0LLU;
	volatile uint64_t t70 = 5248437364LLU;

	t70 = (x309|(x310-(x311^x312)));

	if (t70 != 18446744073182179078LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MIN;
	int64_t x315 = -2532696LL;
	uint64_t x316 = UINT64_MAX;

	t71 = (x313|(x314-(x315^x316)));

	if (t71 != 18446744073707018921LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x318 = UINT8_MAX;

	t72 = (x317|(x318-(x319^x320)));

	if (t72 != 4294967295LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x321 = INT16_MAX;
	int16_t x322 = INT16_MAX;
	int32_t x323 = -69149017;
	volatile uint64_t t73 = 21934347488LLU;

	t73 = (x321|(x322-(x323^x324)));

	if (t73 != 18446744073640443903LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x326 = INT64_MIN;
	uint64_t x327 = 3846913155194837LLU;
	int32_t x328 = 263;
	volatile uint64_t t74 = 271742307434LLU;

	t74 = (x325|(x326-(x327^x328)));

	if (t74 != 18446744073709551534LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x330 = -66218191;
	uint32_t x331 = UINT32_MAX;

	t75 = (x329|(x330-(x331^x332)));

	if (t75 != 9223372032503029618LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MAX;
	static uint64_t x334 = UINT64_MAX;
	volatile int8_t x335 = -1;
	volatile uint64_t t76 = UINT64_MAX;

	t76 = (x333|(x334-(x335^x336)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x338 = INT16_MIN;
	int16_t x339 = -226;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t77 = 354795345LLU;

	t77 = (x337|(x338-(x339^x340)));

	if (t77 != 18446744073709518623LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x346 = 0U;
	int64_t x347 = 42114302429887LL;
	int8_t x348 = -1;

	t78 = (x345|(x346-(x347^x348)));

	if (t78 != 42114302429951LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x349 = -1;
	static volatile uint16_t x350 = 30434U;
	int32_t x351 = INT32_MIN;
	volatile int64_t x352 = -1LL;
	static int64_t t79 = 202600612289923LL;

	t79 = (x349|(x350-(x351^x352)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x353 = -5;
	uint64_t x354 = 21LLU;
	uint32_t x355 = 750U;
	uint64_t t80 = UINT64_MAX;

	t80 = (x353|(x354-(x355^x356)));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = UINT8_MAX;
	uint32_t x358 = UINT32_MAX;
	uint32_t t81 = 6U;

	t81 = (x357|(x358-(x359^x360)));

	if (t81 != 255U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x361 = -1LL;
	uint8_t x362 = 1U;
	int8_t x363 = -1;
	int64_t x364 = -1LL;
	volatile int64_t t82 = 48606598304825LL;

	t82 = (x361|(x362-(x363^x364)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x365 = 0;
	int32_t x368 = INT32_MIN;

	t83 = (x365|(x366-(x367^x368)));

	if (t83 != 2131885155LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x369 = INT64_MAX;
	volatile int8_t x370 = INT8_MIN;
	int32_t x371 = INT32_MIN;
	int32_t x372 = INT32_MAX;

	t84 = (x369|(x370-(x371^x372)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MIN;
	int64_t x375 = -202638874LL;
	uint32_t x376 = UINT32_MAX;
	volatile int64_t t85 = -38054LL;

	t85 = (x373|(x374-(x375^x376)));

	if (t85 != -9223372034909931033LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x377 = UINT8_MAX;
	volatile uint8_t x378 = 58U;
	static volatile int8_t x380 = -1;
	volatile int64_t t86 = 171631LL;

	t86 = (x377|(x378-(x379^x380)));

	if (t86 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x382 = UINT32_MAX;
	uint64_t x384 = 1170807334170LLU;
	volatile uint64_t t87 = 8425088445075743803LLU;

	t87 = (x381|(x382-(x383^x384)));

	if (t87 != 18446742905908356926LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x385 = -1;
	uint64_t x386 = 8541375616006137886LLU;
	int8_t x387 = INT8_MIN;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = (x385|(x386-(x387^x388)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x390 = INT32_MIN;
	static int64_t x392 = -1078810193736LL;

	t89 = (x389|(x390-(x391^x392)));

	if (t89 != -56LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x393 = -1LL;
	static volatile int32_t x394 = -643049831;
	int32_t x395 = 436;
	volatile int64_t t90 = 293884LL;

	t90 = (x393|(x394-(x395^x396)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = INT64_MAX;
	volatile int64_t x398 = INT64_MIN;
	int64_t x399 = 55121929970742LL;
	int16_t x400 = -1;
	volatile int64_t t91 = -116LL;

	t91 = (x397|(x398-(x399^x400)));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = UINT16_MAX;
	uint16_t x403 = UINT16_MAX;
	volatile int16_t x404 = INT16_MIN;
	int32_t t92 = -1255717;

	t92 = (x401|(x402-(x403^x404)));

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = 134976310LL;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = 2U;
	int64_t t93 = INT64_MAX;

	t93 = (x405|(x406-(x407^x408)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x409 = 7U;
	int8_t x410 = INT8_MAX;
	uint16_t x411 = UINT16_MAX;
	volatile int16_t x412 = INT16_MIN;
	volatile int32_t t94 = -33;

	t94 = (x409|(x410-(x411^x412)));

	if (t94 != 32903) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x413 = INT64_MIN;
	uint16_t x414 = 1U;
	volatile uint16_t x415 = UINT16_MAX;
	volatile int64_t t95 = 1LL;

	t95 = (x413|(x414-(x415^x416)));

	if (t95 != -684897LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x422 = 5250500U;
	int64_t x423 = -3LL;
	static int32_t x424 = INT32_MIN;

	t96 = (x421|(x422-(x423^x424)));

	if (t96 != -2142208001LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x425 = UINT64_MAX;
	volatile uint64_t x426 = UINT64_MAX;
	volatile uint64_t x427 = UINT64_MAX;
	uint16_t x428 = UINT16_MAX;
	uint64_t t97 = UINT64_MAX;

	t97 = (x425|(x426-(x427^x428)));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = INT32_MIN;
	uint16_t x430 = 29842U;
	int16_t x431 = INT16_MAX;
	uint8_t x432 = 34U;
	volatile int32_t t98 = 17840459;

	t98 = (x429|(x430-(x431^x432)));

	if (t98 != -2891) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x433 = INT16_MIN;
	volatile uint32_t x434 = 78611U;
	uint16_t x435 = 130U;
	uint16_t x436 = 1027U;
	uint32_t t99 = 4216677U;

	t99 = (x433|(x434-(x435^x436)));

	if (t99 != 4294946450U) { NG(); } else { ; }
	
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

