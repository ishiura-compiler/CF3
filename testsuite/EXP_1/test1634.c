#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 27;
int32_t x14 = -1158758;
static int64_t x15 = INT64_MIN;
uint8_t x16 = 7U;
int32_t t3 = 463057960;
static int8_t x20 = -14;
uint8_t x23 = UINT8_MAX;
static int64_t x25 = INT64_MIN;
int8_t x26 = INT8_MIN;
static int16_t x27 = -1;
static int16_t x32 = 13277;
int32_t t7 = -957;
int64_t x36 = INT64_MIN;
volatile int32_t x38 = INT32_MIN;
uint8_t x42 = UINT8_MAX;
int32_t x47 = INT32_MIN;
int8_t x50 = 4;
int8_t x51 = INT8_MAX;
int32_t x56 = INT32_MAX;
static int32_t t20 = -4354989;
int16_t x86 = -3;
int8_t x90 = 1;
volatile uint8_t x93 = 18U;
uint16_t x94 = 22850U;
volatile int32_t x98 = -1;
uint8_t x99 = UINT8_MAX;
int64_t x107 = 13441438LL;
static volatile int32_t t29 = 4109326;
uint8_t x121 = 7U;
volatile int16_t x123 = INT16_MAX;
static uint32_t x124 = UINT32_MAX;
int32_t t30 = -120864;
int8_t x129 = INT8_MIN;
uint16_t x132 = 6U;
int32_t t33 = 4005365;
static int8_t x145 = INT8_MIN;
volatile uint32_t x150 = 616936U;
volatile int32_t t37 = 31166;
volatile int16_t x156 = INT16_MIN;
volatile int32_t t38 = 44043;
static uint8_t x158 = 3U;
volatile uint32_t x159 = UINT32_MAX;
int16_t x170 = 186;
int64_t x171 = INT64_MIN;
int32_t x176 = -1;
int32_t t45 = -57;
volatile uint32_t x191 = 32156U;
volatile int32_t t47 = -156400950;
uint8_t x194 = UINT8_MAX;
int16_t x201 = INT16_MAX;
uint32_t x204 = 411471708U;
int16_t x207 = -3;
int8_t x208 = INT8_MAX;
int8_t x213 = 12;
static volatile int32_t t53 = -98131326;
static int32_t t54 = 1238341;
int32_t t55 = -10;
static int64_t x225 = -1190523LL;
int16_t x229 = 2;
uint32_t x230 = UINT32_MAX;
int32_t t58 = 1;
static uint8_t x239 = 0U;
int32_t t59 = -6;
uint16_t x243 = 0U;
static volatile int32_t t61 = -137380;
int32_t x258 = INT32_MIN;
int64_t x264 = INT64_MAX;
volatile uint32_t x270 = 100575U;
uint64_t x273 = 35670991375702LLU;
volatile int32_t x274 = 22104581;
static uint32_t x275 = 40910U;
static int32_t t69 = -30326628;
int8_t x282 = -7;
int8_t x286 = INT8_MIN;
static uint8_t x289 = 0U;
int16_t x290 = INT16_MAX;
uint8_t x294 = UINT8_MAX;
int64_t x295 = 29LL;
static uint8_t x297 = UINT8_MAX;
static int8_t x300 = 12;
uint8_t x303 = 11U;
int32_t x305 = -1;
volatile int32_t t78 = 3;
int32_t t79 = -7617;
uint32_t x324 = UINT32_MAX;
int32_t x332 = INT32_MIN;
int8_t x334 = -1;
volatile int32_t t85 = -67743776;
static int32_t x349 = -124;
int64_t x350 = 77821872861707087LL;
static int8_t x353 = INT8_MAX;
int32_t x357 = -394;
volatile int32_t t89 = 87;
static int8_t x362 = -1;
volatile int32_t t90 = 3457;
int16_t x368 = INT16_MIN;
static uint16_t x371 = 1807U;
volatile uint8_t x373 = UINT8_MAX;
static int64_t x374 = 1LL;
volatile int32_t t93 = 86;
uint32_t x393 = UINT32_MAX;
static uint64_t x399 = UINT64_MAX;


