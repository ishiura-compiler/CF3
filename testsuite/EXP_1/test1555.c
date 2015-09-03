#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = -1LL;
volatile int32_t t1 = 0;
static int32_t x11 = INT32_MIN;
static uint8_t x15 = UINT8_MAX;
uint64_t x19 = 11962256305545LLU;
static volatile int16_t x21 = INT16_MAX;
volatile int16_t x26 = 1391;
volatile int16_t x29 = INT16_MIN;
static int8_t x31 = INT8_MIN;
int64_t x32 = INT64_MAX;
static uint32_t x36 = 866082697U;
int32_t t9 = 85873111;
int16_t x42 = -1;
int16_t x43 = INT16_MAX;
int64_t x45 = -1LL;
int32_t x50 = -1;
int32_t x52 = -161745725;
volatile int32_t t12 = -1779;
static volatile int16_t x53 = INT16_MAX;
static int32_t x56 = 87375990;
uint32_t x58 = 30013449U;
static volatile int32_t x60 = INT32_MAX;
int32_t t14 = -989;
static uint8_t x67 = 126U;
static int32_t t16 = 111;
static uint64_t x69 = UINT64_MAX;
int32_t t17 = -26;
int32_t x87 = INT32_MIN;
volatile int32_t t21 = -409272528;
static volatile int32_t x96 = INT32_MIN;
int64_t x97 = 69LL;
int32_t x103 = INT32_MIN;
int32_t x104 = INT32_MIN;
int64_t x110 = -1LL;
uint32_t x113 = UINT32_MAX;
int32_t x114 = -1;
static int16_t x125 = INT16_MAX;
int8_t x131 = INT8_MIN;
static int64_t x134 = INT64_MIN;
int32_t t34 = -26779;
int8_t x142 = INT8_MAX;
int64_t x146 = INT64_MAX;
uint32_t x150 = 5281U;
uint64_t x151 = UINT64_MAX;
volatile uint8_t x155 = 2U;
volatile int32_t t38 = -43;
uint8_t x159 = UINT8_MAX;
int32_t t39 = 83;
volatile int32_t t42 = 20772392;
int64_t x173 = INT64_MIN;
int8_t x174 = 36;
static int16_t x183 = INT16_MIN;
int32_t x189 = 69332401;
uint64_t x190 = 324172312783667LLU;
uint64_t x197 = 45833629565LLU;
int16_t x203 = -5;
int32_t x205 = INT32_MAX;
static int64_t x208 = -750645LL;
static int64_t x209 = -339241LL;
int8_t x217 = -1;
uint16_t x218 = UINT16_MAX;
int8_t x222 = INT8_MAX;
int64_t x223 = INT64_MIN;
volatile int8_t x224 = -1;
volatile int32_t t55 = -334127;
static uint8_t x234 = 0U;
int32_t x235 = -1;
static int32_t x236 = INT32_MIN;
volatile int8_t x237 = INT8_MIN;
uint8_t x252 = UINT8_MAX;
uint64_t x265 = 222741266977LLU;
int64_t x267 = INT64_MIN;
int64_t x286 = -8LL;
volatile uint16_t x289 = 187U;
uint64_t x290 = UINT64_MAX;
volatile int8_t x292 = INT8_MIN;
static int32_t x296 = -1;
static int32_t x303 = -1;
int16_t x306 = -110;
int16_t x308 = -2927;
volatile uint32_t x311 = 2U;
int32_t t77 = -931554;
int16_t x317 = -3;
static int8_t x318 = 1;
volatile int32_t t79 = -64682140;
uint32_t x322 = 2422224U;
int64_t x324 = -1LL;
volatile uint16_t x328 = UINT16_MAX;
int32_t t81 = 116639961;
static uint16_t x334 = UINT16_MAX;
uint64_t x338 = 14LLU;
int32_t x341 = 20;
volatile uint16_t x344 = 14495U;
int16_t x346 = INT16_MIN;
static int8_t x348 = INT8_MIN;
int64_t x349 = 396266559076LL;
uint8_t x351 = 5U;
uint64_t x359 = UINT64_MAX;
int32_t t89 = 38917;
int32_t t91 = -247736;
int16_t x370 = -1285;
uint32_t x372 = 210305033U;
int32_t t92 = 17;
int64_t x382 = 105257620LL;
static uint32_t x391 = UINT32_MAX;
uint8_t x395 = UINT8_MAX;
static int8_t x398 = 0;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile int32_t x2 = -1;
	static volatile int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -57421583;

	t0 = (((x1<=x2)*x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	int64_t x7 = INT64_MIN;
	volatile uint64_t x8 = UINT64_MAX;

	t1 = (((x5<=x6)*x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	int8_t x10 = -1;
	uint16_t x12 = 759U;
	static volatile int32_t t2 = 15880;

	t2 = (((x9<=x10)*x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MAX;
	static uint16_t x16 = 244U;
	volatile int32_t t3 = -3705;

	t3 = (((x13<=x14)*x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 201;
	static int8_t x18 = -1;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -23;

	t4 = (((x17<=x18)*x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 1604218565U;
	uint16_t x23 = 812U;
	int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -5502662;

	t5 = (((x21<=x22)*x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int64_t x27 = -1LL;
	int32_t x28 = 184751;
	volatile int32_t t6 = 47910;

	t6 = (((x25<=x26)*x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	static int32_t t7 = -1;

	t7 = (((x29<=x30)*x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	uint8_t x34 = UINT8_MAX;
	volatile int16_t x35 = -1;
	volatile int32_t t8 = 1613106;

	t8 = (((x33<=x34)*x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 85U;
	static int64_t x38 = -12875341745673252LL;
	static uint16_t x39 = UINT16_MAX;
	uint16_t x40 = UINT16_MAX;

	t9 = (((x37<=x38)*x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = 16140137618729LL;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int32_t t10 = 2029;

	t10 = (((x41<=x42)*x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = UINT16_MAX;
	volatile int32_t x47 = INT32_MIN;
	static int16_t x48 = -598;
	volatile int32_t t11 = 6;

	t11 = (((x45<=x46)*x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	int32_t x51 = -8761311;

	t12 = (((x49<=x50)*x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 13689509204LLU;
	uint32_t x55 = UINT32_MAX;
	static int32_t t13 = -2414414;

	t13 = (((x53<=x54)*x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 118935335U;
	int64_t x59 = -7047054LL;

	t14 = (((x57<=x58)*x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -2;
	int64_t x62 = INT64_MIN;
	uint8_t x63 = 0U;
	static uint32_t x64 = 6822803U;
	int32_t t15 = 313034195;

	t15 = (((x61<=x62)*x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 648U;
	int16_t x66 = INT16_MIN;
	int64_t x68 = -276080121982493632LL;

	t16 = (((x65<=x66)*x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = 186U;
	volatile int8_t x71 = INT8_MAX;
	volatile int64_t x72 = INT64_MAX;

	t17 = (((x69<=x70)*x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 16016140U;
	int8_t x74 = INT8_MIN;
	volatile int64_t x75 = -1LL;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t18 = 245515;

	t18 = (((x73<=x74)*x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint64_t x78 = UINT64_MAX;
	uint8_t x79 = 62U;
	volatile int64_t x80 = INT64_MIN;
	static volatile int32_t t19 = -13507;

	t19 = (((x77<=x78)*x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = INT8_MIN;
	volatile int8_t x83 = INT8_MIN;
	volatile uint64_t x84 = 49534258893154209LLU;
	volatile int32_t t20 = 15;

	t20 = (((x81<=x82)*x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 4821887U;
	int8_t x86 = INT8_MIN;
	volatile int32_t x88 = INT32_MAX;

	t21 = (((x85<=x86)*x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x89 = -1;
	int8_t x90 = INT8_MAX;
	static volatile uint32_t x91 = 3696370U;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = 4;

	t22 = (((x89<=x90)*x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	uint64_t x95 = 13861407895315853LLU;
	int32_t t23 = 0;

	t23 = (((x93<=x94)*x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x98 = INT32_MAX;
	int8_t x99 = -1;
	int32_t x100 = 480;
	volatile int32_t t24 = -436;

	t24 = (((x97<=x98)*x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	static int8_t x102 = 0;
	int32_t t25 = 196;

	t25 = (((x101<=x102)*x103)==x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x105 = -1;
	int64_t x106 = -1LL;
	int16_t x107 = -1;
	int8_t x108 = INT8_MIN;
	static int32_t t26 = -1;

	t26 = (((x105<=x106)*x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 36U;
	volatile uint32_t x111 = UINT32_MAX;
	static int8_t x112 = INT8_MIN;
	int32_t t27 = 24;

	t27 = (((x109<=x110)*x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = -5;
	int32_t t28 = -1375776;

	t28 = (((x113<=x114)*x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MIN;
	volatile uint16_t x118 = 895U;
	static volatile int16_t x119 = INT16_MIN;
	uint64_t x120 = 6152661359663LLU;
	volatile int32_t t29 = 251;

	t29 = (((x117<=x118)*x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = 1695977951811152705LL;
	int8_t x122 = INT8_MIN;
	uint8_t x123 = UINT8_MAX;
	int64_t x124 = 12701358650334LL;
	volatile int32_t t30 = -180789;

	t30 = (((x121<=x122)*x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	int32_t x127 = 377212;
	int64_t x128 = -1LL;
	volatile int32_t t31 = -56;

	t31 = (((x125<=x126)*x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = 1;
	uint64_t x130 = 184091LLU;
	static volatile uint16_t x132 = UINT16_MAX;
	int32_t t32 = 453131162;

	t32 = (((x129<=x130)*x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MIN;
	static int8_t x135 = INT8_MIN;
	volatile int16_t x136 = -1;
	int32_t t33 = -1;

	t33 = (((x133<=x134)*x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	static int16_t x138 = INT16_MAX;
	static int64_t x139 = INT64_MAX;
	uint64_t x140 = 276022LLU;

	t34 = (((x137<=x138)*x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = UINT16_MAX;
	static uint64_t x143 = UINT64_MAX;
	uint32_t x144 = 10853996U;
	volatile int32_t t35 = 252566;

	t35 = (((x141<=x142)*x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x145 = INT64_MIN;
	uint32_t x147 = UINT32_MAX;
	int64_t x148 = INT64_MIN;
	volatile int32_t t36 = -23;

	t36 = (((x145<=x146)*x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -1LL;
	int16_t x152 = INT16_MIN;
	volatile int32_t t37 = 11897;

	t37 = (((x149<=x150)*x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	static uint8_t x154 = UINT8_MAX;
	int16_t x156 = -1;

	t38 = (((x153<=x154)*x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = UINT8_MAX;
	uint64_t x158 = UINT64_MAX;
	static volatile int16_t x160 = 11329;

	t39 = (((x157<=x158)*x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	static int64_t x162 = INT64_MAX;
	int8_t x163 = INT8_MIN;
	uint64_t x164 = 636558LLU;
	int32_t t40 = -233900622;

	t40 = (((x161<=x162)*x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x165 = UINT8_MAX;
	int16_t x166 = 4;
	int8_t x167 = 13;
	uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = -226618789;

	t41 = (((x165<=x166)*x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 94U;
	int16_t x170 = INT16_MIN;
	int64_t x171 = INT64_MIN;
	uint16_t x172 = UINT16_MAX;

	t42 = (((x169<=x170)*x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x175 = 6U;
	int64_t x176 = 61764LL;
	volatile int32_t t43 = -1760628;

	t43 = (((x173<=x174)*x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = 17;
	uint16_t x178 = 1907U;
	int8_t x179 = 3;
	int32_t x180 = -7;
	volatile int32_t t44 = 1958120;

	t44 = (((x177<=x178)*x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 3437LLU;
	int32_t x182 = INT32_MIN;
	int32_t x184 = INT32_MAX;
	volatile int32_t t45 = 1660449;

	t45 = (((x181<=x182)*x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	static volatile int32_t x186 = INT32_MAX;
	uint64_t x187 = UINT64_MAX;
	static int32_t x188 = INT32_MIN;
	int32_t t46 = -47942;

	t46 = (((x185<=x186)*x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x191 = UINT8_MAX;
	static int8_t x192 = 1;
	volatile int32_t t47 = 25;

	t47 = (((x189<=x190)*x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = 33;
	static uint8_t x194 = 5U;
	int8_t x195 = INT8_MIN;
	int64_t x196 = -33666061588583292LL;
	volatile int32_t t48 = -2854500;

	t48 = (((x193<=x194)*x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x198 = 170U;
	static uint16_t x199 = 18101U;
	int64_t x200 = -1897122810030679LL;
	static volatile int32_t t49 = 114070;

	t49 = (((x197<=x198)*x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	int32_t x202 = -1;
	int32_t x204 = INT32_MIN;
	static int32_t t50 = -474;

	t50 = (((x201<=x202)*x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	int16_t x207 = 3;
	int32_t t51 = 192416512;

	t51 = (((x205<=x206)*x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = -1;
	volatile int8_t x211 = INT8_MAX;
	static int8_t x212 = -1;
	volatile int32_t t52 = -4955119;

	t52 = (((x209<=x210)*x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 18417U;
	volatile int16_t x214 = INT16_MIN;
	static int32_t x215 = INT32_MIN;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t53 = -200056344;

	t53 = (((x213<=x214)*x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x219 = INT8_MIN;
	volatile int64_t x220 = -3639LL;
	static int32_t t54 = -47326418;

	t54 = (((x217<=x218)*x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;

	t55 = (((x221<=x222)*x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MAX;
	uint8_t x228 = 1U;
	static int32_t t56 = -1;

	t56 = (((x225<=x226)*x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 314U;
	uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 3830U;
	volatile uint64_t x232 = 93679092LLU;
	static volatile int32_t t57 = 469395867;

	t57 = (((x229<=x230)*x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 7U;
	int32_t t58 = -3;

	t58 = (((x233<=x234)*x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -14LL;
	int64_t x239 = -5253LL;
	uint16_t x240 = 985U;
	volatile int32_t t59 = 9;

	t59 = (((x237<=x238)*x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 138U;
	static uint32_t x242 = 19809143U;
	static uint16_t x243 = 46U;
	int8_t x244 = INT8_MAX;
	volatile int32_t t60 = -13428;

	t60 = (((x241<=x242)*x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	volatile uint32_t x246 = UINT32_MAX;
	int8_t x247 = -1;
	volatile uint32_t x248 = 892646263U;
	static volatile int32_t t61 = -10;

	t61 = (((x245<=x246)*x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 159U;
	static uint16_t x250 = UINT16_MAX;
	volatile int32_t x251 = -1;
	int32_t t62 = 359060738;

	t62 = (((x249<=x250)*x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x254 = INT32_MIN;
	volatile uint32_t x255 = 34U;
	int16_t x256 = -1;
	volatile int32_t t63 = 6;

	t63 = (((x253<=x254)*x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = -1;
	uint8_t x258 = 84U;
	static int32_t x259 = 139454188;
	static int64_t x260 = -7484426LL;
	volatile int32_t t64 = -1;

	t64 = (((x257<=x258)*x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 9U;
	static int64_t x262 = -7309150401585619LL;
	static volatile uint8_t x263 = 30U;
	uint32_t x264 = 755U;
	static int32_t t65 = 1053353;

	t65 = (((x261<=x262)*x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = 14;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 192;

	t66 = (((x265<=x266)*x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x269 = UINT32_MAX;
	volatile int32_t x270 = INT32_MIN;
	volatile int32_t x271 = INT32_MAX;
	int8_t x272 = -1;
	volatile int32_t t67 = 7;

	t67 = (((x269<=x270)*x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 62U;
	int32_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MAX;
	static volatile int32_t t68 = -84;

	t68 = (((x273<=x274)*x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = 125U;
	int64_t x278 = 3267440602621952LL;
	static int16_t x279 = INT16_MIN;
	uint8_t x280 = 46U;
	int32_t t69 = -20865;

	t69 = (((x277<=x278)*x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 675U;
	uint64_t x282 = UINT64_MAX;
	static int8_t x283 = INT8_MIN;
	volatile uint8_t x284 = 3U;
	int32_t t70 = 10648;

	t70 = (((x281<=x282)*x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	int32_t x287 = INT32_MIN;
	static int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 13127;

	t71 = (((x285<=x286)*x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x291 = -1;
	int32_t t72 = 3;

	t72 = (((x289<=x290)*x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	uint64_t x294 = UINT64_MAX;
	int8_t x295 = -1;
	int32_t t73 = 249061;

	t73 = (((x293<=x294)*x295)==x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1LL;
	int32_t x298 = -1;
	int8_t x299 = INT8_MIN;
	uint16_t x300 = 14872U;
	int32_t t74 = 7;

	t74 = (((x297<=x298)*x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 78252639582LLU;
	uint64_t x302 = UINT64_MAX;
	int64_t x304 = -1LL;
	static int32_t t75 = -421;

	t75 = (((x301<=x302)*x303)==x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 14U;
	int8_t x307 = -5;
	int32_t t76 = 1358;

	t76 = (((x305<=x306)*x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 0U;
	uint8_t x310 = 0U;
	int16_t x312 = INT16_MIN;

	t77 = (((x309<=x310)*x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 4U;
	volatile int8_t x314 = INT8_MAX;
	uint16_t x315 = 58U;
	int8_t x316 = INT8_MIN;
	int32_t t78 = 725;

	t78 = (((x313<=x314)*x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x319 = 34U;
	uint8_t x320 = 2U;

	t79 = (((x317<=x318)*x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint32_t x323 = 343756996U;
	static int32_t t80 = 141;

	t80 = (((x321<=x322)*x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	uint8_t x326 = 11U;
	uint16_t x327 = 3029U;

	t81 = (((x325<=x326)*x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	static int16_t x330 = -1;
	int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	int32_t t82 = -7530892;

	t82 = (((x329<=x330)*x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 23;
	static int8_t x335 = 30;
	uint16_t x336 = UINT16_MAX;
	static volatile int32_t t83 = -31976;

	t83 = (((x333<=x334)*x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile int64_t x340 = INT64_MIN;
	int32_t t84 = -162;

	t84 = (((x337<=x338)*x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = INT16_MIN;
	int32_t x343 = INT32_MIN;
	int32_t t85 = 89203;

	t85 = (((x341<=x342)*x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	int32_t x347 = -378924637;
	int32_t t86 = 6429;

	t86 = (((x345<=x346)*x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = 0;
	static volatile uint64_t x352 = UINT64_MAX;
	volatile int32_t t87 = -9;

	t87 = (((x349<=x350)*x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 57U;
	int8_t x354 = INT8_MAX;
	int8_t x355 = INT8_MIN;
	static int16_t x356 = -1;
	int32_t t88 = 434667;

	t88 = (((x353<=x354)*x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	volatile int32_t x358 = 170;
	static int32_t x360 = -996;

	t89 = (((x357<=x358)*x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -13;
	volatile uint32_t x362 = 6988777U;
	int16_t x363 = INT16_MIN;
	volatile int64_t x364 = INT64_MAX;
	static volatile int32_t t90 = 510699533;

	t90 = (((x361<=x362)*x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 27U;
	static int32_t x366 = INT32_MAX;
	int8_t x367 = INT8_MAX;
	static uint8_t x368 = 53U;

	t91 = (((x365<=x366)*x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 3945U;
	uint32_t x371 = 29463U;

	t92 = (((x369<=x370)*x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -15699;
	volatile uint64_t x374 = 1782062LLU;
	int32_t x375 = -1;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t93 = 124382622;

	t93 = (((x373<=x374)*x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x377 = 1535;
	uint8_t x378 = UINT8_MAX;
	volatile int8_t x379 = 32;
	static int64_t x380 = -1LL;
	volatile int32_t t94 = 3;

	t94 = (((x377<=x378)*x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MAX;
	static uint64_t x383 = 1LLU;
	int64_t x384 = INT64_MIN;
	volatile int32_t t95 = 936577;

	t95 = (((x381<=x382)*x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 1163104847811189813LLU;
	int64_t x386 = -1LL;
	static volatile int16_t x387 = INT16_MAX;
	static uint64_t x388 = UINT64_MAX;
	int32_t t96 = -503;

	t96 = (((x385<=x386)*x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 0U;
	uint32_t x390 = 27107319U;
	int64_t x392 = -1LL;
	int32_t t97 = -1551;

	t97 = (((x389<=x390)*x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MIN;
	uint64_t x394 = 1829984511822LLU;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -1446446;

	t98 = (((x393<=x394)*x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	int64_t x399 = INT64_MAX;
	uint32_t x400 = 34473637U;
	int32_t t99 = 1997550;

	t99 = (((x397<=x398)*x399)==x400);

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

