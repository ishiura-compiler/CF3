#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
int32_t x13 = INT32_MIN;
int32_t x14 = -69410;
volatile int64_t x17 = INT64_MAX;
int64_t x38 = INT64_MIN;
int16_t x50 = -1;
int16_t x56 = -1;
static int64_t x62 = INT64_MIN;
int8_t x63 = 1;
volatile int8_t x67 = INT8_MAX;
static int16_t x80 = INT16_MIN;
int32_t x81 = -795113019;
uint32_t x82 = 14291907U;
int8_t x91 = INT8_MIN;
volatile int16_t x92 = 307;
int32_t t17 = 222578679;
int32_t x103 = INT32_MAX;
int32_t t19 = -2536;
volatile int64_t x105 = -1LL;
uint64_t x108 = UINT64_MAX;
int16_t x110 = -145;
uint16_t x112 = 2U;
int8_t x114 = INT8_MAX;
int64_t x115 = INT64_MIN;
uint32_t x122 = UINT32_MAX;
int64_t x123 = -3213731261911LL;
volatile int32_t t24 = 2;
int32_t x125 = INT32_MIN;
int32_t t25 = -6604800;
int32_t t26 = 983631455;
volatile int64_t x134 = INT64_MAX;
int32_t t27 = -19777582;
int8_t x137 = -61;
volatile int32_t x143 = INT32_MAX;
volatile int8_t x156 = -15;
static volatile int32_t t31 = -353819844;
static int16_t x162 = -1;
static volatile uint8_t x167 = UINT8_MAX;
int64_t x177 = -4947357LL;
uint64_t x180 = 15259362618LLU;
volatile uint16_t x204 = 2636U;
static volatile int16_t x208 = INT16_MAX;
static volatile int32_t t39 = -9230349;
int64_t x214 = -1LL;
uint16_t x215 = UINT16_MAX;
uint64_t x217 = UINT64_MAX;
int8_t x227 = -1;
volatile int8_t x228 = INT8_MIN;
int32_t x230 = -1;
uint8_t x232 = 15U;
int32_t x252 = 118282;
volatile int32_t t48 = 484095;
volatile int8_t x262 = INT8_MAX;
static uint32_t x267 = 417U;
uint32_t x277 = 691U;
volatile int32_t t53 = -564;
volatile int32_t x282 = INT32_MIN;
int32_t x283 = INT32_MAX;
static int32_t t54 = 11085979;
static volatile uint8_t x293 = 39U;
volatile uint8_t x294 = 18U;
int8_t x301 = -7;
int8_t x305 = -1;
volatile int64_t x306 = 55610145054LL;
static uint16_t x323 = 4891U;
volatile int32_t t64 = 1;
int64_t x330 = INT64_MIN;
volatile int32_t x332 = 28070068;
volatile int32_t x348 = -129315;
int64_t x362 = INT64_MIN;
int8_t x364 = INT8_MAX;
int32_t t72 = 1;
static int8_t x369 = -1;
int16_t x383 = INT16_MAX;
static volatile int32_t t75 = 6474;
int8_t x389 = INT8_MAX;
int32_t t78 = 621;
volatile int8_t x398 = -3;
volatile int64_t x419 = INT64_MIN;
static volatile int32_t t83 = -3496556;
int32_t t84 = -1243105;
int64_t x439 = 404481878LL;
uint16_t x453 = 201U;
uint16_t x464 = UINT16_MAX;
static volatile int32_t t91 = 470598;
int8_t x470 = 1;
uint32_t x477 = UINT32_MAX;
int32_t t96 = -1540;
int64_t x497 = -25472249028169673LL;