void f0(void) {
	uint16_t x1 = 9U;
	int16_t x2 = 3963;
	volatile int16_t x3 = 14;
	static int16_t x4 = -208;
	static int32_t t0 = -247079;

	t0 = (((x1<=x2)<x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 2;
	int32_t x7 = -82847;
	static int16_t x8 = 53;
	volatile int32_t t1 = 241505922;

	t1 = (((x5<=x6)<x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	int8_t x10 = -22;
	int8_t x11 = 0;
	int16_t x12 = -1;
	volatile int32_t t2 = 11121400;

	t2 = (((x9<=x10)<x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;

	t3 = (((x13<=x14)<x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 848;
	volatile int8_t x18 = INT8_MIN;
	static volatile int8_t x19 = INT8_MIN;
	int32_t t4 = 3345;

	t4 = (((x17<=x18)<x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -2575894713248347647LL;
	int8_t x22 = INT8_MIN;
	int32_t x24 = -1;
	volatile int32_t t5 = -8542;

	t5 = (((x21<=x22)<x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x28 = 4U;
	int32_t t6 = -224829;

	t6 = (((x25<=x26)<x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 36U;
	int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MAX;

	t7 = (((x29<=x30)<x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	volatile uint16_t x34 = 418U;
	uint64_t x35 = UINT64_MAX;
	volatile int32_t t8 = 373;

	t8 = (((x33<=x34)<x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	int8_t x39 = INT8_MIN;
	uint8_t x40 = 5U;
	static int32_t t9 = 0;

	t9 = (((x37<=x38)<x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	static int32_t x43 = 42;
	uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = -1;

	t10 = (((x41<=x42)<x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	static volatile uint16_t x46 = 11551U;
	uint64_t x48 = UINT64_MAX;
	volatile int32_t t11 = 31;

	t11 = (((x45<=x46)<x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -4;
	int8_t x52 = INT8_MIN;
	static volatile int32_t t12 = 2646;

	t12 = (((x49<=x50)<x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 1749;
	int64_t x54 = -782307247LL;
	volatile int32_t x55 = INT32_MAX;
	int32_t t13 = -68411;

	t13 = (((x53<=x54)<x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -70;
	uint32_t x58 = UINT32_MAX;
	volatile uint8_t x59 = 7U;
	volatile uint32_t x60 = 1167565730U;
	int32_t t14 = 21675;

	t14 = (((x57<=x58)<x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	uint16_t x62 = UINT16_MAX;
	static int8_t x63 = 2;
	uint16_t x64 = 5715U;
	int32_t t15 = -3020639;

	t15 = (((x61<=x62)<x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x65 = 2U;
	int8_t x66 = INT8_MIN;
	volatile int64_t x67 = -2070232428942LL;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t16 = -1;

	t16 = (((x65<=x66)<x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	volatile uint16_t x70 = UINT16_MAX;
	static int32_t x71 = INT32_MIN;
	int64_t x72 = -4301145237273LL;
	static volatile int32_t t17 = -11732;

	t17 = (((x69<=x70)<x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	int16_t x74 = -321;
	int64_t x75 = -1LL;
	uint8_t x76 = 56U;
	volatile int32_t t18 = 0;

	t18 = (((x73<=x74)<x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 172289U;
	uint32_t x78 = 1725U;
	int64_t x79 = INT64_MIN;
	int32_t x80 = 55252879;
	volatile int32_t t19 = 207;

	t19 = (((x77<=x78)<x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x81 = -22;
	int32_t x82 = -787632;
	int8_t x83 = -1;
	int32_t x84 = INT32_MIN;

	t20 = (((x81<=x82)<x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static int16_t x87 = INT16_MAX;
	int8_t x88 = -1;
	int32_t t21 = 5987973;

	t21 = (((x85<=x86)<x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int8_t x91 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 59921290;

	t22 = (((x89<=x90)<x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x95 = INT32_MIN;
	static volatile int16_t x96 = -1;
	static int32_t t23 = 671812858;

	t23 = (((x93<=x94)<x95)<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	int32_t x100 = INT32_MAX;
	int32_t t24 = -47272;

	t24 = (((x97<=x98)<x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 39U;
	uint16_t x102 = 3518U;
	volatile int32_t x103 = INT32_MAX;
	static uint64_t x104 = 761465820346469923LLU;
	int32_t t25 = 15229873;

	t25 = (((x101<=x102)<x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 7U;
	int8_t x106 = INT8_MIN;
	static uint32_t x108 = 92675U;
	static int32_t t26 = -1;

	t26 = (((x105<=x106)<x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int16_t x110 = 1987;
	int64_t x111 = INT64_MIN;
	int64_t x112 = -1LL;
	int32_t t27 = -237454;

	t27 = (((x109<=x110)<x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = -1;
	int8_t x115 = 21;
	int32_t x116 = -3;
	static volatile int32_t t28 = -57;

	t28 = (((x113<=x114)<x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	static int32_t x118 = -1;
	static volatile uint64_t x119 = 11LLU;
	int8_t x120 = INT8_MIN;

	t29 = (((x117<=x118)<x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = -1LL;

	t30 = (((x121<=x122)<x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 10U;
	uint32_t x126 = UINT32_MAX;
	static int64_t x127 = INT64_MIN;
	volatile int64_t x128 = -1LL;
	int32_t t31 = -3;

	t31 = (((x125<=x126)<x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = UINT32_MAX;
	static int16_t x131 = INT16_MIN;
	int32_t t32 = -535;

	t32 = (((x129<=x130)<x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MAX;
	uint64_t x134 = 11022327612331611LLU;
	int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MAX;

	t33 = (((x133<=x134)<x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -1;
	int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MIN;
	int8_t x140 = INT8_MIN;
	volatile int32_t t34 = -6227681;

	t34 = (((x137<=x138)<x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int32_t x141 = 166166695;
	int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	static int16_t x144 = -1;
	int32_t t35 = 865984712;

	t35 = (((x141<=x142)<x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x146 = 1U;
	int32_t x147 = INT32_MIN;
	uint16_t x148 = UINT16_MAX;
	int32_t t36 = -2634;

	t36 = (((x145<=x146)<x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	uint8_t x151 = UINT8_MAX;
	uint8_t x152 = UINT8_MAX;

	t37 = (((x149<=x150)<x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int8_t x154 = INT8_MAX;
	uint32_t x155 = 52116U;

	t38 = (((x153<=x154)<x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = 10;
	int32_t x160 = INT32_MAX;
	int32_t t39 = 107;

	t39 = (((x157<=x158)<x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 28U;
	int8_t x162 = INT8_MAX;
	int64_t x163 = INT64_MIN;
	int16_t x164 = INT16_MAX;
	int32_t t40 = -102461668;

	t40 = (((x161<=x162)<x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 123188;
	uint16_t x166 = 213U;
	uint16_t x167 = 0U;
	int64_t x168 = INT64_MAX;
	int32_t t41 = -146116;

	t41 = (((x165<=x166)<x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 34611544680862874LL;
	int64_t x172 = -1LL;
	volatile int32_t t42 = -6026076;

	t42 = (((x169<=x170)<x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int64_t x174 = 490279543401752306LL;
	int64_t x175 = 462371281998883LL;
	static volatile int32_t t43 = -515550;

	t43 = (((x173<=x174)<x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MIN;
	int16_t x178 = 573;
	int16_t x179 = INT16_MIN;
	int16_t x180 = 42;
	int32_t t44 = -1920098;

	t44 = (((x177<=x178)<x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 4U;
	int32_t x182 = -1;
	static uint64_t x183 = 1480835984414LLU;
	uint8_t x184 = 10U;

	t45 = (((x181<=x182)<x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x185 = 2020077981U;
	uint32_t x186 = 6104727U;
	int8_t x187 = INT8_MAX;
	int16_t x188 = INT16_MAX;
	int32_t t46 = 0;

	t46 = (((x185<=x186)<x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 1255U;
	int8_t x190 = 0;
	static uint64_t x192 = 10LLU;

	t47 = (((x189<=x190)<x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int32_t x195 = -1;
	int32_t x196 = INT32_MAX;
	static volatile int32_t t48 = 20626386;

	t48 = (((x193<=x194)<x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 11829U;
	uint32_t x198 = 314962U;
	static int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MIN;
	int32_t t49 = -82555524;

	t49 = (((x197<=x198)<x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = 8219668;
	volatile int64_t x203 = INT64_MIN;
	int32_t t50 = 1553102;

	t50 = (((x201<=x202)<x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 5743LLU;
	static uint16_t x206 = UINT16_MAX;
	int32_t t51 = 17615013;

	t51 = (((x205<=x206)<x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MIN;
	uint16_t x212 = 0U;
	static int32_t t52 = -67637;

	t52 = (((x209<=x210)<x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x214 = 0U;
	static uint8_t x215 = 7U;
	static uint16_t x216 = UINT16_MAX;

	t53 = (((x213<=x214)<x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 1;
	static uint16_t x218 = 20U;
	int64_t x219 = INT64_MIN;
	int8_t x220 = 0;

	t54 = (((x217<=x218)<x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 810814;
	int16_t x222 = 1;
	volatile uint16_t x223 = 2209U;
	int32_t x224 = INT32_MAX;

	t55 = (((x221<=x222)<x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x226 = UINT8_MAX;
	static volatile int64_t x227 = -76908877LL;
	uint64_t x228 = UINT64_MAX;
	int32_t t56 = 1;

	t56 = (((x225<=x226)<x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x231 = INT16_MAX;
	static int32_t x232 = INT32_MAX;
	int32_t t57 = -122064352;

	t57 = (((x229<=x230)<x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 0U;
	int64_t x234 = -35584936575386058LL;
	volatile uint32_t x235 = 1908098U;
	int16_t x236 = INT16_MAX;

	t58 = (((x233<=x234)<x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	static int16_t x238 = INT16_MIN;
	uint8_t x240 = 14U;

	t59 = (((x237<=x238)<x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	int64_t x244 = INT64_MIN;
	volatile int32_t t60 = 334;

	t60 = (((x241<=x242)<x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = -1LL;
	int32_t x246 = INT32_MIN;
	static int16_t x247 = INT16_MAX;
	int32_t x248 = INT32_MIN;

	t61 = (((x245<=x246)<x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	static int16_t x250 = INT16_MIN;
	volatile int8_t x251 = -1;
	int32_t x252 = -67198;
	volatile int32_t t62 = 36;

	t62 = (((x249<=x250)<x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	uint64_t x254 = 370056221937440LLU;
	int8_t x255 = -1;
	volatile int64_t x256 = INT64_MIN;
	int32_t t63 = 18;

	t63 = (((x253<=x254)<x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	volatile int8_t x259 = -5;
	static int32_t x260 = INT32_MAX;
	volatile int32_t t64 = -435510666;

	t64 = (((x257<=x258)<x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MAX;
	int32_t x262 = INT32_MIN;
	int64_t x263 = -1LL;
	static int32_t t65 = 2433168;

	t65 = (((x261<=x262)<x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MAX;
	int64_t x266 = INT64_MIN;
	int64_t x267 = -1LL;
	int8_t x268 = INT8_MIN;
	int32_t t66 = 187491026;

	t66 = (((x265<=x266)<x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	static int16_t x271 = INT16_MIN;
	volatile int32_t x272 = INT32_MIN;
	int32_t t67 = 126542637;

	t67 = (((x269<=x270)<x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x276 = INT64_MAX;
	int32_t t68 = 7090080;

	t68 = (((x273<=x274)<x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	int16_t x278 = INT16_MAX;
	int32_t x279 = INT32_MIN;
	uint16_t x280 = 486U;

	t69 = (((x277<=x278)<x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	static int64_t x283 = -1LL;
	static int32_t x284 = -1;
	volatile int32_t t70 = 1;

	t70 = (((x281<=x282)<x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = 1U;
	uint64_t x287 = 2LLU;
	uint8_t x288 = 47U;
	volatile int32_t t71 = -108845;

	t71 = (((x285<=x286)<x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x291 = -1LL;
	uint64_t x292 = 719031982LLU;
	int32_t t72 = 37734;

	t72 = (((x289<=x290)<x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	static volatile int64_t x296 = INT64_MIN;
	int32_t t73 = -5670423;

	t73 = (((x293<=x294)<x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x298 = INT8_MAX;
	volatile uint16_t x299 = 1347U;
	int32_t t74 = -92690;

	t74 = (((x297<=x298)<x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	static volatile int32_t x302 = INT32_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 147079;

	t75 = (((x301<=x302)<x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x306 = INT16_MIN;
	volatile int64_t x307 = -1LL;
	int64_t x308 = INT64_MIN;
	volatile int32_t t76 = 1;

	t76 = (((x305<=x306)<x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 13340436U;
	static uint8_t x310 = 18U;
	static volatile int16_t x311 = 355;
	static int8_t x312 = INT8_MIN;
	int32_t t77 = -1;

	t77 = (((x309<=x310)<x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	uint8_t x314 = UINT8_MAX;
	static int32_t x315 = INT32_MIN;
	int8_t x316 = -1;

	t78 = (((x313<=x314)<x315)<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = 0;
	static int16_t x318 = INT16_MIN;
	volatile uint32_t x319 = 438914890U;
	static int64_t x320 = INT64_MIN;

	t79 = (((x317<=x318)<x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -1LL;
	int64_t x322 = -1LL;
	int64_t x323 = INT64_MIN;
	int32_t t80 = 535;

	t80 = (((x321<=x322)<x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 0;
	uint64_t x326 = 6374557890LLU;
	static uint8_t x327 = 1U;
	uint64_t x328 = UINT64_MAX;
	int32_t t81 = 33301;

	t81 = (((x325<=x326)<x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x330 = 130487287838LLU;
	uint16_t x331 = 3937U;
	static volatile int32_t t82 = -32967675;

	t82 = (((x329<=x330)<x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 122U;
	static uint8_t x335 = 0U;
	int16_t x336 = -12872;
	volatile int32_t t83 = -3780947;

	t83 = (((x333<=x334)<x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = -15925;
	static int64_t x338 = INT64_MAX;
	int32_t x339 = -1;
	uint8_t x340 = 3U;
	int32_t t84 = -22054;

	t84 = (((x337<=x338)<x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	volatile int8_t x342 = INT8_MIN;
	static int16_t x343 = 1;
	int64_t x344 = -1226009131925259211LL;

	t85 = (((x341<=x342)<x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MIN;
	volatile int64_t x346 = -12825203362LL;
	int32_t x347 = 27;
	volatile uint16_t x348 = 17U;
	static int32_t t86 = -28894985;

	t86 = (((x345<=x346)<x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = INT32_MAX;
	static int32_t x352 = 737960147;
	volatile int32_t t87 = -20746;

	t87 = (((x349<=x350)<x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 387U;
	volatile uint64_t x355 = UINT64_MAX;
	uint16_t x356 = 25U;
	volatile int32_t t88 = 125;

	t88 = (((x353<=x354)<x355)<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x358 = -1;
	uint16_t x359 = 108U;
	int64_t x360 = INT64_MAX;

	t89 = (((x357<=x358)<x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x361 = 293292481U;
	int8_t x363 = INT8_MAX;
	static int32_t x364 = INT32_MAX;

	t90 = (((x361<=x362)<x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -26338394;
	static int64_t x366 = -1LL;
	int64_t x367 = INT64_MAX;
	int32_t t91 = -9123;

	t91 = (((x365<=x366)<x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = 110823191274LL;
	int32_t x370 = -1;
	int32_t x372 = 7;
	volatile int32_t t92 = -1;

	t92 = (((x369<=x370)<x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x375 = UINT32_MAX;
	static int8_t x376 = INT8_MIN;

	t93 = (((x373<=x374)<x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -2968415763LL;
	int64_t x378 = 79528603LL;
	int16_t x379 = INT16_MAX;
	int32_t x380 = -1;
	int32_t t94 = -252;

	t94 = (((x377<=x378)<x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 1U;
	int16_t x382 = INT16_MAX;
	uint16_t x383 = UINT16_MAX;
	int32_t x384 = INT32_MIN;
	volatile int32_t t95 = 360928888;

	t95 = (((x381<=x382)<x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 19585693192049LLU;
	int8_t x386 = INT8_MIN;
	uint8_t x387 = 125U;
	int64_t x388 = -2184758999835263570LL;
	int32_t t96 = -1;

	t96 = (((x385<=x386)<x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	volatile int64_t x391 = -4217051130126LL;
	uint16_t x392 = 0U;
	volatile int32_t t97 = -92;

	t97 = (((x389<=x390)<x391)<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	static int32_t x395 = INT32_MAX;
	volatile uint16_t x396 = UINT16_MAX;
	int32_t t98 = -191777;

	t98 = (((x393<=x394)<x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x397 = 4301168704264209109LLU;
	volatile int64_t x398 = -1LL;
	static uint64_t x400 = 12096LLU;
	int32_t t99 = 493579200;

	t99 = (((x397<=x398)<x399)<x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

