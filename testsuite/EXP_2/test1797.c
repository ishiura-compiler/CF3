#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x1 = 0;
static uint64_t x3 = UINT64_MAX;
int16_t x5 = -1;
int64_t x11 = INT64_MIN;
int32_t t2 = -387;
int32_t x20 = -115982;
uint16_t x27 = 5906U;
uint64_t t6 = UINT64_MAX;
volatile int16_t x36 = INT16_MIN;
int64_t x38 = -1LL;
static volatile uint8_t x41 = 103U;
int16_t x43 = -11704;
int32_t t10 = 56872436;
int32_t x49 = 8568581;
uint32_t x50 = 12947U;
volatile int32_t t14 = 1;
static int32_t x63 = INT32_MIN;
volatile int32_t x66 = 4472;
static int32_t x72 = 33;
uint8_t x74 = 1U;
int16_t x75 = -4259;
static int16_t x79 = -1;
volatile int8_t x94 = -1;
int32_t t24 = 0;
volatile int32_t t25 = -1;
int8_t x106 = INT8_MAX;
static int64_t x114 = -1LL;
uint16_t x126 = 25989U;
int32_t x131 = -24359;
int8_t x132 = -1;
uint64_t x137 = 66628614456231LLU;
uint64_t x138 = 16112LLU;
int8_t x142 = 20;
uint8_t x145 = UINT8_MAX;
volatile int8_t x148 = 1;
static int32_t t36 = -96958701;
int32_t x153 = INT32_MIN;
int8_t x156 = 0;
int64_t t39 = 117LL;
uint16_t x161 = UINT16_MAX;
volatile int32_t x164 = INT32_MIN;
volatile int32_t x165 = -1;
int8_t x167 = INT8_MIN;
volatile int32_t t41 = -11262713;
uint8_t x171 = 88U;
static uint16_t x175 = 30U;
volatile int32_t x179 = -1;
int16_t x183 = INT16_MAX;
volatile int32_t t45 = -386188;
uint64_t x186 = UINT64_MAX;
uint16_t x189 = UINT16_MAX;
volatile int32_t t49 = -39025;
int8_t x201 = -2;
int16_t x206 = -314;
static volatile int8_t x208 = INT8_MIN;
int32_t t51 = -53;
int32_t x210 = -917903;
static int16_t x218 = -3;
volatile int32_t t54 = -768;
int32_t x228 = -1;
volatile int32_t x230 = INT32_MIN;
uint8_t x231 = UINT8_MAX;
volatile int8_t x236 = INT8_MIN;
int16_t x237 = -1;
uint8_t x241 = 44U;
volatile uint64_t x244 = 294459100936LLU;
static uint32_t x250 = UINT32_MAX;
uint16_t x254 = 822U;
int16_t x258 = -1;
int16_t x261 = INT16_MIN;
static volatile int32_t t65 = 4;
int64_t x265 = 4922955LL;
uint32_t x271 = 516U;
volatile int8_t x272 = -1;
volatile int64_t x285 = -262688785LL;
static int16_t x287 = INT16_MIN;
volatile int64_t x288 = 586044579LL;
volatile int64_t t71 = -31988491972719792LL;
int64_t x295 = INT64_MIN;
static int64_t x300 = INT64_MAX;
int16_t x303 = -1;
uint64_t x304 = 757LLU;
volatile uint64_t t75 = 691LLU;
uint64_t t77 = 6948541509LLU;
uint64_t x314 = UINT64_MAX;
uint64_t x315 = UINT64_MAX;
volatile int32_t t79 = 1;
uint32_t x333 = 1745087034U;
volatile int8_t x342 = INT8_MAX;
volatile uint32_t x352 = 16231609U;
int32_t x355 = INT32_MIN;
int32_t t88 = 494755;
int8_t x363 = 3;
static uint8_t x364 = 23U;
int32_t x371 = 1001212159;
int64_t x374 = INT64_MAX;
int8_t x375 = INT8_MAX;
uint16_t x377 = 21044U;
static int16_t x380 = -2712;
int16_t x387 = INT16_MIN;
int8_t x397 = -4;
static int32_t x398 = -1;


