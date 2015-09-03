#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = 16;
static int8_t x7 = INT8_MIN;
static int32_t x8 = -1;
volatile int32_t t1 = 1;
static uint8_t x13 = UINT8_MAX;
static int16_t x18 = INT16_MIN;
static int16_t x19 = INT16_MIN;
static volatile uint16_t x20 = 9U;
volatile int16_t x24 = 3;
uint16_t x25 = 7834U;
static int32_t x28 = -957229;
uint16_t x29 = 3U;
uint8_t x35 = 0U;
static int32_t t9 = -1011764737;
int8_t x44 = -1;
static int32_t x45 = INT32_MAX;
uint8_t x49 = UINT8_MAX;
int8_t x51 = -7;
uint8_t x57 = 20U;
int8_t x62 = INT8_MIN;
uint64_t x69 = 298661052640672LLU;
int32_t x71 = -1;
int64_t x77 = -4121776839806190210LL;
int32_t x82 = -52097;
static int64_t x84 = 92174481687644LL;
int8_t x85 = INT8_MIN;
int64_t x92 = INT64_MIN;
int32_t t22 = -956015670;
int8_t x106 = -14;
int8_t x109 = INT8_MIN;
static int8_t x112 = INT8_MIN;
static int8_t x113 = INT8_MAX;
int16_t x116 = INT16_MIN;
volatile uint16_t x123 = UINT16_MAX;
int64_t x124 = 157569972LL;
volatile int64_t x125 = INT64_MAX;
uint16_t x130 = 22252U;
static volatile uint16_t x132 = 1215U;
int8_t x135 = 29;
int16_t x136 = -6621;
int32_t x139 = -257627591;
volatile int32_t t34 = 30939273;
int64_t x148 = INT64_MIN;
uint16_t x154 = UINT16_MAX;
static volatile int32_t t38 = 2;
volatile int16_t x157 = 3;
volatile int16_t x158 = -1;
uint8_t x160 = 14U;
int32_t x172 = -95;
uint8_t x176 = 11U;
int16_t x177 = -1;
int8_t x178 = INT8_MIN;
uint16_t x182 = 1317U;
static int64_t x187 = INT64_MIN;
static volatile uint32_t x194 = 1603496U;
int32_t x198 = INT32_MAX;
int8_t x205 = -4;
int16_t x206 = -1;
uint16_t x207 = 0U;
uint16_t x217 = 14U;
volatile int16_t x219 = -62;
int16_t x220 = INT16_MIN;
static uint16_t x224 = 4387U;
int32_t t55 = -469;
uint32_t x226 = 1395124U;
uint16_t x229 = UINT16_MAX;
static volatile int32_t x240 = -1;
int32_t x244 = 29;
uint8_t x246 = 12U;
volatile int32_t t62 = -684113;
int32_t t63 = 94794;
int32_t t64 = -233004863;
int8_t x264 = -15;
int32_t x266 = INT32_MIN;
volatile int16_t x268 = -6;
int32_t t66 = -25778;
volatile uint64_t x280 = 53LLU;
int64_t x288 = INT64_MIN;
int32_t t72 = -1;
int8_t x294 = -1;
volatile int16_t x303 = INT16_MIN;
uint8_t x307 = 0U;
static volatile int16_t x309 = 10;
uint64_t x314 = 163586855953955283LLU;
volatile int32_t t78 = 6;
uint32_t x318 = 246373168U;
int16_t x319 = INT16_MAX;
int16_t x323 = INT16_MIN;
static int8_t x330 = 7;
uint64_t x331 = 494425156LLU;
int16_t x339 = INT16_MIN;
int8_t x340 = -1;
int64_t x348 = -7694608465111799LL;
int64_t x352 = 125876520977LL;
int64_t x365 = INT64_MIN;
volatile int8_t x367 = INT8_MAX;
volatile int32_t x368 = INT32_MIN;
volatile int16_t x369 = 32;
uint8_t x371 = 0U;
int32_t x375 = 586145;
static int64_t x388 = 1053194426838LL;
int16_t x390 = 530;
uint32_t x392 = UINT32_MAX;
static int8_t x397 = INT8_MAX;
static uint8_t x398 = 3U;
volatile int32_t x399 = INT32_MIN;


