#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int32_t x4 = INT32_MAX;
volatile uint64_t t0 = 5265588832943468282LLU;
static uint8_t x7 = UINT8_MAX;
int8_t x8 = -1;
int32_t t1 = -12997334;
volatile int64_t x9 = -1LL;
static int32_t x22 = INT32_MAX;
uint64_t t5 = 7274216569347068LLU;
int8_t x27 = INT8_MIN;
uint64_t x33 = 1261189390173LLU;
int8_t x34 = INT8_MIN;
int16_t x39 = INT16_MIN;
int32_t t9 = -10726227;
volatile uint32_t t12 = 227713U;
static int32_t x54 = -1;
uint64_t t13 = 116876762546236LLU;
static int8_t x60 = INT8_MAX;
int32_t t14 = -22360;
static uint32_t x64 = UINT32_MAX;
int64_t x76 = 50LL;
volatile int32_t x79 = INT32_MIN;
volatile int8_t x88 = INT8_MIN;
static volatile uint64_t x91 = 2040578819LLU;
uint8_t x92 = 0U;
volatile int64_t x94 = INT64_MAX;
volatile uint32_t t23 = 37481U;
volatile uint16_t x107 = 1U;
int8_t x110 = INT8_MIN;
volatile int64_t t25 = -208483LL;
int32_t x114 = -968592;
uint16_t x121 = 15320U;
int64_t x124 = -2040LL;
uint32_t x130 = 1598004U;
int32_t t30 = 3346;
int64_t x151 = INT64_MIN;
volatile int64_t x153 = INT64_MIN;
int64_t x154 = -1LL;
int64_t t36 = INT64_MIN;
volatile uint64_t x165 = 544781419336972252LLU;
static int64_t x167 = INT64_MIN;
uint64_t x169 = 524565559571LLU;
static int32_t x176 = -1;
int64_t x185 = -1LL;
volatile int8_t x186 = INT8_MIN;
int16_t x188 = -1;
static int8_t x193 = -1;
int16_t x195 = -1;
int64_t x197 = INT64_MIN;
uint16_t x199 = UINT16_MAX;
int32_t x200 = -1;
int16_t x202 = 295;
int16_t x208 = 1;
static uint32_t t50 = 149191U;
uint64_t t51 = 339LLU;
uint64_t x221 = UINT64_MAX;
uint8_t x226 = 7U;
uint64_t x227 = 7660LLU;
static volatile int64_t x232 = INT64_MIN;
uint8_t x237 = UINT8_MAX;
volatile uint64_t x238 = UINT64_MAX;
volatile int32_t t58 = -271467;
volatile uint16_t x253 = 507U;
uint64_t x254 = UINT64_MAX;
uint8_t x260 = UINT8_MAX;
volatile uint8_t x261 = 0U;
int8_t x277 = INT8_MAX;
int8_t x279 = INT8_MIN;
int32_t t64 = 16533;
int16_t x282 = 543;
int32_t x283 = INT32_MIN;
static uint64_t x285 = 23083005LLU;
int32_t x286 = -12;
static int64_t x294 = -67356752452LL;
int64_t x300 = 7430016LL;
int16_t x301 = -19;
int8_t x305 = 6;
static volatile uint8_t x311 = 99U;
int64_t x312 = 236LL;
volatile int64_t t72 = -2549620755253078460LL;
int64_t x315 = INT64_MIN;
static int64_t t74 = 7200052942723LL;
int16_t x322 = 31;
static volatile int32_t t77 = -16453242;
int16_t x335 = -1;
uint16_t x337 = UINT16_MAX;
int16_t x345 = INT16_MIN;
uint8_t x352 = 32U;
volatile int32_t t82 = 10;
int64_t x353 = INT64_MIN;
static int16_t x354 = -1;
uint64_t t83 = 27760162LLU;
uint16_t x358 = 817U;
uint64_t t84 = 1780015149847640580LLU;
int16_t x364 = INT16_MIN;
int32_t x366 = 648273225;
uint16_t x367 = 64U;
int8_t x372 = INT8_MAX;
volatile int8_t x373 = INT8_MAX;
int64_t t88 = 11825LL;
uint32_t x377 = 925301U;
int32_t x380 = INT32_MIN;
int64_t x387 = 480676690350LL;
uint8_t x389 = 94U;
uint32_t t92 = 12U;
static int8_t x396 = INT8_MIN;
int64_t t93 = -3341222835465LL;
int16_t x397 = INT16_MIN;
volatile int8_t x400 = -6;
static uint16_t x403 = 1U;
uint32_t t95 = 9431U;
static int32_t x408 = INT32_MIN;
volatile int64_t t96 = -1523393LL;
volatile int32_t t97 = 129;
uint32_t x413 = UINT32_MAX;
int64_t x414 = -1LL;
volatile uint32_t t98 = 825230U;
int32_t x419 = INT32_MIN;
static volatile int32_t t99 = -31336;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint64_t x3 = 33054625724030LLU;

	t0 = (((x1<x2)+x3)^x4);

	if (t0 != 33055658379649LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static uint64_t x6 = 2LLU;

	t1 = (((x5<x6)+x7)^x8);

	if (t1 != -256) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -6249;
	int8_t x11 = -1;
	int64_t x12 = INT64_MAX;
	int64_t t2 = INT64_MIN;

	t2 = (((x9<x10)+x11)^x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 8U;
	int64_t x14 = 175LL;
	uint64_t x15 = 242314152LLU;
	int32_t x16 = 315;
	static volatile uint64_t t3 = 31625LLU;

	t3 = (((x13<x14)+x15)^x16);

	if (t3 != 242313874LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int16_t x18 = INT16_MAX;
	volatile int8_t x19 = INT8_MIN;
	static int8_t x20 = INT8_MIN;
	int32_t t4 = 21500577;

	t4 = (((x17<x18)+x19)^x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int8_t x23 = INT8_MIN;
	uint64_t x24 = 893LLU;

	t5 = (((x21<x22)+x23)^x24);

	if (t5 != 18446744073709550844LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MIN;
	static int16_t x28 = -1;
	volatile int32_t t6 = -847203784;

	t6 = (((x25<x26)+x27)^x28);

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int8_t x30 = -1;
	int16_t x31 = -1286;
	int8_t x32 = -1;
	volatile int32_t t7 = -50499887;

	t7 = (((x29<x30)+x31)^x32);

	if (t7 != 1284) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x35 = UINT16_MAX;
	int32_t x36 = -27685;
	volatile int32_t t8 = -91;

	t8 = (((x33<x34)+x35)^x36);

	if (t8 != -93221) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 4725583;
	static int64_t x38 = 46840718744LL;
	static uint16_t x40 = 5532U;

	t9 = (((x37<x38)+x39)^x40);

	if (t9 != -27235) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	uint8_t x42 = UINT8_MAX;
	uint64_t x43 = 129665094942494260LLU;
	volatile int8_t x44 = -1;
	uint64_t t10 = 833LLU;

	t10 = (((x41<x42)+x43)^x44);

	if (t10 != 18317078978767057355LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 1749U;
	int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MIN;
	volatile uint32_t x48 = 3449255U;
	volatile uint32_t t11 = 714U;

	t11 = (((x45<x46)+x47)^x48);

	if (t11 != 4291502503U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 38U;
	volatile uint64_t x50 = UINT64_MAX;
	int16_t x51 = 169;
	uint32_t x52 = 7151821U;

	t12 = (((x49<x50)+x51)^x52);

	if (t12 != 7151719U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 187328U;
	volatile int8_t x55 = -7;
	static uint64_t x56 = 2783226252517760LLU;

	t13 = (((x53<x54)+x55)^x56);

	if (t13 != 18443960847457033850LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 8785U;
	int16_t x58 = INT16_MIN;
	static int8_t x59 = 3;

	t14 = (((x57<x58)+x59)^x60);

	if (t14 != 124) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = UINT64_MAX;
	int64_t x62 = -198133975035013LL;
	uint8_t x63 = UINT8_MAX;
	uint32_t t15 = 148051165U;

	t15 = (((x61<x62)+x63)^x64);

	if (t15 != 4294967040U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 1050540713159609LLU;
	volatile int16_t x66 = INT16_MAX;
	int16_t x67 = INT16_MIN;
	int32_t x68 = -1;
	int32_t t16 = -932;

	t16 = (((x65<x66)+x67)^x68);

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x69 = INT32_MIN;
	int32_t x70 = -2;
	int32_t x71 = 30;
	static int8_t x72 = INT8_MIN;
	static int32_t t17 = 4970;

	t17 = (((x69<x70)+x71)^x72);

	if (t17 != -97) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -1;
	uint8_t x74 = 14U;
	int8_t x75 = INT8_MIN;
	int64_t t18 = -2522512301LL;

	t18 = (((x73<x74)+x75)^x76);

	if (t18 != -77LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = -1;
	volatile int8_t x80 = 42;
	volatile int32_t t19 = -4338193;

	t19 = (((x77<x78)+x79)^x80);

	if (t19 != -2147483605) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int16_t x83 = INT16_MIN;
	int32_t x84 = 729508;
	int32_t t20 = 634848539;

	t20 = (((x81<x82)+x83)^x84);

	if (t20 != -745052) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -11;
	int32_t x86 = INT32_MIN;
	int8_t x87 = -15;
	int32_t t21 = -765656;

	t21 = (((x85<x86)+x87)^x88);

	if (t21 != 113) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static volatile int64_t x90 = -1LL;
	uint64_t t22 = 13113393745085213LLU;

	t22 = (((x89<x90)+x91)^x92);

	if (t22 != 2040578819LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 214581555LLU;
	static uint32_t x95 = UINT32_MAX;
	int32_t x96 = INT32_MIN;

	t23 = (((x93<x94)+x95)^x96);

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = INT16_MIN;
	volatile uint32_t x106 = 26U;
	int32_t x108 = INT32_MIN;
	volatile int32_t t24 = 557322;

	t24 = (((x105<x106)+x107)^x108);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = -1LL;
	static volatile uint8_t x111 = 6U;
	int64_t x112 = INT64_MAX;

	t25 = (((x109<x110)+x111)^x112);

	if (t25 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = 115;
	volatile int8_t x115 = INT8_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t26 = 48519;

	t26 = (((x113<x114)+x115)^x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = 30;
	int32_t x118 = -1;
	int8_t x119 = 0;
	int16_t x120 = -3;
	volatile int32_t t27 = -113;

	t27 = (((x117<x118)+x119)^x120);

	if (t27 != -3) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x122 = INT32_MAX;
	int64_t x123 = INT64_MIN;
	volatile int64_t t28 = 1817932LL;

	t28 = (((x121<x122)+x123)^x124);

	if (t28 != 9223372036854773769LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = -1;
	uint16_t x126 = UINT16_MAX;
	volatile uint8_t x127 = 0U;
	int32_t x128 = 489314;
	int32_t t29 = 857;

	t29 = (((x125<x126)+x127)^x128);

	if (t29 != 489315) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = -30;
	static volatile uint8_t x131 = UINT8_MAX;
	volatile int8_t x132 = -1;

	t30 = (((x129<x130)+x131)^x132);

	if (t30 != -256) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = UINT8_MAX;
	int8_t x138 = -1;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = 4U;
	volatile int32_t t31 = -3749;

	t31 = (((x137<x138)+x139)^x140);

	if (t31 != -32764) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint32_t x141 = 40433U;
	volatile int16_t x142 = 11;
	volatile uint16_t x143 = 10U;
	uint32_t x144 = UINT32_MAX;
	uint32_t t32 = 0U;

	t32 = (((x141<x142)+x143)^x144);

	if (t32 != 4294967285U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x145 = UINT16_MAX;
	volatile int64_t x146 = INT64_MIN;
	int32_t x147 = INT32_MIN;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t33 = 5;

	t33 = (((x145<x146)+x147)^x148);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint32_t x149 = UINT32_MAX;
	int32_t x150 = -7881597;
	static uint16_t x152 = 1441U;
	volatile int64_t t34 = 3903999LL;

	t34 = (((x149<x150)+x151)^x152);

	if (t34 != -9223372036854774367LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x155 = 5012U;
	int64_t x156 = INT64_MIN;
	int64_t t35 = 6419264368368LL;

	t35 = (((x153<x154)+x155)^x156);

	if (t35 != -9223372036854770795LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = -1;
	uint32_t x158 = 174284992U;
	int64_t x159 = INT64_MIN;
	volatile uint8_t x160 = 0U;

	t36 = (((x157<x158)+x159)^x160);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -1;
	uint64_t x162 = 10979968885984LLU;
	volatile int16_t x163 = INT16_MIN;
	volatile int64_t x164 = INT64_MIN;
	volatile int64_t t37 = -1045822LL;

	t37 = (((x161<x162)+x163)^x164);

	if (t37 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x166 = -3390525;
	uint64_t x168 = 567120892260039LLU;
	uint64_t t38 = 8407013LLU;

	t38 = (((x165<x166)+x167)^x168);

	if (t38 != 9223939157747035846LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x170 = -62;
	uint64_t x171 = 752100LLU;
	int16_t x172 = 13572;
	uint64_t t39 = 8340333209LLU;

	t39 = (((x169<x170)+x171)^x172);

	if (t39 != 740577LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = 3;
	uint32_t x174 = UINT32_MAX;
	static int8_t x175 = INT8_MIN;
	int32_t t40 = 96622774;

	t40 = (((x173<x174)+x175)^x176);

	if (t40 != 126) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = -1;
	uint64_t x178 = 545389815LLU;
	volatile int16_t x179 = INT16_MIN;
	volatile int32_t x180 = -1;
	static volatile int32_t t41 = 15905;

	t41 = (((x177<x178)+x179)^x180);

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x181 = 146058569LLU;
	int16_t x182 = 1827;
	int32_t x183 = INT32_MAX;
	volatile uint64_t x184 = UINT64_MAX;
	uint64_t t42 = 20578LLU;

	t42 = (((x181<x182)+x183)^x184);

	if (t42 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x187 = 2U;
	int32_t t43 = -119;

	t43 = (((x185<x186)+x187)^x188);

	if (t43 != -3) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x189 = -5314;
	volatile int32_t x190 = -1;
	uint16_t x191 = 60U;
	volatile uint64_t x192 = 14572297720268LLU;
	uint64_t t44 = 174LLU;

	t44 = (((x189<x190)+x191)^x192);

	if (t44 != 14572297720305LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x194 = INT32_MIN;
	static int32_t x196 = -40;
	int32_t t45 = 7722;

	t45 = (((x193<x194)+x195)^x196);

	if (t45 != 39) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x198 = INT16_MAX;
	volatile int32_t t46 = 12535583;

	t46 = (((x197<x198)+x199)^x200);

	if (t46 != -65537) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	static volatile int8_t x203 = -1;
	int16_t x204 = 2;
	int32_t t47 = 3320590;

	t47 = (((x201<x202)+x203)^x204);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = -1;
	int16_t x206 = -1;
	int8_t x207 = -1;
	volatile int32_t t48 = 1;

	t48 = (((x205<x206)+x207)^x208);

	if (t48 != -2) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x209 = 0;
	int8_t x210 = INT8_MIN;
	int16_t x211 = 7336;
	int16_t x212 = INT16_MIN;
	static int32_t t49 = 391;

	t49 = (((x209<x210)+x211)^x212);

	if (t49 != -25432) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = -56;
	static volatile int16_t x214 = 5533;
	int16_t x215 = -1;
	uint32_t x216 = 340507U;

	t50 = (((x213<x214)+x215)^x216);

	if (t50 != 340507U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x217 = UINT8_MAX;
	int8_t x218 = INT8_MIN;
	uint64_t x219 = UINT64_MAX;
	static uint16_t x220 = UINT16_MAX;

	t51 = (((x217<x218)+x219)^x220);

	if (t51 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x222 = INT16_MIN;
	uint16_t x223 = UINT16_MAX;
	static uint64_t x224 = 114140541552LLU;
	uint64_t t52 = 1LLU;

	t52 = (((x221<x222)+x223)^x224);

	if (t52 != 114140548495LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x225 = INT8_MIN;
	uint8_t x228 = UINT8_MAX;
	static uint64_t t53 = 180571645780LLU;

	t53 = (((x225<x226)+x227)^x228);

	if (t53 != 7442LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 2;
	volatile int64_t t54 = -1LL;

	t54 = (((x229<x230)+x231)^x232);

	if (t54 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x233 = -1;
	int64_t x234 = -1LL;
	uint32_t x235 = 419U;
	int64_t x236 = -1LL;
	volatile int64_t t55 = 66691546058775311LL;

	t55 = (((x233<x234)+x235)^x236);

	if (t55 != -420LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x239 = 4792372U;
	uint8_t x240 = UINT8_MAX;
	volatile uint32_t t56 = 5269524U;

	t56 = (((x237<x238)+x239)^x240);

	if (t56 != 4792522U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x245 = 24U;
	uint16_t x246 = 1116U;
	static int64_t x247 = -1LL;
	int32_t x248 = INT32_MAX;
	int64_t t57 = 1570LL;

	t57 = (((x245<x246)+x247)^x248);

	if (t57 != 2147483647LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x249 = 0U;
	int32_t x250 = INT32_MIN;
	int16_t x251 = INT16_MIN;
	static uint16_t x252 = UINT16_MAX;

	t58 = (((x249<x250)+x251)^x252);

	if (t58 != -32769) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x255 = UINT8_MAX;
	uint16_t x256 = 11087U;
	volatile int32_t t59 = 133928;

	t59 = (((x253<x254)+x255)^x256);

	if (t59 != 10831) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = INT32_MIN;
	static volatile uint8_t x258 = UINT8_MAX;
	static uint8_t x259 = UINT8_MAX;
	volatile int32_t t60 = -2313882;

	t60 = (((x257<x258)+x259)^x260);

	if (t60 != 511) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x262 = 1U;
	static int8_t x263 = -1;
	int32_t x264 = INT32_MIN;
	static int32_t t61 = INT32_MIN;

	t61 = (((x261<x262)+x263)^x264);

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x265 = UINT8_MAX;
	int16_t x266 = -3;
	uint8_t x267 = 1U;
	uint16_t x268 = 1U;
	volatile int32_t t62 = -7469026;

	t62 = (((x265<x266)+x267)^x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MIN;
	static uint32_t x270 = 379907711U;
	static volatile int8_t x271 = -15;
	volatile int64_t x272 = -1LL;
	int64_t t63 = 33636909731027592LL;

	t63 = (((x269<x270)+x271)^x272);

	if (t63 != 14LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x278 = 16308382;
	static volatile int8_t x280 = INT8_MAX;

	t64 = (((x277<x278)+x279)^x280);

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = INT64_MAX;
	int16_t x284 = -1;
	static int32_t t65 = INT32_MAX;

	t65 = (((x281<x282)+x283)^x284);

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x287 = INT64_MIN;
	uint64_t x288 = 1830013342LLU;
	volatile uint64_t t66 = 295210992LLU;

	t66 = (((x285<x286)+x287)^x288);

	if (t66 != 9223372038684789151LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = -108772;
	int64_t x290 = 1LL;
	volatile int16_t x291 = 1;
	volatile uint16_t x292 = UINT16_MAX;
	int32_t t67 = 24023239;

	t67 = (((x289<x290)+x291)^x292);

	if (t67 != 65533) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x293 = INT32_MAX;
	uint64_t x295 = 922517LLU;
	volatile uint32_t x296 = UINT32_MAX;
	volatile uint64_t t68 = 317239263252LLU;

	t68 = (((x293<x294)+x295)^x296);

	if (t68 != 4294044778LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x297 = 3083465U;
	static int32_t x298 = INT32_MIN;
	int8_t x299 = -1;
	volatile int64_t t69 = -17992LL;

	t69 = (((x297<x298)+x299)^x300);

	if (t69 != 7430016LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x302 = -1;
	static int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MAX;
	volatile int64_t t70 = -774813416206014LL;

	t70 = (((x301<x302)+x303)^x304);

	if (t70 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x306 = INT32_MAX;
	int16_t x307 = -163;
	static volatile int32_t x308 = -1;
	static int32_t t71 = -1646;

	t71 = (((x305<x306)+x307)^x308);

	if (t71 != 161) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = INT64_MAX;
	volatile uint64_t x310 = 124571LLU;

	t72 = (((x309<x310)+x311)^x312);

	if (t72 != 143LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = -235;
	volatile int8_t x314 = -1;
	uint32_t x316 = UINT32_MAX;
	static volatile int64_t t73 = -2LL;

	t73 = (((x313<x314)+x315)^x316);

	if (t73 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x317 = INT64_MAX;
	volatile uint64_t x318 = 3649160LLU;
	int8_t x319 = 56;
	volatile int64_t x320 = -1LL;

	t74 = (((x317<x318)+x319)^x320);

	if (t74 != -57LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x321 = UINT32_MAX;
	volatile uint64_t x323 = 9318319LLU;
	int16_t x324 = INT16_MIN;
	uint64_t t75 = 319027LLU;

	t75 = (((x321<x322)+x323)^x324);

	if (t75 != 18446744073700224943LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x325 = UINT8_MAX;
	uint64_t x326 = 406491154866LLU;
	int8_t x327 = INT8_MIN;
	int8_t x328 = INT8_MIN;
	volatile int32_t t76 = -44197;

	t76 = (((x325<x326)+x327)^x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x329 = 59828U;
	uint32_t x330 = 57U;
	uint8_t x331 = UINT8_MAX;
	int32_t x332 = INT32_MIN;

	t77 = (((x329<x330)+x331)^x332);

	if (t77 != -2147483393) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x333 = 2U;
	int64_t x334 = -1LL;
	int64_t x336 = 109113041395LL;
	volatile int64_t t78 = 373947394790LL;

	t78 = (((x333<x334)+x335)^x336);

	if (t78 != -109113041396LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x338 = INT32_MIN;
	static int64_t x339 = INT64_MIN;
	int64_t x340 = -621LL;
	int64_t t79 = 1045433LL;

	t79 = (((x337<x338)+x339)^x340);

	if (t79 != 9223372036854775187LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x341 = INT32_MAX;
	int32_t x342 = INT32_MIN;
	uint8_t x343 = 16U;
	uint16_t x344 = UINT16_MAX;
	static int32_t t80 = -952;

	t80 = (((x341<x342)+x343)^x344);

	if (t80 != 65519) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x346 = INT64_MIN;
	static uint16_t x347 = 15828U;
	int8_t x348 = -1;
	static int32_t t81 = 6269839;

	t81 = (((x345<x346)+x347)^x348);

	if (t81 != -15829) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x349 = 0;
	int16_t x350 = -1;
	int16_t x351 = INT16_MIN;

	t82 = (((x349<x350)+x351)^x352);

	if (t82 != -32736) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x355 = 61567527U;
	uint64_t x356 = UINT64_MAX;

	t83 = (((x353<x354)+x355)^x356);

	if (t83 != 18446744073647984087LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x357 = INT16_MIN;
	int8_t x359 = INT8_MAX;
	uint64_t x360 = UINT64_MAX;

	t84 = (((x357<x358)+x359)^x360);

	if (t84 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = -828552063;
	static int8_t x362 = -2;
	static int8_t x363 = INT8_MAX;
	int32_t t85 = -249106;

	t85 = (((x361<x362)+x363)^x364);

	if (t85 != -32640) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x365 = 401961;
	volatile int8_t x368 = 2;
	volatile int32_t t86 = -4215;

	t86 = (((x365<x366)+x367)^x368);

	if (t86 != 67) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x369 = -1LL;
	static uint64_t x370 = UINT64_MAX;
	static int16_t x371 = INT16_MIN;
	static volatile int32_t t87 = -854384;

	t87 = (((x369<x370)+x371)^x372);

	if (t87 != -32641) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x374 = 450LLU;
	int64_t x375 = INT64_MIN;
	int16_t x376 = INT16_MAX;

	t88 = (((x373<x374)+x375)^x376);

	if (t88 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x378 = INT8_MIN;
	volatile int8_t x379 = INT8_MIN;
	int32_t t89 = -110;

	t89 = (((x377<x378)+x379)^x380);

	if (t89 != 2147483521) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x381 = INT8_MIN;
	uint64_t x382 = 783949LLU;
	int64_t x383 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	int64_t t90 = 53629646067LL;

	t90 = (((x381<x382)+x383)^x384);

	if (t90 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -1;
	static uint16_t x386 = 151U;
	int16_t x388 = 1;
	static volatile int64_t t91 = -195398427556922511LL;

	t91 = (((x385<x386)+x387)^x388);

	if (t91 != 480676690350LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x390 = 1538226485628236LLU;
	uint32_t x391 = 103456U;
	int8_t x392 = -1;

	t92 = (((x389<x390)+x391)^x392);

	if (t92 != 4294863838U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = -1;
	int64_t x395 = -2365LL;

	t93 = (((x393<x394)+x395)^x396);

	if (t93 != 2371LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x398 = 5LL;
	static uint64_t x399 = 130683033LLU;
	uint64_t t94 = 67LLU;

	t94 = (((x397<x398)+x399)^x400);

	if (t94 != 18446744073578868576LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x401 = -1;
	static uint64_t x402 = 7297684704LLU;
	uint32_t x404 = 112508146U;

	t95 = (((x401<x402)+x403)^x404);

	if (t95 != 112508147U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x405 = 5146U;
	uint16_t x406 = 121U;
	int64_t x407 = -1LL;

	t96 = (((x405<x406)+x407)^x408);

	if (t96 != 2147483647LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MIN;
	int32_t x411 = INT32_MIN;
	static int8_t x412 = INT8_MIN;

	t97 = (((x409<x410)+x411)^x412);

	if (t97 != 2147483521) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x415 = INT32_MIN;
	uint32_t x416 = 847U;

	t98 = (((x413<x414)+x415)^x416);

	if (t98 != 2147484495U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x417 = 381131396U;
	int32_t x418 = -27178007;
	volatile int32_t x420 = INT32_MAX;

	t99 = (((x417<x418)+x419)^x420);

	if (t99 != -2) { NG(); } else { ; }
	
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