void f0(void) {
	int64_t x1 = -1LL;
	int8_t x3 = INT8_MIN;
	int32_t x4 = 214;
	volatile int32_t t0 = -412546;

	t0 = (x1<=((x2+x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	volatile uint32_t x6 = 22500U;
	int8_t x7 = -1;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 724395;

	t1 = (x5<=((x6+x7)+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x15 = INT16_MIN;
	static int16_t x16 = INT16_MAX;
	static int32_t t2 = -368339303;

	t2 = (x13<=((x14+x15)+x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = 2204;
	int32_t x19 = -22;
	volatile int32_t x20 = INT32_MIN;
	static volatile int32_t t3 = 779002;

	t3 = (x17<=((x18+x19)+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -356;
	int64_t x22 = -239LL;
	static uint16_t x23 = 30352U;
	uint32_t x24 = 31393U;
	volatile int32_t t4 = 365;

	t4 = (x21<=((x22+x23)+x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int64_t x26 = INT64_MIN;
	uint16_t x27 = UINT16_MAX;
	int32_t x28 = -1;
	volatile int32_t t5 = 523983111;

	t5 = (x25<=((x26+x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	volatile uint32_t x30 = 2U;
	int16_t x31 = INT16_MAX;
	int64_t x32 = -1LL;
	int32_t t6 = 10247276;

	t6 = (x29<=((x30+x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = -12;
	volatile uint64_t x34 = UINT64_MAX;
	volatile int16_t x35 = -1;
	static int16_t x36 = -26;
	static volatile int32_t t7 = -68052665;

	t7 = (x33<=((x34+x35)+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -395;
	volatile int32_t x39 = 7588808;
	static int8_t x40 = INT8_MIN;
	int32_t t8 = -292;

	t8 = (x37<=((x38+x39)+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = -13;
	static int32_t x44 = -1;
	int32_t t9 = -1;

	t9 = (x41<=((x42+x43)+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x49 = INT16_MIN;
	int16_t x51 = 7;
	uint8_t x52 = 96U;
	volatile int32_t t10 = 1647;

	t10 = (x49<=((x50+x51)+x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	uint32_t x54 = 95001U;
	static volatile uint8_t x55 = 104U;
	int32_t t11 = -156696886;

	t11 = (x53<=((x54+x55)+x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = UINT8_MAX;
	uint16_t x64 = 13017U;
	static int32_t t12 = -308336309;

	t12 = (x61<=((x62+x63)+x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	int8_t x66 = 38;
	static volatile uint32_t x68 = UINT32_MAX;
	static volatile int32_t t13 = 3670;

	t13 = (x65<=((x66+x67)+x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = -3329;
	int64_t x71 = 4238810468LL;
	static uint32_t x72 = 10961435U;
	static int32_t t14 = 122002;

	t14 = (x69<=((x70+x71)+x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = 7U;
	static uint64_t x78 = 134760972988158LLU;
	uint32_t x79 = 225343U;
	int32_t t15 = -2088144;

	t15 = (x77<=((x78+x79)+x80));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x83 = -9;
	int16_t x84 = -1;
	int32_t t16 = -15;

	t16 = (x81<=((x82+x83)+x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = UINT64_MAX;
	volatile int32_t x90 = 12715089;

	t17 = (x89<=((x90+x91)+x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x97 = 20922405U;
	int8_t x98 = 1;
	int64_t x99 = -1LL;
	uint32_t x100 = UINT32_MAX;
	int32_t t18 = -1438370;

	t18 = (x97<=((x98+x99)+x100));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x101 = INT16_MAX;
	int16_t x102 = INT16_MIN;
	static int8_t x104 = INT8_MIN;

	t19 = (x101<=((x102+x103)+x104));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x106 = UINT8_MAX;
	volatile int16_t x107 = INT16_MIN;
	int32_t t20 = -219;

	t20 = (x105<=((x106+x107)+x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MIN;
	uint64_t x111 = 4470590314LLU;
	static int32_t t21 = 4273140;

	t21 = (x109<=((x110+x111)+x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = 1LL;
	static uint32_t x116 = UINT32_MAX;
	static volatile int32_t t22 = -350;

	t22 = (x113<=((x114+x115)+x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x117 = 28U;
	int32_t x118 = -171;
	static int16_t x119 = INT16_MIN;
	uint64_t x120 = 27442194LLU;
	int32_t t23 = -3;

	t23 = (x117<=((x118+x119)+x120));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x121 = 2U;
	volatile int8_t x124 = INT8_MIN;

	t24 = (x121<=((x122+x123)+x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x126 = INT8_MIN;
	static int16_t x127 = -2247;
	int16_t x128 = INT16_MAX;

	t25 = (x125<=((x126+x127)+x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = 2U;
	static int64_t x130 = -1LL;
	volatile uint16_t x131 = 4U;
	int64_t x132 = 32LL;

	t26 = (x129<=((x130+x131)+x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x133 = UINT64_MAX;
	uint64_t x135 = UINT64_MAX;
	volatile int32_t x136 = 0;

	t27 = (x133<=((x134+x135)+x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x138 = UINT16_MAX;
	uint8_t x139 = 13U;
	int64_t x140 = INT64_MIN;
	volatile int32_t t28 = 33030;

	t28 = (x137<=((x138+x139)+x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = -54;
	static volatile int32_t x142 = -1;
	static int64_t x144 = -213812LL;
	volatile int32_t t29 = 5528821;

	t29 = (x141<=((x142+x143)+x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = 54277068715598646LLU;
	uint8_t x150 = 1U;
	int16_t x151 = INT16_MIN;
	static int64_t x152 = -1LL;
	int32_t t30 = 93515;

	t30 = (x149<=((x150+x151)+x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x153 = 4716952;
	static int32_t x154 = 330;
	uint32_t x155 = 22576U;

	t31 = (x153<=((x154+x155)+x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = -1LL;
	uint16_t x163 = 17U;
	uint16_t x164 = 1U;
	volatile int32_t t32 = 44;

	t32 = (x161<=((x162+x163)+x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x165 = -542403788776343584LL;
	static int16_t x166 = -2;
	int32_t x168 = -5300717;
	static int32_t t33 = -5;

	t33 = (x165<=((x166+x167)+x168));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x178 = 44LLU;
	int64_t x179 = -9696223328610369LL;
	volatile int32_t t34 = 15918;

	t34 = (x177<=((x178+x179)+x180));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x181 = INT8_MAX;
	int64_t x182 = -616319LL;
	uint32_t x183 = 54590U;
	volatile uint32_t x184 = UINT32_MAX;
	int32_t t35 = -221;

	t35 = (x181<=((x182+x183)+x184));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x189 = INT64_MAX;
	static uint32_t x190 = UINT32_MAX;
	int64_t x191 = -181LL;
	int32_t x192 = INT32_MAX;
	int32_t t36 = -2;

	t36 = (x189<=((x190+x191)+x192));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = -18937642;
	static uint32_t x198 = 129129U;
	static int32_t x199 = 11;
	int8_t x200 = -1;
	int32_t t37 = 5;

	t37 = (x197<=((x198+x199)+x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = 21;
	int64_t x202 = -1LL;
	uint16_t x203 = 4020U;
	volatile int32_t t38 = 32001;

	t38 = (x201<=((x202+x203)+x204));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x205 = UINT64_MAX;
	volatile uint64_t x206 = 211LLU;
	int8_t x207 = -13;

	t39 = (x205<=((x206+x207)+x208));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x209 = INT16_MAX;
	int64_t x210 = -1LL;
	volatile int32_t x211 = INT32_MIN;
	static uint64_t x212 = 3594556LLU;
	int32_t t40 = 975717;

	t40 = (x209<=((x210+x211)+x212));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x213 = INT32_MIN;
	uint64_t x216 = 5059725880899867LLU;
	volatile int32_t t41 = -1;

	t41 = (x213<=((x214+x215)+x216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x218 = -12254;
	uint32_t x219 = UINT32_MAX;
	volatile uint8_t x220 = 1U;
	int32_t t42 = 69477450;

	t42 = (x217<=((x218+x219)+x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = INT8_MAX;
	static int32_t x222 = INT32_MIN;
	uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MAX;
	int32_t t43 = -31438909;

	t43 = (x221<=((x222+x223)+x224));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x225 = UINT8_MAX;
	uint16_t x226 = 106U;
	int32_t t44 = 4808928;

	t44 = (x225<=((x226+x227)+x228));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x229 = UINT64_MAX;
	static int8_t x231 = INT8_MIN;
	static volatile int32_t t45 = -7;

	t45 = (x229<=((x230+x231)+x232));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x241 = -1;
	static volatile int16_t x242 = INT16_MIN;
	volatile uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t46 = 126380;

	t46 = (x241<=((x242+x243)+x244));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x245 = INT8_MIN;
	static int32_t x246 = INT32_MIN;
	int8_t x247 = 1;
	uint8_t x248 = 3U;
	volatile int32_t t47 = -3667;

	t47 = (x245<=((x246+x247)+x248));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x249 = UINT8_MAX;
	static volatile int16_t x250 = 5;
	int64_t x251 = INT64_MIN;

	t48 = (x249<=((x250+x251)+x252));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x253 = 6;
	uint64_t x254 = 168511LLU;
	int8_t x255 = -1;
	int16_t x256 = -3;
	volatile int32_t t49 = -3506;

	t49 = (x253<=((x254+x255)+x256));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x257 = -39152900522LL;
	int16_t x258 = INT16_MAX;
	volatile int16_t x259 = INT16_MAX;
	volatile int32_t x260 = 102787;
	static int32_t t50 = -16091;

	t50 = (x257<=((x258+x259)+x260));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x263 = -1;
	static int16_t x264 = INT16_MIN;
	int32_t t51 = 324497220;

	t51 = (x261<=((x262+x263)+x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x265 = INT16_MIN;
	int32_t x266 = 278;
	int16_t x268 = -1;
	int32_t t52 = 127;

	t52 = (x265<=((x266+x267)+x268));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x278 = UINT64_MAX;
	int16_t x279 = INT16_MIN;
	int64_t x280 = -8584800327LL;

	t53 = (x277<=((x278+x279)+x280));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x281 = -44367917;
	int32_t x284 = 0;

	t54 = (x281<=((x282+x283)+x284));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x289 = 114330927U;
	static volatile int8_t x290 = INT8_MIN;
	uint32_t x291 = 3823883U;
	int64_t x292 = -4688LL;
	static int32_t t55 = -1775;

	t55 = (x289<=((x290+x291)+x292));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x295 = -1;
	uint16_t x296 = 1153U;
	volatile int32_t t56 = 55;

	t56 = (x293<=((x294+x295)+x296));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x297 = INT32_MIN;
	int16_t x298 = 242;
	static int16_t x299 = 1993;
	static uint64_t x300 = 1394843685439904425LLU;
	volatile int32_t t57 = 362099588;

	t57 = (x297<=((x298+x299)+x300));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x302 = UINT8_MAX;
	int8_t x303 = -47;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t58 = 8307472;

	t58 = (x301<=((x302+x303)+x304));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x307 = INT16_MIN;
	uint32_t x308 = UINT32_MAX;
	int32_t t59 = 138694;

	t59 = (x305<=((x306+x307)+x308));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x309 = UINT64_MAX;
	int32_t x310 = INT32_MAX;
	int8_t x311 = INT8_MIN;
	uint32_t x312 = UINT32_MAX;
	static int32_t t60 = -272;

	t60 = (x309<=((x310+x311)+x312));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x313 = INT64_MAX;
	static int16_t x314 = -899;
	volatile int32_t x315 = -1;
	static int8_t x316 = 1;
	volatile int32_t t61 = -1342044;

	t61 = (x313<=((x314+x315)+x316));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x317 = INT32_MAX;
	int32_t x318 = INT32_MAX;
	static int64_t x319 = -1212652905339516734LL;
	int32_t x320 = INT32_MIN;
	int32_t t62 = -47;

	t62 = (x317<=((x318+x319)+x320));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x321 = 48U;
	uint64_t x322 = 409LLU;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t63 = 0;

	t63 = (x321<=((x322+x323)+x324));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x325 = -1;
	uint32_t x326 = 106932U;
	int32_t x327 = INT32_MIN;
	static int32_t x328 = INT32_MAX;

	t64 = (x325<=((x326+x327)+x328));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = -1;
	uint64_t x331 = UINT64_MAX;
	static int32_t t65 = -3707099;

	t65 = (x329<=((x330+x331)+x332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x337 = UINT16_MAX;
	int64_t x338 = -84632060163706937LL;
	static int8_t x339 = INT8_MIN;
	int8_t x340 = -35;
	int32_t t66 = 39156604;

	t66 = (x337<=((x338+x339)+x340));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x341 = -45;
	uint16_t x342 = UINT16_MAX;
	int16_t x343 = INT16_MAX;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t67 = 559262113;

	t67 = (x341<=((x342+x343)+x344));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = -1LL;
	static int64_t x346 = -1LL;
	int64_t x347 = -1LL;
	volatile int32_t t68 = 31536142;

	t68 = (x345<=((x346+x347)+x348));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x349 = -1;
	static int32_t x350 = INT32_MIN;
	uint16_t x351 = UINT16_MAX;
	volatile uint64_t x352 = UINT64_MAX;
	static int32_t t69 = -657;

	t69 = (x349<=((x350+x351)+x352));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x357 = -1LL;
	uint16_t x358 = 1U;
	static uint16_t x359 = 7373U;
	int32_t x360 = INT32_MIN;
	volatile int32_t t70 = -5;

	t70 = (x357<=((x358+x359)+x360));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x361 = UINT16_MAX;
	int32_t x363 = INT32_MAX;
	volatile int32_t t71 = -83;

	t71 = (x361<=((x362+x363)+x364));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x365 = 19259974LLU;
	volatile uint16_t x366 = 5996U;
	int8_t x367 = INT8_MIN;
	static int64_t x368 = 1038537992LL;

	t72 = (x365<=((x366+x367)+x368));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x370 = -46;
	volatile int16_t x371 = INT16_MIN;
	static uint8_t x372 = UINT8_MAX;
	int32_t t73 = 50929;

	t73 = (x369<=((x370+x371)+x372));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = -1;
	volatile uint32_t x374 = 768125U;
	uint32_t x375 = UINT32_MAX;
	volatile int8_t x376 = -1;
	int32_t t74 = -3911516;

	t74 = (x373<=((x374+x375)+x376));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x381 = INT64_MIN;
	int8_t x382 = INT8_MIN;
	int16_t x384 = INT16_MIN;

	t75 = (x381<=((x382+x383)+x384));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x385 = UINT16_MAX;
	volatile int8_t x386 = INT8_MIN;
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = INT16_MIN;
	volatile int32_t t76 = 48664;

	t76 = (x385<=((x386+x387)+x388));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x390 = -1;
	volatile uint32_t x391 = 11994U;
	int32_t x392 = -1;
	volatile int32_t t77 = 32;

	t77 = (x389<=((x390+x391)+x392));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = UINT32_MAX;
	volatile uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MIN;

	t78 = (x393<=((x394+x395)+x396));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = 6569LL;
	uint16_t x399 = 483U;
	int64_t x400 = INT64_MIN;
	volatile int32_t t79 = -1;

	t79 = (x397<=((x398+x399)+x400));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x401 = UINT64_MAX;
	int64_t x402 = INT64_MIN;
	volatile int8_t x403 = 21;
	int32_t x404 = 387856;
	int32_t t80 = 1;

	t80 = (x401<=((x402+x403)+x404));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x405 = -1LL;
	static volatile int32_t x406 = -815192;
	int16_t x407 = -21;
	volatile int8_t x408 = 62;
	volatile int32_t t81 = -14798048;

	t81 = (x405<=((x406+x407)+x408));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x417 = -1LL;
	uint64_t x418 = 45297249818876491LLU;
	volatile int64_t x420 = -50121102LL;
	volatile int32_t t82 = 11;

	t82 = (x417<=((x418+x419)+x420));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x425 = INT8_MAX;
	static uint8_t x426 = 13U;
	uint32_t x427 = 393U;
	uint32_t x428 = 495978U;

	t83 = (x425<=((x426+x427)+x428));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x429 = INT32_MIN;
	static volatile int32_t x430 = 402198;
	static int8_t x431 = 0;
	volatile int32_t x432 = 1379748;

	t84 = (x429<=((x430+x431)+x432));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x433 = -1;
	int8_t x434 = INT8_MIN;
	int32_t x435 = -1;
	static int32_t x436 = INT32_MAX;
	int32_t t85 = 1079;

	t85 = (x433<=((x434+x435)+x436));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x437 = -1;
	int32_t x438 = INT32_MIN;
	volatile int32_t x440 = -1;
	static int32_t t86 = -176;

	t86 = (x437<=((x438+x439)+x440));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x445 = 5;
	int8_t x446 = 14;
	volatile int8_t x447 = INT8_MAX;
	uint32_t x448 = UINT32_MAX;
	volatile int32_t t87 = 2004490;

	t87 = (x445<=((x446+x447)+x448));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x449 = 205452589043229LLU;
	static int16_t x450 = INT16_MIN;
	static int32_t x451 = INT32_MAX;
	int16_t x452 = INT16_MIN;
	static int32_t t88 = 2;

	t88 = (x449<=((x450+x451)+x452));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x454 = INT8_MIN;
	int64_t x455 = 683173410LL;
	int16_t x456 = -1;
	volatile int32_t t89 = 5;

	t89 = (x453<=((x454+x455)+x456));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x457 = INT32_MIN;
	static volatile int16_t x458 = INT16_MAX;
	int16_t x459 = INT16_MIN;
	volatile uint16_t x460 = 1U;
	volatile int32_t t90 = -1879;

	t90 = (x457<=((x458+x459)+x460));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x461 = INT32_MIN;
	static volatile int64_t x462 = -1LL;
	volatile uint8_t x463 = 20U;

	t91 = (x461<=((x462+x463)+x464));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x465 = -1;
	int16_t x466 = -1;
	int16_t x467 = 12630;
	int32_t x468 = INT32_MIN;
	static volatile int32_t t92 = -74150;

	t92 = (x465<=((x466+x467)+x468));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x469 = 1U;
	uint16_t x471 = 5U;
	int16_t x472 = -1;
	volatile int32_t t93 = -16087;

	t93 = (x469<=((x470+x471)+x472));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x473 = 3968LLU;
	uint16_t x474 = UINT16_MAX;
	static int8_t x475 = INT8_MIN;
	uint32_t x476 = UINT32_MAX;
	static volatile int32_t t94 = -3744035;

	t94 = (x473<=((x474+x475)+x476));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x478 = 475462814750LLU;
	volatile int8_t x479 = 1;
	int64_t x480 = INT64_MIN;
	static volatile int32_t t95 = -87975;

	t95 = (x477<=((x478+x479)+x480));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x481 = 0;
	static volatile int8_t x482 = INT8_MIN;
	uint64_t x483 = 478LLU;
	uint8_t x484 = UINT8_MAX;

	t96 = (x481<=((x482+x483)+x484));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x485 = INT64_MIN;
	uint64_t x486 = 106914050654585276LLU;
	uint32_t x487 = UINT32_MAX;
	volatile uint64_t x488 = UINT64_MAX;
	int32_t t97 = 0;

	t97 = (x485<=((x486+x487)+x488));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x489 = 20090;
	int8_t x490 = -1;
	int32_t x491 = -22976;
	uint16_t x492 = 3830U;
	int32_t t98 = 65813813;

	t98 = (x489<=((x490+x491)+x492));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x498 = -199;
	static uint16_t x499 = UINT16_MAX;
	uint64_t x500 = 1LLU;
	volatile int32_t t99 = -173808;

	t99 = (x497<=((x498+x499)+x500));

	if (t99 != 0) { NG(); } else { ; }
	
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