void f0(void) {
	int64_t x1 = -43496063510516LL;
	uint16_t x2 = 3216U;
	int64_t x3 = -1LL;
	volatile int64_t x4 = 513630168656527LL;
	volatile int32_t t0 = 224848;

	t0 = (((x1|x2)<x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;

	t1 = (((x5|x6)<x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x10 = -1;
	static volatile int64_t x11 = -1178LL;
	static int32_t x12 = INT32_MAX;
	int32_t t2 = 1;

	t2 = (((x9|x10)<x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MAX;
	int32_t x15 = 7392725;
	int16_t x16 = INT16_MAX;
	static int32_t t3 = -12857;

	t3 = (((x13|x14)<x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int32_t t4 = 371702356;

	t4 = (((x17|x18)<x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static volatile int64_t x22 = -1LL;
	uint8_t x23 = 0U;
	volatile int32_t t5 = -51;

	t5 = (((x21|x22)<x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -1;
	int64_t x27 = INT64_MIN;
	int32_t t6 = 5696665;

	t6 = (((x25|x26)<x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	volatile int64_t x31 = INT64_MIN;
	uint16_t x32 = 5U;
	static int32_t t7 = 3088741;

	t7 = (((x29|x30)<x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	static int32_t x34 = -42;
	int32_t x36 = -1;
	static int32_t t8 = -20245;

	t8 = (((x33|x34)<x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 12384042696672516LLU;
	int16_t x38 = 23;
	int64_t x39 = INT64_MAX;
	uint32_t x40 = 59U;

	t9 = (((x37|x38)<x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	volatile int32_t x42 = INT32_MAX;
	uint8_t x43 = 119U;
	int32_t t10 = -7;

	t10 = (((x41|x42)<x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x46 = 8993764513LL;
	volatile uint32_t x47 = 15078U;
	volatile uint16_t x48 = 980U;
	int32_t t11 = 98607;

	t11 = (((x45|x46)<x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	static uint16_t x52 = UINT16_MAX;
	volatile int32_t t12 = 6318135;

	t12 = (((x49|x50)<x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 29832;
	int8_t x54 = -2;
	static int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	int32_t t13 = -242;

	t13 = (((x53|x54)<x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x58 = UINT8_MAX;
	static int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MAX;
	volatile int32_t t14 = 955;

	t14 = (((x57|x58)<x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	volatile int64_t x63 = INT64_MIN;
	int64_t x64 = INT64_MAX;
	int32_t t15 = 1;

	t15 = (((x61|x62)<x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 5U;
	uint32_t x66 = 33U;
	int32_t x67 = INT32_MIN;
	int16_t x68 = -1;
	volatile int32_t t16 = 177493;

	t16 = (((x65|x66)<x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MAX;
	uint32_t x72 = UINT32_MAX;
	int32_t t17 = 16;

	t17 = (((x69|x70)<x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	int8_t x74 = -1;
	static int64_t x75 = -1LL;
	int8_t x76 = -1;
	static int32_t t18 = 668;

	t18 = (((x73|x74)<x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	int64_t x79 = INT64_MAX;
	uint16_t x80 = 1941U;
	int32_t t19 = -2;

	t19 = (((x77|x78)<x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 7604LLU;
	int16_t x83 = 1;
	int32_t t20 = -7075;

	t20 = (((x81|x82)<x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -6;
	static int32_t x87 = -1;
	int16_t x88 = INT16_MAX;
	int32_t t21 = -10;

	t21 = (((x85|x86)<x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	int8_t x90 = 0;
	uint64_t x91 = 13814LLU;

	t22 = (((x89|x90)<x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 900250282139849661LLU;
	int32_t x94 = -1;
	static volatile uint64_t x95 = UINT64_MAX;
	static uint32_t x96 = 26293U;
	volatile int32_t t23 = 134;

	t23 = (((x93|x94)<x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -49752485;
	int16_t x98 = -1;
	uint8_t x99 = 17U;
	int32_t x100 = 470;
	static int32_t t24 = 236452316;

	t24 = (((x97|x98)<x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 762U;
	volatile int16_t x102 = INT16_MIN;
	volatile int64_t x103 = -219552090LL;
	int16_t x104 = -1;
	volatile int32_t t25 = 1;

	t25 = (((x101|x102)<x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 29330U;
	static int16_t x107 = 0;
	static int8_t x108 = -1;
	int32_t t26 = -52855337;

	t26 = (((x105|x106)<x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x110 = -1;
	int8_t x111 = 10;
	int32_t t27 = 336;

	t27 = (((x109|x110)<x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x114 = INT32_MIN;
	static int8_t x115 = -1;
	int32_t t28 = 1;

	t28 = (((x113|x114)<x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x117 = -1;
	static int16_t x118 = INT16_MIN;
	volatile int32_t x119 = -7345;
	int32_t x120 = INT32_MIN;
	int32_t t29 = -24029;

	t29 = (((x117|x118)<x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int64_t x122 = INT64_MAX;
	int32_t t30 = -5280;

	t30 = (((x121|x122)<x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x126 = INT64_MIN;
	int16_t x127 = -32;
	volatile int32_t x128 = 10853;
	static volatile int32_t t31 = 4814;

	t31 = (((x125|x126)<x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x129 = UINT32_MAX;
	volatile uint32_t x131 = 6400U;
	int32_t t32 = -117602165;

	t32 = (((x129|x130)<x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	uint16_t x134 = 4U;
	volatile int32_t t33 = 1245;

	t33 = (((x133|x134)<x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 36385975134200951LL;
	volatile uint16_t x138 = 12282U;
	uint32_t x140 = 222819376U;

	t34 = (((x137|x138)<x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = 1;
	uint8_t x142 = 9U;
	uint16_t x143 = 799U;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -2;

	t35 = (((x141|x142)<x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x145 = 76U;
	int64_t x146 = INT64_MAX;
	int32_t x147 = INT32_MAX;
	static volatile int32_t t36 = -68295487;

	t36 = (((x145|x146)<x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = UINT32_MAX;
	uint32_t x150 = 363424240U;
	int64_t x151 = -1LL;
	int32_t x152 = -1;
	static volatile int32_t t37 = 1301917;

	t37 = (((x149|x150)<x151)<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -16236762LL;
	static volatile int8_t x155 = -1;
	int32_t x156 = INT32_MIN;

	t38 = (((x153|x154)<x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x159 = UINT16_MAX;
	int32_t t39 = -3446410;

	t39 = (((x157|x158)<x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = -1;
	int8_t x162 = INT8_MIN;
	uint32_t x163 = 21231719U;
	static volatile int8_t x164 = -1;
	static int32_t t40 = 9852;

	t40 = (((x161|x162)<x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = -1;
	static uint16_t x168 = 4656U;
	static volatile int32_t t41 = -25464021;

	t41 = (((x165|x166)<x167)<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	uint32_t x171 = 96U;
	volatile int32_t t42 = -747;

	t42 = (((x169|x170)<x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	static int8_t x174 = -1;
	int64_t x175 = INT64_MAX;
	volatile int32_t t43 = -60378002;

	t43 = (((x173|x174)<x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x179 = 7U;
	volatile uint32_t x180 = 9U;
	volatile int32_t t44 = -1;

	t44 = (((x177|x178)<x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 1;
	static int32_t x183 = INT32_MAX;
	int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = -40;

	t45 = (((x181|x182)<x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = 1351;
	int16_t x186 = 7;
	uint16_t x188 = UINT16_MAX;
	static int32_t t46 = 802942980;

	t46 = (((x185|x186)<x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = 0;
	volatile int16_t x190 = 1335;
	int32_t x191 = INT32_MAX;
	static volatile int8_t x192 = -1;
	int32_t t47 = 260;

	t47 = (((x189|x190)<x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 10839286074LLU;
	int16_t x195 = INT16_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 156180;

	t48 = (((x193|x194)<x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 7216482680754502LL;
	int32_t x199 = 1808693;
	volatile uint16_t x200 = 557U;
	volatile int32_t t49 = -195051;

	t49 = (((x197|x198)<x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 2U;
	int64_t x202 = -1LL;
	static uint32_t x203 = UINT32_MAX;
	int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 5262562;

	t50 = (((x201|x202)<x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 21932155;

	t51 = (((x205|x206)<x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x209 = UINT64_MAX;
	int64_t x210 = -3928641019277795450LL;
	uint64_t x211 = UINT64_MAX;
	uint64_t x212 = 121990663132LLU;
	volatile int32_t t52 = 747;

	t52 = (((x209|x210)<x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 1041819668U;
	uint64_t x214 = 33838142628288LLU;
	int64_t x215 = INT64_MIN;
	static int64_t x216 = INT64_MAX;
	volatile int32_t t53 = -2;

	t53 = (((x213|x214)<x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 50U;
	int32_t t54 = 1852;

	t54 = (((x217|x218)<x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	int16_t x222 = -1;
	static uint64_t x223 = 8333468868LLU;

	t55 = (((x221|x222)<x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MIN;
	int32_t x227 = -1;
	int32_t x228 = 1002418;
	int32_t t56 = 234839305;

	t56 = (((x225|x226)<x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = -1;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 634U;
	volatile int32_t t57 = -3;

	t57 = (((x229|x230)<x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 447;
	int64_t x234 = INT64_MIN;
	volatile uint8_t x235 = 9U;
	uint8_t x236 = UINT8_MAX;
	int32_t t58 = 709;

	t58 = (((x233|x234)<x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = UINT16_MAX;
	uint32_t x238 = 788654938U;
	volatile int32_t x239 = 789715;
	static volatile int32_t t59 = 14833975;

	t59 = (((x237|x238)<x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 39380713910734LLU;
	uint32_t x242 = 56794U;
	uint32_t x243 = 9U;
	volatile int32_t t60 = 303901;

	t60 = (((x241|x242)<x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 24U;
	int16_t x247 = 2;
	int64_t x248 = INT64_MIN;
	volatile int32_t t61 = -43590;

	t61 = (((x245|x246)<x247)<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 3U;
	static int32_t x250 = -1;
	static int8_t x251 = INT8_MIN;
	uint8_t x252 = UINT8_MAX;

	t62 = (((x249|x250)<x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -6795237469LL;
	int16_t x254 = -13889;
	uint16_t x255 = 0U;
	int16_t x256 = -3;

	t63 = (((x253|x254)<x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	uint32_t x258 = UINT32_MAX;
	int16_t x259 = 4751;
	volatile int32_t x260 = INT32_MIN;

	t64 = (((x257|x258)<x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	uint16_t x262 = 7565U;
	int16_t x263 = 0;
	volatile int32_t t65 = 63044;

	t65 = (((x261|x262)<x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = UINT8_MAX;
	int64_t x267 = -1LL;

	t66 = (((x265|x266)<x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	static int16_t x270 = -1837;
	uint8_t x271 = 6U;
	volatile int8_t x272 = 0;
	static volatile int32_t t67 = -553670;

	t67 = (((x269|x270)<x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -2520314513356LL;
	int32_t x274 = -493006;
	int8_t x275 = -1;
	int16_t x276 = 3593;
	volatile int32_t t68 = 13;

	t68 = (((x273|x274)<x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	uint16_t x278 = 5U;
	int16_t x279 = INT16_MAX;
	volatile int32_t t69 = -636943;

	t69 = (((x277|x278)<x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x281 = 131LLU;
	int64_t x282 = 2848829291LL;
	volatile int64_t x283 = INT64_MAX;
	volatile int16_t x284 = -1;
	volatile int32_t t70 = -124588;

	t70 = (((x281|x282)<x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 73553LLU;
	int8_t x286 = INT8_MIN;
	static int16_t x287 = INT16_MAX;
	int32_t t71 = -22143353;

	t71 = (((x285|x286)<x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 2;
	static int16_t x290 = 10484;
	int8_t x291 = INT8_MAX;
	static uint8_t x292 = 93U;

	t72 = (((x289|x290)<x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	uint32_t x295 = UINT32_MAX;
	static int32_t x296 = INT32_MAX;
	int32_t t73 = -13;

	t73 = (((x293|x294)<x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	int16_t x298 = -1;
	int32_t x299 = INT32_MAX;
	int64_t x300 = INT64_MIN;
	int32_t t74 = 154524;

	t74 = (((x297|x298)<x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -9306;
	int64_t x302 = INT64_MIN;
	static int64_t x304 = 100950876042886LL;
	static volatile int32_t t75 = 1;

	t75 = (((x301|x302)<x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	int64_t x306 = 3171LL;
	static int8_t x308 = INT8_MIN;
	int32_t t76 = 1665826;

	t76 = (((x305|x306)<x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x310 = 1U;
	volatile uint8_t x311 = 23U;
	uint8_t x312 = 2U;
	static int32_t t77 = 9;

	t77 = (((x309|x310)<x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 607;
	static int64_t x315 = -1LL;
	uint32_t x316 = 1724658U;

	t78 = (((x313|x314)<x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 759995503339321739LL;
	int8_t x320 = -17;
	int32_t t79 = -1;

	t79 = (((x317|x318)<x319)<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = 28;
	volatile int8_t x322 = -1;
	volatile int8_t x324 = INT8_MIN;
	int32_t t80 = -1805870;

	t80 = (((x321|x322)<x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = 5;
	int32_t x326 = INT32_MAX;
	int64_t x327 = INT64_MIN;
	uint32_t x328 = 219413217U;
	volatile int32_t t81 = -197;

	t81 = (((x325|x326)<x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	volatile uint8_t x332 = 26U;
	volatile int32_t t82 = 3373948;

	t82 = (((x329|x330)<x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MIN;
	static int64_t x334 = INT64_MIN;
	static int32_t x335 = INT32_MIN;
	static int16_t x336 = INT16_MAX;
	int32_t t83 = -269;

	t83 = (((x333|x334)<x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	uint16_t x338 = 14U;
	static int32_t t84 = -55848276;

	t84 = (((x337|x338)<x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 641489LL;
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = 31243;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -1088;

	t85 = (((x341|x342)<x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int32_t x346 = INT32_MIN;
	uint32_t x347 = UINT32_MAX;
	int32_t t86 = 6574589;

	t86 = (((x345|x346)<x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 53;
	static volatile int64_t x350 = INT64_MIN;
	volatile int64_t x351 = INT64_MIN;
	int32_t t87 = 371755;

	t87 = (((x349|x350)<x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x353 = INT32_MIN;
	int8_t x354 = 14;
	int32_t x355 = INT32_MIN;
	int16_t x356 = -5;
	volatile int32_t t88 = -6077;

	t88 = (((x353|x354)<x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 445U;
	volatile int16_t x358 = INT16_MIN;
	int8_t x359 = INT8_MAX;
	static volatile int8_t x360 = INT8_MAX;
	static int32_t t89 = -190557714;

	t89 = (((x357|x358)<x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	static int8_t x362 = 5;
	uint64_t x363 = 1216260886056LLU;
	static volatile uint64_t x364 = UINT64_MAX;
	int32_t t90 = -123;

	t90 = (((x361|x362)<x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = INT32_MAX;
	volatile int32_t t91 = 1844480;

	t91 = (((x365|x366)<x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -1LL;
	int16_t x372 = INT16_MIN;
	int32_t t92 = -577;

	t92 = (((x369|x370)<x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 24U;
	int8_t x374 = INT8_MIN;
	volatile uint64_t x376 = 32747338364LLU;
	volatile int32_t t93 = -99003;

	t93 = (((x373|x374)<x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MAX;
	uint64_t x378 = 258210259397393LLU;
	int64_t x379 = 50062LL;
	static int64_t x380 = -52884834LL;
	static volatile int32_t t94 = 0;

	t94 = (((x377|x378)<x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 0U;
	int32_t x382 = -617;
	int16_t x383 = 26;
	volatile int32_t x384 = -1;
	int32_t t95 = -16199844;

	t95 = (((x381|x382)<x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 8717284418786LLU;
	int8_t x386 = -4;
	int8_t x387 = INT8_MIN;
	static int32_t t96 = -103387090;

	t96 = (((x385|x386)<x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x391 = 1030017U;
	static volatile int32_t t97 = 320;

	t97 = (((x389|x390)<x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 32225U;
	static int16_t x394 = -1;
	int16_t x395 = INT16_MIN;
	int16_t x396 = 0;
	int32_t t98 = -35391392;

	t98 = (((x393|x394)<x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x400 = INT16_MIN;
	int32_t t99 = 30542;

	t99 = (((x397|x398)<x399)<x400);

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

