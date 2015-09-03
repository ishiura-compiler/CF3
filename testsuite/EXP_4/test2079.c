#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 642036U;
static int32_t x5 = INT32_MIN;
uint64_t t3 = 46470LLU;
static volatile int32_t x19 = 271151292;
uint16_t x25 = UINT16_MAX;
volatile int64_t x34 = INT64_MAX;
volatile uint64_t t9 = 104376908LLU;
static volatile uint16_t x44 = UINT16_MAX;
int32_t t10 = -47;
int64_t x46 = INT64_MIN;
int64_t t11 = 0LL;
uint64_t x58 = 25507127LLU;
static volatile int8_t x59 = 0;
int32_t t15 = 101653;
int32_t x67 = 6851;
uint32_t x74 = 7659U;
uint8_t x75 = 48U;
int32_t x79 = INT32_MAX;
uint64_t x80 = 66093513812325LLU;
uint64_t t18 = UINT64_MAX;
int64_t x81 = INT64_MIN;
int16_t x82 = INT16_MIN;
static uint64_t x86 = 67189743438261023LLU;
volatile uint16_t x88 = UINT16_MAX;
volatile int32_t t22 = 7205;
int32_t x98 = INT32_MIN;
static uint32_t x100 = 2149U;
uint64_t x106 = UINT64_MAX;
uint16_t x107 = 89U;
uint64_t t25 = 14002LLU;
uint64_t x110 = UINT64_MAX;
volatile uint64_t x111 = UINT64_MAX;
volatile uint64_t t26 = 176LLU;
int16_t x122 = INT16_MAX;
static int64_t x126 = INT64_MAX;
int64_t x128 = 74700604514991LL;
int64_t x135 = INT64_MAX;
int8_t x136 = INT8_MAX;
int64_t t32 = -912LL;
static int64_t x137 = 2251270LL;
volatile uint32_t x139 = 127038826U;
int64_t x164 = 13946414856258LL;
uint16_t x167 = 27U;
int64_t x172 = INT64_MIN;
int64_t t41 = 43361671622408932LL;
uint32_t x175 = 433724U;
volatile int16_t x180 = INT16_MIN;
volatile uint64_t t44 = 396304947523265LLU;
volatile int32_t x187 = 53178025;
int32_t x189 = INT32_MAX;
int16_t x200 = -1497;
volatile int64_t t48 = 2LL;
int16_t x203 = -1;
uint8_t x211 = UINT8_MAX;
static int16_t x216 = INT16_MIN;
int64_t t55 = -134967LL;
int32_t x234 = INT32_MIN;
int64_t x235 = INT64_MIN;
int8_t x239 = INT8_MIN;
uint8_t x242 = 1U;
uint64_t x247 = 2088745784LLU;
static uint16_t x252 = 30572U;
int64_t x264 = -1LL;
int8_t x265 = -5;
static uint32_t t64 = UINT32_MAX;
int64_t x271 = -3970286LL;
uint64_t x279 = 22997103082LLU;
int64_t x286 = -5LL;
int64_t t69 = 994101LL;
int8_t x289 = -1;
volatile int16_t x290 = 3;
volatile int8_t x295 = -1;
int64_t x298 = 623816066LL;
int64_t x302 = INT64_MIN;
int32_t x304 = -1;
static volatile uint64_t t74 = 1000735415760LLU;
volatile int8_t x310 = -2;
int16_t x312 = -11;
uint16_t x319 = UINT16_MAX;
uint8_t x321 = UINT8_MAX;
static int8_t x322 = INT8_MAX;
int64_t x325 = INT64_MAX;
static int64_t t79 = INT64_MAX;
uint16_t x332 = 0U;
int32_t x343 = INT32_MIN;
int64_t t85 = -16930150274LL;
static int8_t x358 = -1;
int32_t x362 = 9554036;
static int8_t x365 = INT8_MAX;
volatile int64_t x369 = -143200543167746299LL;
uint64_t x378 = 8824844011721249487LLU;
uint16_t x403 = 8876U;
int16_t x405 = INT16_MIN;
volatile int32_t x408 = INT32_MIN;