void f0(void) {
	uint16_t x2 = UINT16_MAX;
	int8_t x4 = -1;
	volatile int32_t t0 = -455126;

	t0 = ((x1<(x2&x3))*x4);

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MIN;
	volatile int64_t x7 = 4201049643897445LL;
	static uint8_t x8 = 40U;
	volatile int32_t t1 = -6;

	t1 = ((x5<(x6&x7))*x8);

	if (t1 != 40) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = 25U;
	volatile uint8_t x10 = 60U;
	static uint16_t x12 = 486U;

	t2 = ((x9<(x10&x11))*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int32_t x14 = -1;
	int16_t x15 = INT16_MIN;
	volatile int16_t x16 = 61;
	int32_t t3 = -35633;

	t3 = ((x13<(x14&x15))*x16);

	if (t3 != 61) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -1LL;
	uint16_t x19 = 1648U;
	volatile int32_t t4 = 43;

	t4 = ((x17<(x18&x19))*x20);

	if (t4 != -115982) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile int8_t x22 = INT8_MIN;
	uint64_t x23 = 252073210LLU;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = -23;

	t5 = ((x21<(x22&x23))*x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 0;
	int32_t x26 = -1;
	uint64_t x28 = UINT64_MAX;

	t6 = ((x25<(x26&x27))*x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 1U;
	static volatile int16_t x30 = 0;
	uint64_t x31 = UINT64_MAX;
	volatile int8_t x32 = -1;
	int32_t t7 = -200;

	t7 = ((x29<(x30&x31))*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1241929543389LL;
	volatile uint16_t x34 = 13U;
	static int32_t x35 = INT32_MIN;
	static volatile int32_t t8 = 738925122;

	t8 = ((x33<(x34&x35))*x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int8_t x39 = INT8_MIN;
	int16_t x40 = -1;
	int32_t t9 = 21167;

	t9 = ((x37<(x38&x39))*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	int8_t x44 = INT8_MIN;

	t10 = ((x41<(x42&x43))*x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int16_t x46 = INT16_MIN;
	int32_t x47 = 15565;
	uint32_t x48 = 17769452U;
	uint32_t t11 = 288332494U;

	t11 = ((x45<(x46&x47))*x48);

	if (t11 != 17769452U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x51 = INT64_MIN;
	int16_t x52 = -1;
	static int32_t t12 = 1;

	t12 = ((x49<(x50&x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1064060689;
	volatile int16_t x54 = INT16_MAX;
	int8_t x55 = INT8_MIN;
	static uint64_t x56 = 1349LLU;
	volatile uint64_t t13 = 273725785885787718LLU;

	t13 = ((x53<(x54&x55))*x56);

	if (t13 != 1349LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 85U;
	uint64_t x58 = 4397015656822LLU;
	volatile int32_t x59 = INT32_MIN;
	int16_t x60 = -1;

	t14 = ((x57<(x58&x59))*x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	int16_t x62 = -14;
	volatile int16_t x64 = 93;
	int32_t t15 = -5910;

	t15 = ((x61<(x62&x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -230820;
	int32_t x67 = -652273;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -2;

	t16 = ((x65<(x66&x67))*x68);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 8254U;
	uint64_t x70 = UINT64_MAX;
	volatile int64_t x71 = INT64_MAX;
	int32_t t17 = -125;

	t17 = ((x69<(x70&x71))*x72);

	if (t17 != 33) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -3LL;
	int16_t x76 = INT16_MIN;
	volatile int32_t t18 = 509;

	t18 = ((x73<(x74&x75))*x76);

	if (t18 != -32768) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 18U;
	int8_t x78 = INT8_MIN;
	volatile int64_t x80 = INT64_MAX;
	int64_t t19 = -66980003173LL;

	t19 = ((x77<(x78&x79))*x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = INT8_MAX;
	int8_t x83 = INT8_MIN;
	uint32_t x84 = 70172416U;
	volatile uint32_t t20 = 14504U;

	t20 = ((x81<(x82&x83))*x84);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int16_t x86 = 0;
	uint64_t x87 = 370413056288212122LLU;
	volatile int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -11;

	t21 = ((x85<(x86&x87))*x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = INT32_MIN;
	uint16_t x90 = 85U;
	int8_t x91 = INT8_MIN;
	uint8_t x92 = 5U;
	int32_t t22 = -2;

	t22 = ((x89<(x90&x91))*x92);

	if (t22 != 5) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1U;
	int32_t x95 = INT32_MIN;
	int32_t x96 = 980825056;
	static int32_t t23 = 0;

	t23 = ((x93<(x94&x95))*x96);

	if (t23 != 980825056) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = 11U;
	static int32_t x98 = INT32_MAX;
	int8_t x99 = -1;
	int16_t x100 = INT16_MAX;

	t24 = ((x97<(x98&x99))*x100);

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 51138LL;
	uint8_t x102 = 1U;
	uint64_t x103 = 14678033LLU;
	volatile int32_t x104 = 486;

	t25 = ((x101<(x102&x103))*x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 75607LLU;
	int32_t x107 = INT32_MIN;
	uint16_t x108 = 1648U;
	static int32_t t26 = -39378119;

	t26 = ((x105<(x106&x107))*x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	static int16_t x110 = INT16_MAX;
	uint32_t x111 = 68U;
	uint16_t x112 = 89U;
	int32_t t27 = 499104752;

	t27 = ((x109<(x110&x111))*x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 63LL;
	int8_t x115 = INT8_MIN;
	volatile int32_t x116 = INT32_MIN;
	int32_t t28 = 2;

	t28 = ((x113<(x114&x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = 9;
	static uint64_t x118 = 1339977361115377609LLU;
	int8_t x119 = INT8_MAX;
	static uint64_t x120 = 120078779036643967LLU;
	uint64_t t29 = 2089703120950LLU;

	t29 = ((x117<(x118&x119))*x120);

	if (t29 != 120078779036643967LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	static volatile int16_t x122 = -1;
	int8_t x123 = INT8_MAX;
	static int64_t x124 = INT64_MIN;
	int64_t t30 = -1102841809216675LL;

	t30 = ((x121<(x122&x123))*x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = 326313878214902LL;
	volatile int8_t x127 = INT8_MAX;
	int32_t x128 = INT32_MAX;
	static int32_t t31 = -7;

	t31 = ((x125<(x126&x127))*x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	volatile uint32_t x130 = 26782910U;
	static int32_t t32 = 14;

	t32 = ((x129<(x130&x131))*x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint32_t x133 = 12999409U;
	uint8_t x134 = 3U;
	static int64_t x135 = -1LL;
	static uint64_t x136 = 3759962185LLU;
	volatile uint64_t t33 = 444LLU;

	t33 = ((x133<(x134&x135))*x136);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MAX;
	volatile int32_t t34 = -6166;

	t34 = ((x137<(x138&x139))*x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -4;
	uint32_t x143 = 7741419U;
	volatile int8_t x144 = INT8_MIN;
	int32_t t35 = 250355;

	t35 = ((x141<(x142&x143))*x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x146 = -1;
	int64_t x147 = INT64_MAX;

	t36 = ((x145<(x146&x147))*x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 17U;
	int64_t x150 = INT64_MIN;
	uint64_t x151 = 6744LLU;
	static volatile int8_t x152 = -1;
	int32_t t37 = -204522885;

	t37 = ((x149<(x150&x151))*x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 3;
	static int8_t x155 = -1;
	volatile int32_t t38 = -795166704;

	t38 = ((x153<(x154&x155))*x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 14377U;
	int64_t x160 = -1LL;

	t39 = ((x157<(x158&x159))*x160);

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x162 = -1;
	int32_t x163 = -463425481;
	volatile int32_t t40 = 930718;

	t40 = ((x161<(x162&x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = 5;
	volatile int8_t x168 = INT8_MIN;

	t41 = ((x165<(x166&x167))*x168);

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = INT32_MIN;
	volatile uint64_t x170 = UINT64_MAX;
	int32_t x172 = INT32_MAX;
	int32_t t42 = 3;

	t42 = ((x169<(x170&x171))*x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int32_t x174 = -1;
	static int32_t x176 = 10920591;
	int32_t t43 = 105;

	t43 = ((x173<(x174&x175))*x176);

	if (t43 != 10920591) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x177 = 2665381LLU;
	int32_t x178 = -30;
	int64_t x180 = 15493717146928LL;
	volatile int64_t t44 = -1LL;

	t44 = ((x177<(x178&x179))*x180);

	if (t44 != 15493717146928LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	volatile int64_t x182 = 14LL;
	int8_t x184 = INT8_MIN;

	t45 = ((x181<(x182&x183))*x184);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	static int16_t x187 = 7;
	static int8_t x188 = -1;
	volatile int32_t t46 = -1392;

	t46 = ((x185<(x186&x187))*x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x190 = 5U;
	int32_t x191 = INT32_MIN;
	int32_t x192 = -1;
	volatile int32_t t47 = -6026;

	t47 = ((x189<(x190&x191))*x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 29U;
	int32_t x194 = -1;
	int32_t x195 = 505243;
	int64_t x196 = 109472588266LL;
	int64_t t48 = 6725769LL;

	t48 = ((x193<(x194&x195))*x196);

	if (t48 != 109472588266LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = 113U;
	int8_t x198 = -3;
	static uint32_t x199 = 1035933U;
	int32_t x200 = -8508644;

	t49 = ((x197<(x198&x199))*x200);

	if (t49 != -8508644) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x202 = UINT8_MAX;
	int8_t x203 = INT8_MIN;
	uint16_t x204 = 52U;
	static int32_t t50 = 6469721;

	t50 = ((x201<(x202&x203))*x204);

	if (t50 != 52) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -196;
	uint64_t x207 = UINT64_MAX;

	t51 = ((x205<(x206&x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x209 = 95U;
	int64_t x211 = 210LL;
	int16_t x212 = 55;
	int32_t t52 = -508099037;

	t52 = ((x209<(x210&x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	static int16_t x214 = -755;
	static int16_t x215 = -6000;
	int8_t x216 = INT8_MAX;
	int32_t t53 = 477;

	t53 = ((x213<(x214&x215))*x216);

	if (t53 != 127) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MAX;
	static volatile int64_t x219 = -213465163LL;
	static int8_t x220 = INT8_MAX;

	t54 = ((x217<(x218&x219))*x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = -1;
	volatile int64_t x222 = -1LL;
	uint64_t x223 = 36LLU;
	volatile int8_t x224 = INT8_MIN;
	volatile int32_t t55 = -195;

	t55 = ((x221<(x222&x223))*x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	volatile uint8_t x226 = 14U;
	int32_t x227 = -1;
	static int32_t t56 = 1;

	t56 = ((x225<(x226&x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x229 = 2U;
	volatile uint32_t x232 = 9208062U;
	uint32_t t57 = 103U;

	t57 = ((x229<(x230&x231))*x232);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	static int32_t x234 = -23738;
	int64_t x235 = INT64_MIN;
	static volatile int32_t t58 = -24379;

	t58 = ((x233<(x234&x235))*x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = 1LL;
	uint32_t x239 = 413U;
	volatile int64_t x240 = INT64_MAX;
	int64_t t59 = INT64_MAX;

	t59 = ((x237<(x238&x239))*x240);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x242 = -5;
	int16_t x243 = 5;
	uint64_t t60 = 188649872916995LLU;

	t60 = ((x241<(x242&x243))*x244);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	volatile int16_t x246 = -54;
	int8_t x247 = INT8_MIN;
	uint8_t x248 = 3U;
	volatile int32_t t61 = -7;

	t61 = ((x245<(x246&x247))*x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = 773;
	int64_t x251 = INT64_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = -4146;

	t62 = ((x249<(x250&x251))*x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x253 = 4U;
	uint16_t x255 = 8342U;
	static uint16_t x256 = UINT16_MAX;
	volatile int32_t t63 = -1;

	t63 = ((x253<(x254&x255))*x256);

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int16_t x259 = -1;
	static volatile int16_t x260 = -1;
	volatile int32_t t64 = 0;

	t64 = ((x257<(x258&x259))*x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 5863783612473273877LLU;
	int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MIN;

	t65 = ((x261<(x262&x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = 35383LLU;
	volatile int8_t x267 = INT8_MIN;
	uint32_t x268 = 139138758U;
	uint32_t t66 = 280184U;

	t66 = ((x265<(x266&x267))*x268);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 34374U;
	uint8_t x270 = UINT8_MAX;
	int32_t t67 = -187793673;

	t67 = ((x269<(x270&x271))*x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 37LLU;
	static uint32_t x274 = 747557418U;
	uint64_t x275 = UINT64_MAX;
	uint64_t x276 = 150339745LLU;
	volatile uint64_t t68 = 157595561LLU;

	t68 = ((x273<(x274&x275))*x276);

	if (t68 != 150339745LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 2U;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 7U;
	static int16_t x280 = 25;
	static int32_t t69 = -36;

	t69 = ((x277<(x278&x279))*x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	static uint8_t x282 = 5U;
	uint16_t x283 = 23422U;
	volatile int8_t x284 = -1;
	int32_t t70 = -6421;

	t70 = ((x281<(x282&x283))*x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = 97U;

	t71 = ((x285<(x286&x287))*x288);

	if (t71 != 586044579LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 35;
	int32_t x290 = 1;
	volatile int16_t x291 = INT16_MIN;
	static volatile uint64_t x292 = 8381LLU;
	volatile uint64_t t72 = 21526167855052LLU;

	t72 = ((x289<(x290&x291))*x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	int8_t x294 = -6;
	int64_t x296 = -779790443LL;
	volatile int64_t t73 = 1123893885808367LL;

	t73 = ((x293<(x294&x295))*x296);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 302;
	uint8_t x298 = 5U;
	static int64_t x299 = -4329217360LL;
	static int64_t t74 = -3LL;

	t74 = ((x297<(x298&x299))*x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 2;
	volatile int32_t x302 = INT32_MIN;

	t75 = ((x301<(x302&x303))*x304);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 4U;
	int32_t x306 = -304;
	static uint64_t x307 = UINT64_MAX;
	static uint8_t x308 = UINT8_MAX;
	int32_t t76 = -966153482;

	t76 = ((x305<(x306&x307))*x308);

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 15;
	int8_t x310 = INT8_MIN;
	volatile uint8_t x311 = 17U;
	uint64_t x312 = UINT64_MAX;

	t77 = ((x309<(x310&x311))*x312);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	volatile uint64_t x316 = 284284193756814243LLU;
	uint64_t t78 = 569160891078LLU;

	t78 = ((x313<(x314&x315))*x316);

	if (t78 != 284284193756814243LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint32_t x317 = UINT32_MAX;
	int16_t x318 = -1182;
	static int8_t x319 = 2;
	uint16_t x320 = 7U;

	t79 = ((x317<(x318&x319))*x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x321 = UINT8_MAX;
	int8_t x322 = -5;
	volatile uint8_t x323 = UINT8_MAX;
	uint64_t x324 = 2488478798LLU;
	volatile uint64_t t80 = 414765811710040669LLU;

	t80 = ((x321<(x322&x323))*x324);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = 58;
	volatile int8_t x326 = -24;
	int32_t x327 = INT32_MIN;
	volatile uint64_t x328 = 406561702776421LLU;
	static uint64_t t81 = 351339297LLU;

	t81 = ((x325<(x326&x327))*x328);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	int16_t x330 = -1;
	static int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -1735540;

	t82 = ((x329<(x330&x331))*x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x334 = 58065386563LL;
	int32_t x335 = INT32_MAX;
	volatile int8_t x336 = -7;
	int32_t t83 = -10820217;

	t83 = ((x333<(x334&x335))*x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 481;
	int16_t x338 = INT16_MIN;
	volatile int32_t x339 = INT32_MAX;
	static uint64_t x340 = 25LLU;
	volatile uint64_t t84 = 2LLU;

	t84 = ((x337<(x338&x339))*x340);

	if (t84 != 25LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	static volatile int16_t x343 = INT16_MIN;
	uint64_t x344 = 6177261936056LLU;
	uint64_t t85 = 32926LLU;

	t85 = ((x341<(x342&x343))*x344);

	if (t85 != 6177261936056LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	int8_t x346 = -1;
	volatile int32_t x347 = -1;
	uint64_t x348 = 5257934452241LLU;
	uint64_t t86 = 752LLU;

	t86 = ((x345<(x346&x347))*x348);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x349 = -1;
	int32_t x350 = -1;
	uint32_t x351 = UINT32_MAX;
	volatile uint32_t t87 = 36480312U;

	t87 = ((x349<(x350&x351))*x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	static volatile uint32_t x354 = 3446808U;
	static volatile int32_t x356 = -890667;

	t88 = ((x353<(x354&x355))*x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	uint32_t x358 = UINT32_MAX;
	static uint64_t x359 = 862357271603834LLU;
	uint8_t x360 = UINT8_MAX;
	static volatile int32_t t89 = -179353269;

	t89 = ((x357<(x358&x359))*x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 1083U;
	int8_t x362 = 1;
	volatile int32_t t90 = 92916155;

	t90 = ((x361<(x362&x363))*x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	int32_t x366 = INT32_MIN;
	uint8_t x367 = 1U;
	uint32_t x368 = 6658131U;
	uint32_t t91 = 0U;

	t91 = ((x365<(x366&x367))*x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = 1;
	int16_t x372 = INT16_MAX;
	volatile int32_t t92 = 12;

	t92 = ((x369<(x370&x371))*x372);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x373 = 1082305LLU;
	static int64_t x376 = -1LL;
	static int64_t t93 = 58646983183642217LL;

	t93 = ((x373<(x374&x375))*x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 27U;
	int32_t x379 = 4438053;
	int32_t t94 = 352;

	t94 = ((x377<(x378&x379))*x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -60LL;
	int32_t x382 = INT32_MAX;
	uint64_t x383 = 3796434LLU;
	uint32_t x384 = 47486U;
	static volatile uint32_t t95 = 9813099U;

	t95 = ((x381<(x382&x383))*x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = INT16_MAX;
	int64_t x386 = INT64_MIN;
	volatile int64_t x388 = -1248261238902846660LL;
	static int64_t t96 = 4LL;

	t96 = ((x385<(x386&x387))*x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -2577568001LL;
	uint8_t x390 = 1U;
	uint16_t x391 = 29U;
	uint16_t x392 = 4U;
	volatile int32_t t97 = -12180;

	t97 = ((x389<(x390&x391))*x392);

	if (t97 != 4) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 518600187U;
	volatile uint64_t x394 = UINT64_MAX;
	int16_t x395 = INT16_MIN;
	volatile uint16_t x396 = UINT16_MAX;
	volatile int32_t t98 = -638;

	t98 = ((x393<(x394&x395))*x396);

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x399 = INT16_MAX;
	int32_t x400 = 256919;
	int32_t t99 = -1;

	t99 = ((x397<(x398&x399))*x400);

	if (t99 != 256919) { NG(); } else { ; }
	
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

