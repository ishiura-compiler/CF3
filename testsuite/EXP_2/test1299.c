#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
static uint16_t x11 = 173U;
uint8_t x12 = 4U;
int32_t t3 = 756487;
uint64_t x21 = UINT64_MAX;
int8_t x22 = -26;
static int8_t x26 = INT8_MIN;
static int16_t x27 = -4;
int8_t x31 = -1;
uint64_t x33 = 29547836770450LLU;
uint64_t x40 = UINT64_MAX;
volatile uint64_t t9 = UINT64_MAX;
int32_t t11 = -626;
int32_t x54 = -968441538;
static int8_t x58 = -1;
uint64_t x63 = 219144LLU;
static volatile int32_t t15 = -671140580;
int8_t x65 = INT8_MIN;
int8_t x76 = INT8_MIN;
volatile int64_t t19 = INT64_MIN;
volatile int32_t t21 = INT32_MAX;
static volatile uint64_t x98 = 2530805LLU;
int8_t x102 = INT8_MAX;
int32_t t25 = -998;
int8_t x107 = -53;
static volatile int32_t t28 = 1777;
int32_t x122 = INT32_MAX;
int16_t x146 = INT16_MAX;
int8_t x149 = INT8_MAX;
int64_t x151 = -1LL;
volatile uint64_t x153 = 6366270304346454LLU;
static int32_t x156 = INT32_MIN;
int64_t x165 = INT64_MAX;
int64_t x169 = INT64_MIN;
int16_t x170 = INT16_MIN;
volatile int32_t t42 = -1774;
uint32_t x173 = UINT32_MAX;
int32_t x179 = INT32_MAX;
uint16_t x180 = 1U;
int32_t x184 = INT32_MAX;
volatile int16_t x185 = INT16_MIN;
uint64_t t46 = 387122717821316987LLU;
int64_t t47 = -923807710454192951LL;
int16_t x202 = 921;
uint16_t x207 = UINT16_MAX;
int32_t x208 = INT32_MIN;
uint16_t x210 = 5U;
int16_t x211 = -8;
int32_t t52 = -6;
int32_t t54 = -892;
uint64_t x222 = UINT64_MAX;
static int8_t x223 = -1;
uint64_t t55 = 2197098756825LLU;
int16_t x226 = -1;
int64_t x232 = -1LL;
static volatile int32_t t59 = 0;
uint32_t x243 = 845654324U;
uint8_t x248 = UINT8_MAX;
int8_t x255 = INT8_MAX;
static volatile int64_t x260 = -30LL;
volatile int64_t t64 = 118549080865825596LL;
volatile uint16_t x262 = UINT16_MAX;
uint32_t x266 = 5U;
volatile int32_t t66 = INT32_MAX;
int64_t x275 = -1LL;
static int32_t t68 = 22892;
int32_t x277 = INT32_MAX;
volatile uint32_t x280 = 1896U;
int32_t x290 = INT32_MIN;
volatile int64_t x291 = -1LL;
int8_t x293 = 26;
int32_t t74 = 118891338;
volatile int64_t t78 = 2LL;
volatile int32_t x318 = INT32_MAX;
uint16_t x324 = 65U;
static int16_t x325 = INT16_MAX;
uint16_t x326 = 8U;
volatile uint32_t x342 = 42439387U;
int16_t x344 = -14;
uint8_t x346 = 0U;
uint32_t x348 = UINT32_MAX;
static volatile int16_t x352 = -1;
static int64_t x353 = -2LL;
uint16_t x355 = UINT16_MAX;
static uint32_t x356 = UINT32_MAX;
volatile uint32_t t88 = UINT32_MAX;
uint8_t x361 = 13U;
int16_t x365 = INT16_MIN;
uint8_t x367 = UINT8_MAX;
static volatile uint32_t x371 = 60158U;
int32_t x373 = -302336;
volatile uint64_t t95 = 45646485945LLU;
uint64_t x386 = 65047551019641315LLU;
volatile uint16_t x391 = 6U;
uint32_t x392 = 730764860U;
int32_t x394 = 24928942;
uint32_t t98 = 4U;
volatile int32_t t99 = -15839718;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint32_t x3 = UINT32_MAX;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = 910988374;

	t0 = ((x1<(x2==x3))|x4);

	if (t0 != 32767) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	volatile int32_t x6 = -1;
	int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = 4975LL;

	t1 = ((x5<(x6==x7))|x8);

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = 7096938LL;
	int8_t x10 = INT8_MIN;
	int32_t t2 = 76851843;

	t2 = ((x9<(x10==x11))|x12);

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 147;
	int32_t x14 = 3;
	uint16_t x15 = 17U;
	uint16_t x16 = 24U;

	t3 = ((x13<(x14==x15))|x16);

	if (t3 != 24) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int32_t x18 = -1;
	uint64_t x19 = 1LLU;
	int64_t x20 = INT64_MIN;
	int64_t t4 = INT64_MIN;

	t4 = ((x17<(x18==x19))|x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x23 = -3946;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = INT64_MIN;

	t5 = ((x21<(x22==x23))|x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 459U;
	uint32_t x28 = 3120366U;
	uint32_t t6 = 97420111U;

	t6 = ((x25<(x26==x27))|x28);

	if (t6 != 3120366U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 594682793177LLU;
	int16_t x30 = -1;
	volatile int8_t x32 = INT8_MIN;
	int32_t t7 = 4076263;

	t7 = ((x29<(x30==x31))|x32);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	int32_t x35 = -1;
	static uint8_t x36 = 2U;
	int32_t t8 = 7849;

	t8 = ((x33<(x34==x35))|x36);

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	int8_t x38 = 0;
	uint64_t x39 = UINT64_MAX;

	t9 = ((x37<(x38==x39))|x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 10U;
	uint16_t x42 = UINT16_MAX;
	volatile int8_t x43 = 1;
	static volatile int64_t x44 = -30LL;
	volatile int64_t t10 = 4898445816394448LL;

	t10 = ((x41<(x42==x43))|x44);

	if (t10 != -30LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint64_t x46 = 1442915976905LLU;
	uint64_t x47 = 172154LLU;
	volatile int32_t x48 = INT32_MIN;

	t11 = ((x45<(x46==x47))|x48);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 15U;
	int64_t x50 = -1LL;
	uint8_t x51 = 2U;
	int64_t x52 = -1LL;
	int64_t t12 = -4014LL;

	t12 = ((x49<(x50==x51))|x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int64_t x55 = INT64_MIN;
	uint16_t x56 = 9400U;
	volatile int32_t t13 = 125;

	t13 = ((x53<(x54==x55))|x56);

	if (t13 != 9400) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int64_t x57 = INT64_MIN;
	volatile uint64_t x59 = 347674075LLU;
	volatile uint32_t x60 = 406143199U;
	volatile uint32_t t14 = 6241U;

	t14 = ((x57<(x58==x59))|x60);

	if (t14 != 406143199U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	volatile uint64_t x62 = 2845368LLU;
	int16_t x64 = -1;

	t15 = ((x61<(x62==x63))|x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = INT32_MAX;
	uint32_t x67 = 114U;
	volatile int32_t x68 = INT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = ((x65<(x66==x67))|x68);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 9007U;
	uint64_t x70 = 46LLU;
	static volatile uint16_t x71 = UINT16_MAX;
	int8_t x72 = 10;
	volatile int32_t t17 = -814326;

	t17 = ((x69<(x70==x71))|x72);

	if (t17 != 10) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	volatile int8_t x74 = -42;
	volatile uint16_t x75 = UINT16_MAX;
	static int32_t t18 = -2600;

	t18 = ((x73<(x74==x75))|x76);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = INT32_MAX;
	volatile int64_t x78 = INT64_MIN;
	static int8_t x79 = INT8_MIN;
	static int64_t x80 = INT64_MIN;

	t19 = ((x77<(x78==x79))|x80);

	if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	static int8_t x82 = INT8_MIN;
	volatile int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t20 = INT32_MIN;

	t20 = ((x81<(x82==x83))|x84);

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = INT32_MIN;
	int16_t x86 = -132;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MAX;

	t21 = ((x85<(x86==x87))|x88);

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 9U;
	uint32_t x90 = 1133419U;
	int16_t x91 = INT16_MAX;
	static int64_t x92 = INT64_MAX;
	volatile int64_t t22 = INT64_MAX;

	t22 = ((x89<(x90==x91))|x92);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int16_t x94 = -1;
	uint16_t x95 = 6U;
	int8_t x96 = 1;
	volatile int32_t t23 = -204;

	t23 = ((x93<(x94==x95))|x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 871U;
	int16_t x99 = INT16_MIN;
	uint64_t x100 = 319892LLU;
	volatile uint64_t t24 = 5397887290LLU;

	t24 = ((x97<(x98==x99))|x100);

	if (t24 != 319892LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint8_t x103 = 29U;
	int8_t x104 = INT8_MIN;

	t25 = ((x101<(x102==x103))|x104);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	int8_t x106 = -34;
	int16_t x108 = INT16_MAX;
	static volatile int32_t t26 = 1;

	t26 = ((x105<(x106==x107))|x108);

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 3U;
	uint64_t x110 = 301774513725LLU;
	uint64_t x111 = UINT64_MAX;
	volatile int8_t x112 = INT8_MAX;
	volatile int32_t t27 = -1;

	t27 = ((x109<(x110==x111))|x112);

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	volatile int64_t x114 = -4130193561930171LL;
	int8_t x115 = 3;
	int8_t x116 = 10;

	t28 = ((x113<(x114==x115))|x116);

	if (t28 != 11) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int8_t x118 = INT8_MIN;
	int8_t x119 = -1;
	uint64_t x120 = UINT64_MAX;
	uint64_t t29 = UINT64_MAX;

	t29 = ((x117<(x118==x119))|x120);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -62620;
	volatile int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MAX;
	int64_t t30 = INT64_MAX;

	t30 = ((x121<(x122==x123))|x124);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	int8_t x126 = -16;
	static int64_t x127 = INT64_MAX;
	uint64_t x128 = 1061163612100914LLU;
	uint64_t t31 = 851429181440LLU;

	t31 = ((x125<(x126==x127))|x128);

	if (t31 != 1061163612100914LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 18393895884090245LLU;
	uint64_t x130 = UINT64_MAX;
	uint8_t x131 = 0U;
	int64_t x132 = -40811570533824LL;
	volatile int64_t t32 = 2991043820296443LL;

	t32 = ((x129<(x130==x131))|x132);

	if (t32 != -40811570533824LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	uint8_t x134 = UINT8_MAX;
	int64_t x135 = 6008434921040292LL;
	uint8_t x136 = 0U;
	int32_t t33 = -29520963;

	t33 = ((x133<(x134==x135))|x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MAX;
	uint8_t x138 = UINT8_MAX;
	static int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MAX;
	int32_t t34 = -22;

	t34 = ((x137<(x138==x139))|x140);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x141 = 57529760458LLU;
	int16_t x142 = INT16_MAX;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = INT32_MIN;

	t35 = ((x141<(x142==x143))|x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = -1LL;
	volatile int64_t t36 = -15LL;

	t36 = ((x145<(x146==x147))|x148);

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x150 = 84U;
	static int8_t x152 = INT8_MAX;
	int32_t t37 = 24376119;

	t37 = ((x149<(x150==x151))|x152);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x154 = -3031;
	int8_t x155 = INT8_MAX;
	int32_t t38 = INT32_MIN;

	t38 = ((x153<(x154==x155))|x156);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int16_t x158 = INT16_MAX;
	static uint64_t x159 = 1LLU;
	int16_t x160 = INT16_MIN;
	static int32_t t39 = 240333;

	t39 = ((x157<(x158==x159))|x160);

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 8U;
	static uint32_t x162 = 1U;
	int32_t x163 = -3;
	uint64_t x164 = 6LLU;
	static volatile uint64_t t40 = 321443829328983LLU;

	t40 = ((x161<(x162==x163))|x164);

	if (t40 != 6LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = -1;
	int8_t x167 = INT8_MIN;
	uint8_t x168 = UINT8_MAX;
	int32_t t41 = -79195;

	t41 = ((x165<(x166==x167))|x168);

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x171 = INT64_MIN;
	uint16_t x172 = 1426U;

	t42 = ((x169<(x170==x171))|x172);

	if (t42 != 1427) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MIN;
	int32_t x175 = INT32_MAX;
	static int8_t x176 = 0;
	static volatile int32_t t43 = -1;

	t43 = ((x173<(x174==x175))|x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	uint64_t x178 = UINT64_MAX;
	static int32_t t44 = -257;

	t44 = ((x177<(x178==x179))|x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -10;
	int32_t x182 = -1;
	static int16_t x183 = 0;
	volatile int32_t t45 = INT32_MAX;

	t45 = ((x181<(x182==x183))|x184);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = 115U;
	int64_t x187 = 2LL;
	static uint64_t x188 = 26LLU;

	t46 = ((x185<(x186==x187))|x188);

	if (t46 != 27LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 27U;
	volatile int16_t x190 = 125;
	int32_t x191 = INT32_MIN;
	int64_t x192 = 136996323LL;

	t47 = ((x189<(x190==x191))|x192);

	if (t47 != 136996323LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 343U;
	volatile int16_t x194 = INT16_MIN;
	int16_t x195 = INT16_MIN;
	static volatile int16_t x196 = -15;
	volatile int32_t t48 = -14533;

	t48 = ((x193<(x194==x195))|x196);

	if (t48 != -15) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MAX;
	int32_t x199 = -1;
	int64_t x200 = 8854749LL;
	volatile int64_t t49 = 29889LL;

	t49 = ((x197<(x198==x199))|x200);

	if (t49 != 8854749LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	uint8_t x203 = 2U;
	int32_t x204 = -1;
	volatile int32_t t50 = -61;

	t50 = ((x201<(x202==x203))|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x205 = 313820006U;
	static uint64_t x206 = 208145093175254LLU;
	volatile int32_t t51 = INT32_MIN;

	t51 = ((x205<(x206==x207))|x208);

	if (t51 != INT32_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -886971;
	static int16_t x212 = INT16_MIN;

	t52 = ((x209<(x210==x211))|x212);

	if (t52 != -32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	int16_t x214 = -1;
	int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MAX;
	volatile int32_t t53 = 1;

	t53 = ((x213<(x214==x215))|x216);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 153LL;
	volatile uint16_t x218 = 2183U;
	int32_t x219 = -1;
	int8_t x220 = INT8_MAX;

	t54 = ((x217<(x218==x219))|x220);

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	static uint64_t x224 = 1LLU;

	t55 = ((x221<(x222==x223))|x224);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 18108U;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = ((x225<(x226==x227))|x228);

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = UINT64_MAX;
	int8_t x230 = INT8_MIN;
	volatile uint8_t x231 = UINT8_MAX;
	volatile int64_t t57 = 376LL;

	t57 = ((x229<(x230==x231))|x232);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = 1LL;
	uint16_t x236 = 198U;
	int32_t t58 = 65;

	t58 = ((x233<(x234==x235))|x236);

	if (t58 != 198) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -3695;
	int16_t x238 = INT16_MIN;
	uint8_t x239 = UINT8_MAX;
	int32_t x240 = -1;

	t59 = ((x237<(x238==x239))|x240);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	static int64_t x242 = -1986591676677144LL;
	volatile int32_t x244 = INT32_MIN;
	int32_t t60 = 8;

	t60 = ((x241<(x242==x243))|x244);

	if (t60 != -2147483647) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MIN;
	volatile int32_t x246 = -1;
	static volatile int16_t x247 = INT16_MAX;
	int32_t t61 = 15918625;

	t61 = ((x245<(x246==x247))|x248);

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	int32_t x250 = -325;
	int32_t x251 = 116749790;
	uint32_t x252 = UINT32_MAX;
	static volatile uint32_t t62 = UINT32_MAX;

	t62 = ((x249<(x250==x251))|x252);

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 222U;
	int8_t x254 = 18;
	int32_t x256 = 1379;
	int32_t t63 = -49072240;

	t63 = ((x253<(x254==x255))|x256);

	if (t63 != 1379) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x257 = UINT32_MAX;
	volatile int64_t x258 = INT64_MAX;
	int64_t x259 = -6717LL;

	t64 = ((x257<(x258==x259))|x260);

	if (t64 != -30LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 493980LL;
	int64_t x263 = INT64_MAX;
	int32_t x264 = 179;
	int32_t t65 = 0;

	t65 = ((x261<(x262==x263))|x264);

	if (t65 != 179) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	static uint16_t x267 = 778U;
	volatile int32_t x268 = INT32_MAX;

	t66 = ((x265<(x266==x267))|x268);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	uint32_t x270 = UINT32_MAX;
	uint32_t x271 = 246692926U;
	uint32_t x272 = 16042652U;
	static uint32_t t67 = 620894U;

	t67 = ((x269<(x270==x271))|x272);

	if (t67 != 16042652U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -53;
	static int64_t x274 = INT64_MIN;
	int8_t x276 = -1;

	t68 = ((x273<(x274==x275))|x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x278 = -1LL;
	static int16_t x279 = INT16_MIN;
	uint32_t t69 = 645U;

	t69 = ((x277<(x278==x279))|x280);

	if (t69 != 1896U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = -12;
	int64_t x282 = -1LL;
	volatile int16_t x283 = INT16_MIN;
	static int64_t x284 = -3158186181675944LL;
	volatile int64_t t70 = 258988726374056LL;

	t70 = ((x281<(x282==x283))|x284);

	if (t70 != -3158186181675943LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = INT64_MAX;
	static uint64_t x287 = 13407153565842702LLU;
	static volatile uint8_t x288 = 0U;
	static int32_t t71 = -1359;

	t71 = ((x285<(x286==x287))|x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 149662410U;
	int32_t x292 = -85;
	static volatile int32_t t72 = -55526;

	t72 = ((x289<(x290==x291))|x292);

	if (t72 != -85) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x294 = 70878747LL;
	uint64_t x295 = 66972818023LLU;
	int32_t x296 = -1;
	int32_t t73 = -1;

	t73 = ((x293<(x294==x295))|x296);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 14U;
	int64_t x298 = 430595604LL;
	static uint64_t x299 = 231391549207LLU;
	int8_t x300 = INT8_MIN;

	t74 = ((x297<(x298==x299))|x300);

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 564;
	int8_t x302 = INT8_MIN;
	static uint16_t x303 = 79U;
	int64_t x304 = INT64_MIN;
	int64_t t75 = INT64_MIN;

	t75 = ((x301<(x302==x303))|x304);

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MIN;
	int16_t x306 = INT16_MIN;
	uint32_t x307 = 120036110U;
	int16_t x308 = INT16_MIN;
	int32_t t76 = 36180643;

	t76 = ((x305<(x306==x307))|x308);

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -9632283;
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	uint32_t x312 = 1429926877U;
	static volatile uint32_t t77 = 151627220U;

	t77 = ((x309<(x310==x311))|x312);

	if (t77 != 1429926877U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 348948LLU;
	static int8_t x314 = INT8_MIN;
	static int32_t x315 = -1;
	int64_t x316 = 175949LL;

	t78 = ((x313<(x314==x315))|x316);

	if (t78 != 175949LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x317 = -1;
	int64_t x319 = INT64_MAX;
	static volatile uint64_t x320 = 2836760820314LLU;
	static volatile uint64_t t79 = 7755480LLU;

	t79 = ((x317<(x318==x319))|x320);

	if (t79 != 2836760820315LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 64501969U;
	int32_t x322 = INT32_MAX;
	uint64_t x323 = UINT64_MAX;
	int32_t t80 = -4;

	t80 = ((x321<(x322==x323))|x324);

	if (t80 != 65) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x327 = INT32_MIN;
	uint8_t x328 = 47U;
	static int32_t t81 = -8;

	t81 = ((x325<(x326==x327))|x328);

	if (t81 != 47) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = 0;
	int8_t x331 = INT8_MIN;
	uint8_t x332 = UINT8_MAX;
	int32_t t82 = -9;

	t82 = ((x329<(x330==x331))|x332);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = 0;
	static int8_t x334 = 1;
	int16_t x335 = INT16_MAX;
	static int8_t x336 = 15;
	static int32_t t83 = 852;

	t83 = ((x333<(x334==x335))|x336);

	if (t83 != 15) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x337 = 41681016063949LL;
	int8_t x338 = 3;
	static int16_t x339 = INT16_MAX;
	static int8_t x340 = -33;
	int32_t t84 = 1;

	t84 = ((x337<(x338==x339))|x340);

	if (t84 != -33) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = 53137;
	int32_t x343 = INT32_MAX;
	volatile int32_t t85 = -12602;

	t85 = ((x341<(x342==x343))|x344);

	if (t85 != -14) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	static uint16_t x347 = 134U;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = ((x345<(x346==x347))|x348);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	int64_t x350 = -264LL;
	int64_t x351 = 19LL;
	int32_t t87 = 0;

	t87 = ((x349<(x350==x351))|x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x354 = 4U;

	t88 = ((x353<(x354==x355))|x356);

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x357 = 13U;
	uint16_t x358 = 15U;
	static int64_t x359 = -1LL;
	static volatile int16_t x360 = INT16_MAX;
	volatile int32_t t89 = -68956;

	t89 = ((x357<(x358==x359))|x360);

	if (t89 != 32767) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	static int64_t x363 = -1LL;
	static int16_t x364 = 1;
	volatile int32_t t90 = -72515;

	t90 = ((x361<(x362==x363))|x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x366 = 518787699313286480LLU;
	static volatile uint32_t x368 = 998168U;
	static volatile uint32_t t91 = 156U;

	t91 = ((x365<(x366==x367))|x368);

	if (t91 != 998169U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	uint64_t x370 = 1295651LLU;
	int64_t x372 = -262664LL;
	volatile int64_t t92 = 528LL;

	t92 = ((x369<(x370==x371))|x372);

	if (t92 != -262663LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MIN;
	volatile int16_t x375 = -1;
	int32_t x376 = -52;
	int32_t t93 = 477460565;

	t93 = ((x373<(x374==x375))|x376);

	if (t93 != -51) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 1U;
	volatile int16_t x378 = -1968;
	volatile int8_t x379 = INT8_MIN;
	uint16_t x380 = 2U;
	int32_t t94 = 1173;

	t94 = ((x377<(x378==x379))|x380);

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = 31186LL;
	volatile int32_t x382 = INT32_MAX;
	volatile uint64_t x383 = UINT64_MAX;
	static uint64_t x384 = 7763LLU;

	t95 = ((x381<(x382==x383))|x384);

	if (t95 != 7763LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	uint8_t x387 = UINT8_MAX;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t96 = -10634;

	t96 = ((x385<(x386==x387))|x388);

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -30;
	int64_t x390 = INT64_MAX;
	volatile uint32_t t97 = 0U;

	t97 = ((x389<(x390==x391))|x392);

	if (t97 != 730764861U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 1U;
	static int8_t x395 = INT8_MAX;
	uint32_t x396 = 2U;

	t98 = ((x393<(x394==x395))|x396);

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -3;
	int64_t x398 = -1LL;
	int8_t x399 = 1;
	int32_t x400 = INT32_MIN;

	t99 = ((x397<(x398==x399))|x400);

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