void f0(void) {
	static int16_t x1 = -1;
	int16_t x2 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	uint32_t t0 = UINT32_MAX;

	t0 = (x1|(x2/(x3^x4)));

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	int64_t x7 = INT64_MIN;
	volatile int8_t x8 = INT8_MAX;
	int64_t t1 = 539023796203389859LL;

	t1 = (x5|(x6/(x7^x8)));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -2964LL;
	int8_t x10 = 30;
	static uint8_t x11 = 110U;
	int8_t x12 = 47;
	int64_t t2 = -368402LL;

	t2 = (x9|(x10/(x11^x12)));

	if (t2 != -2964LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = INT16_MIN;
	uint64_t x15 = 229450002552LLU;
	volatile int32_t x16 = INT32_MAX;

	t3 = (x13|(x14/(x15^x16)));

	if (t3 != 18446744071642987511LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int8_t x18 = INT8_MAX;
	int64_t x20 = -9393489LL;
	static volatile int64_t t4 = -14609484317LL;

	t4 = (x17|(x18/(x19^x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 1U;
	int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	int16_t x24 = -1;
	int32_t t5 = 1583;

	t5 = (x21|(x22/(x23^x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = -1;
	static volatile uint64_t x27 = 40379806527399LLU;
	int32_t x28 = INT32_MAX;
	volatile uint64_t t6 = 182905805955LLU;

	t6 = (x25|(x26/(x27^x28)));

	if (t6 != 458751LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -17101LL;
	uint32_t x30 = 149849U;
	int64_t x31 = INT64_MIN;
	volatile int8_t x32 = -1;
	int64_t t7 = 5572245337848860LL;

	t7 = (x29|(x30/(x31^x32)));

	if (t7 != -17101LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 1384U;
	uint16_t x35 = 664U;
	static int32_t x36 = 9;
	int64_t t8 = -80573839351LL;

	t8 = (x33|(x34/(x35^x36)));

	if (t8 != 14038618016522088LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 87876153812544LLU;
	uint32_t x38 = UINT32_MAX;
	static volatile int16_t x39 = INT16_MIN;
	static int16_t x40 = 21;

	t9 = (x37|(x38/(x39^x40)));

	if (t9 != 87876153812545LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = 15829;
	volatile uint8_t x43 = 15U;

	t10 = (x41|(x42/(x43^x44)));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	volatile int8_t x47 = INT8_MAX;
	int16_t x48 = INT16_MIN;

	t11 = (x45|(x46/(x47^x48)));

	if (t11 != -50395898LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 6577U;
	int16_t x50 = INT16_MIN;
	int16_t x51 = -1193;
	int8_t x52 = -1;
	volatile int32_t t12 = 1047;

	t12 = (x49|(x50/(x51^x52)));

	if (t12 != -11) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -8;
	int8_t x54 = -4;
	int16_t x55 = -1;
	uint64_t x56 = 3323661665054501212LLU;
	static uint64_t t13 = 6229434710LLU;

	t13 = (x53|(x54/(x55^x56)));

	if (t13 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 52715U;
	uint16_t x60 = UINT16_MAX;
	volatile uint64_t t14 = 1067485810201314LLU;

	t14 = (x57|(x58/(x59^x60)));

	if (t14 != 52719LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	static int16_t x62 = INT16_MAX;
	uint8_t x63 = 4U;
	int32_t x64 = -93097;

	t15 = (x61|(x62/(x63^x64)));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	int8_t x66 = INT8_MAX;
	static volatile uint32_t x68 = UINT32_MAX;
	uint64_t t16 = UINT64_MAX;

	t16 = (x65|(x66/(x67^x68)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x73 = UINT16_MAX;
	static int8_t x76 = INT8_MAX;
	volatile uint32_t t17 = 34U;

	t17 = (x73|(x74/(x75^x76)));

	if (t17 != 65535U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -1;
	int64_t x78 = INT64_MIN;

	t18 = (x77|(x78/(x79^x80)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x83 = INT8_MIN;
	int16_t x84 = 244;
	static volatile int64_t t19 = -112LL;

	t19 = (x81|(x82/(x83^x84)));

	if (t19 != -9223372036854775574LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int16_t x87 = 2;
	uint64_t t20 = 5718LLU;

	t20 = (x85|(x86/(x87^x88)));

	if (t20 != 1025281097727LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x89 = 16276U;
	volatile uint16_t x90 = UINT16_MAX;
	static volatile int64_t x91 = -14790LL;
	uint8_t x92 = UINT8_MAX;
	volatile int64_t t21 = -106806LL;

	t21 = (x89|(x90/(x91^x92)));

	if (t21 != -4LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = -7;
	volatile int16_t x94 = INT16_MIN;
	static uint16_t x95 = 11997U;
	uint16_t x96 = 76U;

	t22 = (x93|(x94/(x95^x96)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MIN;
	static int16_t x99 = INT16_MIN;
	static uint32_t t23 = 21631U;

	t23 = (x97|(x98/(x99^x100)));

	if (t23 != 4294967168U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 1159368943U;
	volatile int32_t x102 = 4181851;
	static uint32_t x103 = 372469383U;
	int32_t x104 = -1;
	volatile uint32_t t24 = 96154446U;

	t24 = (x101|(x102/(x103^x104)));

	if (t24 != 1159368943U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x105 = INT8_MIN;
	int8_t x108 = INT8_MIN;

	t25 = (x105|(x106/(x107^x108)));

	if (t25 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = INT8_MAX;
	uint32_t x112 = UINT32_MAX;

	t26 = (x109|(x110/(x111^x112)));

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x113 = 11;
	volatile int16_t x114 = -1;
	uint64_t x115 = 3677508051064821762LLU;
	volatile int32_t x116 = -553;
	uint64_t t27 = 3997657112483501LLU;

	t27 = (x113|(x114/(x115^x116)));

	if (t27 != 11LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	int32_t x118 = INT32_MIN;
	static int16_t x119 = -4471;
	uint8_t x120 = 3U;
	int32_t t28 = INT32_MAX;

	t28 = (x117|(x118/(x119^x120)));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x121 = 4U;
	uint16_t x123 = 12U;
	int32_t x124 = -1;
	static volatile int32_t t29 = 10;

	t29 = (x121|(x122/(x123^x124)));

	if (t29 != -2516) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x125 = 7181U;
	int16_t x127 = 9;
	int64_t t30 = 3827797909823547322LL;

	t30 = (x125|(x126/(x127^x128)));

	if (t30 != 130639LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MIN;
	static int32_t x130 = INT32_MIN;
	int32_t x131 = INT32_MAX;
	static uint32_t x132 = 256636U;
	uint32_t t31 = 49723484U;

	t31 = (x129|(x130/(x131^x132)));

	if (t31 != 4294934529U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x133 = INT8_MAX;
	int16_t x134 = 25;

	t32 = (x133|(x134/(x135^x136)));

	if (t32 != 127LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x138 = 9;
	volatile int16_t x140 = -1;
	volatile int64_t t33 = -1LL;

	t33 = (x137|(x138/(x139^x140)));

	if (t33 != 2251270LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 210U;
	uint64_t x142 = 45403485620799670LLU;
	int32_t x143 = INT32_MAX;
	uint16_t x144 = 1390U;
	uint64_t t34 = 952496388375LLU;

	t34 = (x141|(x142/(x143^x144)));

	if (t34 != 21142739LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x145 = INT16_MIN;
	static int32_t x146 = -28474753;
	volatile uint8_t x147 = 0U;
	int32_t x148 = INT32_MIN;
	int32_t t35 = -126075406;

	t35 = (x145|(x146/(x147^x148)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x149 = 1167035778LLU;
	volatile int32_t x150 = 266870688;
	static uint32_t x151 = UINT32_MAX;
	static int32_t x152 = INT32_MAX;
	static uint64_t t36 = 11800459826790091LLU;

	t36 = (x149|(x150/(x151^x152)));

	if (t36 != 1167035778LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	static uint64_t x155 = 1406LLU;
	int16_t x156 = -1;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (x153|(x154/(x155^x156)));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = 868LLU;
	int32_t x158 = INT32_MAX;
	uint32_t x159 = 17514782U;
	int64_t x160 = INT64_MAX;
	volatile uint64_t t38 = 4976358096978045LLU;

	t38 = (x157|(x158/(x159^x160)));

	if (t38 != 868LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	int8_t x163 = 0;
	static volatile int64_t t39 = -280058684590LL;

	t39 = (x161|(x162/(x163^x164)));

	if (t39 != -661343LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = -1LL;
	uint64_t x166 = UINT64_MAX;
	volatile int16_t x168 = 733;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x165|(x166/(x167^x168)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	int64_t x170 = 1LL;
	int32_t x171 = INT32_MIN;

	t41 = (x169|(x170/(x171^x172)));

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = UINT64_MAX;
	int64_t x176 = INT64_MAX;
	volatile uint64_t t42 = 1340485LLU;

	t42 = (x173|(x174/(x175^x176)));

	if (t42 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x177 = INT32_MIN;
	int16_t x178 = 73;
	uint32_t x179 = 743U;
	uint32_t t43 = 7254230U;

	t43 = (x177|(x178/(x179^x180)));

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x181 = 225503436264LLU;
	uint16_t x182 = 0U;
	static int8_t x183 = INT8_MAX;
	volatile int16_t x184 = -428;

	t44 = (x181|(x182/(x183^x184)));

	if (t44 != 225503436264LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x185 = -1;
	int64_t x186 = -2534317249652778072LL;
	volatile int16_t x188 = INT16_MAX;
	volatile int64_t t45 = -7430LL;

	t45 = (x185|(x186/(x187^x188)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x190 = 936658LL;
	int32_t x191 = INT32_MIN;
	static uint32_t x192 = 4U;
	int64_t t46 = -1566LL;

	t46 = (x189|(x190/(x191^x192)));

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x193 = -1;
	int8_t x194 = -6;
	uint8_t x195 = 30U;
	int64_t x196 = INT64_MAX;
	int64_t t47 = -6044226336LL;

	t47 = (x193|(x194/(x195^x196)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int64_t x197 = -418573758858624LL;
	int16_t x198 = INT16_MIN;
	static int8_t x199 = -4;

	t48 = (x197|(x198/(x199^x200)));

	if (t48 != -21LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = -1;
	volatile uint16_t x202 = 10276U;
	static int32_t x204 = INT32_MIN;
	int32_t t49 = -278459034;

	t49 = (x201|(x202/(x203^x204)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = 0;
	uint8_t x206 = 9U;
	int8_t x207 = INT8_MIN;
	uint32_t x208 = 4908850U;
	uint32_t t50 = 1356502U;

	t50 = (x205|(x206/(x207^x208)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MAX;
	int16_t x210 = 7244;
	int16_t x212 = INT16_MAX;
	int32_t t51 = INT32_MAX;

	t51 = (x209|(x210/(x211^x212)));

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MIN;
	int8_t x215 = -1;
	int64_t t52 = INT64_MIN;

	t52 = (x213|(x214/(x215^x216)));

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = 1U;
	int64_t x222 = -69075LL;
	int64_t x223 = INT64_MIN;
	int16_t x224 = -1;
	int64_t t53 = -18948LL;

	t53 = (x221|(x222/(x223^x224)));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	int16_t x226 = INT16_MIN;
	int32_t x227 = -1;
	volatile uint8_t x228 = 3U;
	volatile int32_t t54 = INT32_MAX;

	t54 = (x225|(x226/(x227^x228)));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x229 = 25U;
	int64_t x230 = -1LL;
	int16_t x231 = 3313;
	int16_t x232 = INT16_MAX;

	t55 = (x229|(x230/(x231^x232)));

	if (t55 != 25LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 758261LLU;
	uint16_t x236 = 26U;
	uint64_t t56 = 15171441769104LLU;

	t56 = (x233|(x234/(x235^x236)));

	if (t56 != 758261LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x237 = 18;
	int8_t x238 = INT8_MIN;
	uint64_t x240 = 535968888LLU;
	volatile uint64_t t57 = 345912297424534618LLU;

	t57 = (x237|(x238/(x239^x240)));

	if (t57 != 19LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	volatile uint16_t x243 = 55U;
	uint16_t x244 = 0U;
	int32_t t58 = -71778529;

	t58 = (x241|(x242/(x243^x244)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = INT32_MIN;
	volatile int8_t x246 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	uint64_t t59 = 100485LLU;

	t59 = (x245|(x246/(x247^x248)));

	if (t59 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x249 = 187U;
	int64_t x250 = INT64_MIN;
	int8_t x251 = -1;
	static int64_t t60 = -688699355487LL;

	t60 = (x249|(x250/(x251^x252)));

	if (t60 != 301683578217915LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MAX;
	int32_t x254 = 19399061;
	static int64_t x255 = INT64_MIN;
	int32_t x256 = 12139331;
	int64_t t61 = 3035752293688387LL;

	t61 = (x253|(x254/(x255^x256)));

	if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = INT8_MIN;
	uint16_t x258 = UINT16_MAX;
	uint16_t x259 = UINT16_MAX;
	uint32_t x260 = 399858U;
	uint32_t t62 = 3U;

	t62 = (x257|(x258/(x259^x260)));

	if (t62 != 4294967168U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x261 = -1;
	uint16_t x262 = 3504U;
	int16_t x263 = INT16_MIN;
	volatile int64_t t63 = 12LL;

	t63 = (x261|(x262/(x263^x264)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x266 = 2860U;
	uint32_t x267 = 49U;
	uint8_t x268 = UINT8_MAX;

	t64 = (x265|(x266/(x267^x268)));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x269 = UINT64_MAX;
	static int8_t x270 = -1;
	uint64_t x272 = 6317LLU;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (x269|(x270/(x271^x272)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = 18;
	int8_t x274 = 29;
	uint16_t x275 = UINT16_MAX;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t66 = 436271020U;

	t66 = (x273|(x274/(x275^x276)));

	if (t66 != 18U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x277 = 23U;
	int64_t x278 = -246LL;
	int16_t x280 = INT16_MAX;
	uint64_t t67 = 14344279LLU;

	t67 = (x277|(x278/(x279^x280)));

	if (t67 != 802134295LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x281 = 3U;
	int64_t x282 = -1LL;
	uint16_t x283 = 196U;
	int16_t x284 = -1;
	int64_t t68 = 149576LL;

	t68 = (x281|(x282/(x283^x284)));

	if (t68 != 3LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x285 = 0U;
	static uint32_t x287 = UINT32_MAX;
	int8_t x288 = -7;

	t69 = (x285|(x286/(x287^x288)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x291 = 5U;
	static uint32_t x292 = UINT32_MAX;
	volatile uint32_t t70 = UINT32_MAX;

	t70 = (x289|(x290/(x291^x292)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MAX;
	volatile uint32_t x294 = UINT32_MAX;
	static uint32_t x296 = 1079007U;
	static volatile int64_t t71 = INT64_MAX;

	t71 = (x293|(x294/(x295^x296)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x297 = UINT64_MAX;
	volatile int32_t x299 = INT32_MAX;
	static int16_t x300 = -1;
	uint64_t t72 = UINT64_MAX;

	t72 = (x297|(x298/(x299^x300)));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -1;
	static int64_t x303 = 3065971776332LL;
	volatile int64_t t73 = -138550LL;

	t73 = (x301|(x302/(x303^x304)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = 36850646;
	uint32_t x306 = 1243624275U;
	volatile int8_t x307 = INT8_MAX;
	static uint64_t x308 = 9586380765229100LLU;

	t74 = (x305|(x306/(x307^x308)));

	if (t74 != 36850646LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 22U;
	int8_t x311 = INT8_MIN;
	volatile int32_t t75 = -25822;

	t75 = (x309|(x310/(x311^x312)));

	if (t75 != 22) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x313 = 2U;
	int32_t x314 = 95;
	uint32_t x315 = 422675U;
	static uint64_t x316 = 1981036673662009412LLU;
	volatile uint64_t t76 = 3630LLU;

	t76 = (x313|(x314/(x315^x316)));

	if (t76 != 2LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	static volatile int8_t x320 = INT8_MAX;
	volatile int32_t t77 = -155674281;

	t77 = (x317|(x318/(x319^x320)));

	if (t77 != -128) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x323 = 1533;
	int8_t x324 = INT8_MIN;
	int32_t t78 = 0;

	t78 = (x321|(x322/(x323^x324)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x326 = INT32_MIN;
	static int64_t x327 = 68657275224LL;
	int32_t x328 = 333159348;

	t79 = (x325|(x326/(x327^x328)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MIN;
	int16_t x330 = INT16_MIN;
	int32_t x331 = -1;
	int32_t t80 = 1;

	t80 = (x329|(x330/(x331^x332)));

	if (t80 != -2147450880) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x333 = 553428228;
	volatile uint64_t x334 = 26630794LLU;
	int16_t x335 = -22;
	int16_t x336 = 180;
	volatile uint64_t t81 = 65426LLU;

	t81 = (x333|(x334/(x335^x336)));

	if (t81 != 553428228LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x337 = INT16_MAX;
	static uint8_t x338 = 0U;
	static int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MAX;
	int32_t t82 = -2949633;

	t82 = (x337|(x338/(x339^x340)));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MAX;
	int64_t x342 = -1LL;
	int16_t x344 = -9539;
	volatile int64_t t83 = INT64_MAX;

	t83 = (x341|(x342/(x343^x344)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = 1;
	volatile int8_t x346 = 3;
	int16_t x347 = INT16_MIN;
	volatile int64_t x348 = -1LL;
	int64_t t84 = -188497LL;

	t84 = (x345|(x346/(x347^x348)));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -1;
	uint8_t x352 = 15U;

	t85 = (x349|(x350/(x351^x352)));

	if (t85 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = 2494424LL;
	int64_t x354 = INT64_MAX;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = 3;
	static volatile int64_t t86 = 390386220LL;

	t86 = (x353|(x354/(x355^x356)));

	if (t86 != 2149978074LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x357 = 244U;
	uint64_t x359 = 2250LLU;
	static int64_t x360 = -252795553740749787LL;
	uint64_t t87 = 161LLU;

	t87 = (x357|(x358/(x359^x360)));

	if (t87 != 245LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x361 = -473;
	uint32_t x363 = 57562030U;
	static volatile uint64_t x364 = 11LLU;
	uint64_t t88 = 28643816LLU;

	t88 = (x361|(x362/(x363^x364)));

	if (t88 != 18446744073709551143LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x366 = INT16_MIN;
	volatile uint32_t x367 = UINT32_MAX;
	int16_t x368 = INT16_MAX;
	uint32_t t89 = 30U;

	t89 = (x365|(x366/(x367^x368)));

	if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x370 = INT64_MAX;
	int16_t x371 = -3357;
	int64_t x372 = -1LL;
	int64_t t90 = -264687960LL;

	t90 = (x369|(x370/(x371^x372)));

	if (t90 != -140737634957263097LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MAX;
	static int64_t x374 = 32892590507LL;
	static volatile int64_t x375 = -5LL;
	static volatile int16_t x376 = 1;
	int64_t t91 = -50915673801974LL;

	t91 = (x373|(x374/(x375^x376)));

	if (t91 != -5482086401LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x377 = -42;
	uint64_t x379 = 5773LLU;
	volatile int64_t x380 = INT64_MAX;
	static volatile uint64_t t92 = 3202528094514624252LLU;

	t92 = (x377|(x378/(x379^x380)));

	if (t92 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MIN;
	int16_t x383 = -1;
	volatile int16_t x384 = 892;
	static volatile int64_t t93 = -1020LL;

	t93 = (x381|(x382/(x383^x384)));

	if (t93 != 10328524117418751LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x385 = 0U;
	int64_t x386 = -2045087420931489935LL;
	static int16_t x387 = INT16_MIN;
	uint8_t x388 = 1U;
	int64_t t94 = 1811LL;

	t94 = (x385|(x386/(x387^x388)));

	if (t94 != 62413019834940LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x389 = INT64_MIN;
	static int8_t x390 = 7;
	int16_t x391 = INT16_MIN;
	static int64_t x392 = -190550416942699965LL;
	static volatile int64_t t95 = INT64_MIN;

	t95 = (x389|(x390/(x391^x392)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MAX;
	int8_t x394 = -4;
	volatile uint8_t x395 = 1U;
	int64_t x396 = INT64_MIN;
	volatile int64_t t96 = 240647817816LL;

	t96 = (x393|(x394/(x395^x396)));

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x397 = -1LL;
	static int8_t x398 = INT8_MIN;
	int32_t x399 = 59356677;
	int32_t x400 = -704155;
	volatile int64_t t97 = -24595752LL;

	t97 = (x397|(x398/(x399^x400)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int16_t x401 = -1;
	static uint8_t x402 = 2U;
	volatile uint32_t x404 = 1045039139U;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x401|(x402/(x403^x404)));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x406 = 8046410913632690118LLU;
	static uint8_t x407 = 49U;
	volatile uint64_t t99 = 281843785LLU;

	t99 = (x405|(x406/(x407^x408)));

	if (t99 != 18446744073709518848LLU) { NG(); } else { ; }
	
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

