#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x3 = -1;
static uint16_t x8 = 52U;
volatile int32_t t1 = 9677691;
int8_t x11 = INT8_MAX;
volatile int32_t x14 = -1;
volatile uint32_t x19 = UINT32_MAX;
static uint64_t x23 = 6831LLU;
uint32_t x31 = UINT32_MAX;
static uint64_t t9 = 9299937LLU;
volatile int64_t x49 = 19755824624LL;
uint32_t x51 = 108750U;
int32_t x62 = INT32_MIN;
uint8_t x67 = 5U;
int64_t t14 = 5375030LL;
static int32_t x69 = -1;
uint32_t x70 = 1585U;
int16_t x73 = INT16_MIN;
volatile int64_t t16 = -12975821227LL;
static volatile int8_t x83 = INT8_MIN;
uint16_t x85 = 166U;
uint16_t x88 = UINT16_MAX;
static volatile uint64_t t20 = 2021488030332LLU;
int32_t x95 = INT32_MIN;
static int64_t x98 = INT64_MIN;
volatile int64_t x105 = 304108LL;
uint64_t x106 = 201870717836466LLU;
uint64_t t24 = 7LLU;
static uint8_t x114 = 95U;
volatile int32_t x117 = INT32_MIN;
static int32_t x120 = 5;
int32_t x127 = -1;
int64_t x128 = INT64_MIN;
int64_t t29 = -491783193422142047LL;
uint64_t x129 = UINT64_MAX;
volatile int8_t x133 = INT8_MIN;
int8_t x135 = -1;
int64_t t32 = 174537351256LL;
int32_t x150 = -131303402;
int64_t x152 = INT64_MIN;
volatile int8_t x158 = INT8_MAX;
int8_t x159 = INT8_MAX;
int8_t x163 = -5;
int64_t x165 = INT64_MAX;
static int64_t x168 = 226758785652LL;
int16_t x172 = -1;
int32_t x177 = 2836;
volatile uint8_t x185 = UINT8_MAX;
volatile int8_t x187 = INT8_MAX;
int16_t x197 = -1;
volatile int8_t x199 = 3;
volatile uint16_t x201 = 2U;
volatile uint32_t x208 = 6U;
int16_t x210 = -1;
volatile int64_t x216 = 3818LL;
uint64_t t48 = 5827LLU;
static volatile int64_t x219 = -5043LL;
volatile int16_t x223 = INT16_MIN;
int16_t x233 = -1;
volatile int64_t x238 = INT64_MIN;
uint64_t x240 = UINT64_MAX;
int64_t x245 = 48175751LL;
static int32_t x246 = 2183394;
uint32_t t56 = 3926652U;
int64_t x257 = -1LL;
static uint64_t x258 = 112LLU;
int8_t x264 = INT8_MIN;
uint32_t x265 = UINT32_MAX;
uint8_t x266 = 2U;
uint64_t t60 = 420898454347LLU;
uint8_t x275 = UINT8_MAX;
static volatile uint32_t x278 = UINT32_MAX;
static uint32_t x285 = 41740U;
int64_t x288 = INT64_MIN;
volatile int64_t t64 = 212324884216054524LL;
int64_t x291 = INT64_MAX;
static volatile int8_t x292 = INT8_MIN;
uint16_t x298 = UINT16_MAX;
static int8_t x302 = 27;
int64_t x306 = -1509573648887985677LL;
uint64_t x308 = 1LLU;
uint32_t x309 = 220U;
uint64_t x319 = 840571277547LLU;
uint64_t x327 = 389LLU;
int8_t x336 = INT8_MAX;
int64_t t77 = -90552613622414317LL;
static volatile uint16_t x341 = 2U;
static int64_t t78 = 1LL;
uint8_t x350 = UINT8_MAX;
volatile uint32_t x351 = 2706149U;
int8_t x353 = INT8_MIN;
static int32_t x356 = INT32_MAX;
uint8_t x359 = 4U;
int32_t x372 = -2648;
volatile int32_t t85 = 948479;
uint32_t x376 = UINT32_MAX;
volatile uint32_t t86 = 454U;
static uint8_t x379 = 1U;
static int32_t x386 = 285;
static int64_t x387 = INT64_MIN;
volatile uint64_t x391 = 2265267710186145229LLU;
volatile int32_t x395 = INT32_MIN;
int8_t x398 = -21;
uint64_t x401 = 2073350LLU;
int8_t x402 = INT8_MIN;
int64_t x413 = -28364LL;
int64_t t96 = -90931976LL;
int64_t x426 = INT64_MIN;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint16_t x2 = 7068U;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = 5577;

	t0 = (((x1%x2)/x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 76;
	static uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MAX;

	t1 = (((x5%x6)/x7)/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 8;
	uint16_t x10 = UINT16_MAX;
	int64_t x12 = -1LL;
	static int64_t t2 = 42116782607254LL;

	t2 = (((x9%x10)/x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 7357907148LL;
	uint32_t x15 = 64324038U;
	int8_t x16 = -1;
	int64_t t3 = -3246797994594687LL;

	t3 = (((x13%x14)/x15)/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	static volatile int32_t x18 = INT32_MIN;
	int32_t x20 = -1;
	volatile int64_t t4 = 1511403130829863LL;

	t4 = (((x17%x18)/x19)/x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = -1;
	int16_t x22 = INT16_MAX;
	int8_t x24 = -1;
	volatile uint64_t t5 = 87742LLU;

	t5 = (((x21%x22)/x23)/x24);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = 5;
	int32_t x27 = INT32_MIN;
	volatile int64_t x28 = INT64_MIN;
	int64_t t6 = 12976662303043013LL;

	t6 = (((x25%x26)/x27)/x28);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -1;
	int64_t x30 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	int64_t t7 = 485885LL;

	t7 = (((x29%x30)/x31)/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile int64_t x34 = -1LL;
	uint64_t x35 = 1424358904LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t8 = 1413LLU;

	t8 = (((x33%x34)/x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = UINT64_MAX;
	uint32_t x42 = 38U;
	volatile int8_t x43 = -1;
	uint16_t x44 = 1664U;

	t9 = (((x41%x42)/x43)/x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	static uint64_t x46 = 18030116LLU;
	uint64_t x47 = UINT64_MAX;
	int64_t x48 = -1LL;
	uint64_t t10 = 104877876LLU;

	t10 = (((x45%x46)/x47)/x48);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x50 = -1;
	uint64_t x52 = 583456665197103LLU;
	volatile uint64_t t11 = 3346905LLU;

	t11 = (((x49%x50)/x51)/x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	uint16_t x58 = 17U;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	volatile int32_t t12 = 7626705;

	t12 = (((x57%x58)/x59)/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = UINT16_MAX;
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = INT32_MIN;
	static volatile uint64_t t13 = 26314922307792557LLU;

	t13 = (((x61%x62)/x63)/x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x65 = 272095;
	int64_t x66 = INT64_MIN;
	int32_t x68 = INT32_MIN;

	t14 = (((x65%x66)/x67)/x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x71 = 2;
	uint32_t x72 = UINT32_MAX;
	static volatile uint32_t t15 = 111U;

	t15 = (((x69%x70)/x71)/x72);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = INT64_MAX;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = 554U;

	t16 = (((x73%x74)/x75)/x76);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x77 = 0;
	int32_t x78 = INT32_MAX;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	int32_t t17 = -380;

	t17 = (((x77%x78)/x79)/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	uint16_t x82 = 383U;
	int16_t x84 = -1;
	static volatile int64_t t18 = -18931106950LL;

	t18 = (((x81%x82)/x83)/x84);

	if (t18 != -2LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x86 = 259460565139LLU;
	static volatile int16_t x87 = -1;
	volatile uint64_t t19 = 4642349434641232367LLU;

	t19 = (((x85%x86)/x87)/x88);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x89 = 1U;
	uint64_t x90 = UINT64_MAX;
	volatile int64_t x91 = INT64_MIN;
	uint32_t x92 = 6650084U;

	t20 = (((x89%x90)/x91)/x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x93 = UINT16_MAX;
	uint8_t x94 = UINT8_MAX;
	volatile int64_t x96 = INT64_MIN;
	int64_t t21 = -37425075LL;

	t21 = (((x93%x94)/x95)/x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x97 = 218U;
	int16_t x99 = INT16_MAX;
	int32_t x100 = -32;
	volatile int64_t t22 = -12333565154LL;

	t22 = (((x97%x98)/x99)/x100);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x101 = -1;
	static uint8_t x102 = 7U;
	int8_t x103 = -26;
	volatile uint8_t x104 = 2U;
	volatile int32_t t23 = 6056;

	t23 = (((x101%x102)/x103)/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x107 = INT8_MIN;
	volatile int16_t x108 = -1;

	t24 = (((x105%x106)/x107)/x108);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x109 = UINT64_MAX;
	int8_t x110 = INT8_MIN;
	int64_t x111 = -423081842242862403LL;
	static uint32_t x112 = 254U;
	volatile uint64_t t25 = 568544171LLU;

	t25 = (((x109%x110)/x111)/x112);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	int64_t x115 = 595572885989LL;
	uint8_t x116 = 16U;
	int64_t t26 = 5138858405827000LL;

	t26 = (((x113%x114)/x115)/x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x118 = 64481825024158237LLU;
	int32_t x119 = INT32_MIN;
	uint64_t t27 = 36474591971LLU;

	t27 = (((x117%x118)/x119)/x120);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -2101683265589073LL;
	int16_t x122 = INT16_MAX;
	uint32_t x123 = 189435467U;
	int32_t x124 = -1;
	int64_t t28 = -1172LL;

	t28 = (((x121%x122)/x123)/x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x125 = 13U;
	int32_t x126 = -109544265;

	t29 = (((x125%x126)/x127)/x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x130 = 5;
	int8_t x131 = -1;
	uint32_t x132 = 2047U;
	uint64_t t30 = 16752293647LLU;

	t30 = (((x129%x130)/x131)/x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x134 = 221U;
	int64_t x136 = INT64_MAX;
	volatile int64_t t31 = -134512690989675LL;

	t31 = (((x133%x134)/x135)/x136);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	int64_t x146 = 69LL;
	int16_t x147 = -8;
	int32_t x148 = INT32_MIN;

	t32 = (((x145%x146)/x147)/x148);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = UINT64_MAX;
	volatile uint32_t x151 = UINT32_MAX;
	volatile uint64_t t33 = 75061154LLU;

	t33 = (((x149%x150)/x151)/x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x157 = 3;
	uint16_t x160 = 52U;
	int32_t t34 = 39315150;

	t34 = (((x157%x158)/x159)/x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x161 = -1LL;
	uint32_t x162 = UINT32_MAX;
	static int8_t x164 = INT8_MIN;
	volatile int64_t t35 = -831100883LL;

	t35 = (((x161%x162)/x163)/x164);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x166 = UINT16_MAX;
	uint32_t x167 = 26741U;
	static int64_t t36 = 6695778306572086LL;

	t36 = (((x165%x166)/x167)/x168);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MIN;
	uint32_t x170 = UINT32_MAX;
	int64_t x171 = INT64_MIN;
	static volatile int64_t t37 = 1633933LL;

	t37 = (((x169%x170)/x171)/x172);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = -2;
	int32_t x174 = INT32_MIN;
	static volatile int8_t x175 = INT8_MIN;
	int16_t x176 = INT16_MIN;
	volatile int32_t t38 = 3282794;

	t38 = (((x173%x174)/x175)/x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x178 = INT64_MIN;
	static volatile int8_t x179 = INT8_MIN;
	static int16_t x180 = INT16_MAX;
	volatile int64_t t39 = -91362026311045LL;

	t39 = (((x177%x178)/x179)/x180);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x181 = -1;
	uint64_t x182 = 14LLU;
	volatile int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MAX;
	uint64_t t40 = 10296842523LLU;

	t40 = (((x181%x182)/x183)/x184);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x186 = INT16_MIN;
	volatile uint32_t x188 = UINT32_MAX;
	uint32_t t41 = 34382U;

	t41 = (((x185%x186)/x187)/x188);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x189 = UINT32_MAX;
	static int8_t x190 = INT8_MAX;
	static uint8_t x191 = UINT8_MAX;
	int16_t x192 = INT16_MAX;
	uint32_t t42 = 124110U;

	t42 = (((x189%x190)/x191)/x192);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x193 = -62;
	int64_t x194 = INT64_MAX;
	int32_t x195 = -471;
	int16_t x196 = INT16_MIN;
	volatile int64_t t43 = 110604983671997484LL;

	t43 = (((x193%x194)/x195)/x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x198 = -376;
	uint32_t x200 = 1987U;
	uint32_t t44 = 1703U;

	t44 = (((x197%x198)/x199)/x200);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x202 = INT32_MIN;
	static uint8_t x203 = 13U;
	volatile int16_t x204 = -1;
	volatile int32_t t45 = -14699982;

	t45 = (((x201%x202)/x203)/x204);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x205 = INT32_MAX;
	int64_t x206 = INT64_MAX;
	uint16_t x207 = 14808U;
	volatile int64_t t46 = -6163978956789480LL;

	t46 = (((x205%x206)/x207)/x208);

	if (t46 != 24170LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x209 = UINT16_MAX;
	int8_t x211 = INT8_MIN;
	uint64_t x212 = 587246030LLU;
	volatile uint64_t t47 = 1526LLU;

	t47 = (((x209%x210)/x211)/x212);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x213 = INT8_MAX;
	static uint8_t x214 = 2U;
	static uint64_t x215 = UINT64_MAX;

	t48 = (((x213%x214)/x215)/x216);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = INT32_MAX;
	static volatile int8_t x218 = -1;
	int16_t x220 = -14832;
	volatile int64_t t49 = -461989LL;

	t49 = (((x217%x218)/x219)/x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = -1097;
	int64_t x222 = INT64_MAX;
	int16_t x224 = INT16_MIN;
	volatile int64_t t50 = 8483552225209LL;

	t50 = (((x221%x222)/x223)/x224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = INT16_MIN;
	int32_t x230 = INT32_MAX;
	volatile int64_t x231 = -2507875706999717LL;
	uint16_t x232 = 5U;
	int64_t t51 = -3892LL;

	t51 = (((x229%x230)/x231)/x232);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x234 = 1231;
	int32_t x235 = 54352;
	int64_t x236 = -1LL;
	static volatile int64_t t52 = 11LL;

	t52 = (((x233%x234)/x235)/x236);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x237 = -1352;
	static int8_t x239 = -1;
	uint64_t t53 = 7347399008808246LLU;

	t53 = (((x237%x238)/x239)/x240);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x241 = INT64_MIN;
	volatile int64_t x242 = INT64_MIN;
	volatile int32_t x243 = -1;
	int8_t x244 = INT8_MIN;
	static volatile int64_t t54 = -856609865LL;

	t54 = (((x241%x242)/x243)/x244);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x247 = INT32_MIN;
	volatile uint32_t x248 = 15293U;
	static volatile int64_t t55 = -7399075135729695LL;

	t55 = (((x245%x246)/x247)/x248);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MAX;
	volatile int32_t x250 = INT32_MIN;
	uint32_t x251 = 21U;
	int8_t x252 = INT8_MIN;

	t56 = (((x249%x250)/x251)/x252);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	uint64_t t57 = 6995017998LLU;

	t57 = (((x257%x258)/x259)/x260);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MIN;
	static uint8_t x262 = 66U;
	volatile int16_t x263 = INT16_MAX;
	static int32_t t58 = -1058175889;

	t58 = (((x261%x262)/x263)/x264);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x267 = INT32_MIN;
	static volatile int16_t x268 = INT16_MIN;
	uint32_t t59 = 21937711U;

	t59 = (((x265%x266)/x267)/x268);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -1;
	uint8_t x270 = UINT8_MAX;
	int16_t x271 = -1;
	static uint64_t x272 = 92210397506956762LLU;

	t60 = (((x269%x270)/x271)/x272);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = -1;
	static uint16_t x276 = UINT16_MAX;
	static volatile int32_t t61 = 20;

	t61 = (((x273%x274)/x275)/x276);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = INT64_MAX;
	uint64_t x279 = 2732810978677954097LLU;
	int32_t x280 = -1;
	static volatile uint64_t t62 = 9914800LLU;

	t62 = (((x277%x278)/x279)/x280);

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 8U;
	int32_t x282 = 104819;
	int16_t x283 = 228;
	uint16_t x284 = 115U;
	volatile int32_t t63 = 2730641;

	t63 = (((x281%x282)/x283)/x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x286 = -212;
	int32_t x287 = -1;

	t64 = (((x285%x286)/x287)/x288);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x289 = UINT64_MAX;
	uint32_t x290 = 7779738U;
	static volatile uint64_t t65 = 7LLU;

	t65 = (((x289%x290)/x291)/x292);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x293 = -5807611LL;
	uint16_t x294 = UINT16_MAX;
	static volatile uint8_t x295 = 8U;
	uint32_t x296 = 1145780U;
	volatile int64_t t66 = 15080528148LL;

	t66 = (((x293%x294)/x295)/x296);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x297 = INT16_MAX;
	int32_t x299 = INT32_MIN;
	int64_t x300 = 235276539788LL;
	volatile int64_t t67 = -999400232298467LL;

	t67 = (((x297%x298)/x299)/x300);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x301 = 14U;
	volatile int64_t x303 = INT64_MAX;
	int16_t x304 = INT16_MAX;
	int64_t t68 = -38062339LL;

	t68 = (((x301%x302)/x303)/x304);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x305 = -4291;
	uint8_t x307 = 119U;
	static volatile uint64_t t69 = 529805436674356LLU;

	t69 = (((x305%x306)/x307)/x308);

	if (t69 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x310 = 1U;
	int16_t x311 = INT16_MAX;
	uint16_t x312 = UINT16_MAX;
	uint32_t t70 = 55U;

	t70 = (((x309%x310)/x311)/x312);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x313 = 458U;
	uint8_t x314 = UINT8_MAX;
	uint16_t x315 = 7240U;
	volatile uint32_t x316 = 147U;
	volatile uint32_t t71 = 8U;

	t71 = (((x313%x314)/x315)/x316);

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x317 = 124;
	static int8_t x318 = INT8_MIN;
	int32_t x320 = INT32_MAX;
	uint64_t t72 = 25947404587038LLU;

	t72 = (((x317%x318)/x319)/x320);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = -69857999976469LL;
	volatile uint32_t x322 = 2591U;
	static int32_t x323 = -1;
	uint64_t x324 = 326LLU;
	uint64_t t73 = 227604436749390473LLU;

	t73 = (((x321%x322)/x323)/x324);

	if (t73 != 2LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = UINT16_MAX;
	int32_t x326 = INT32_MIN;
	static uint16_t x328 = 3941U;
	volatile uint64_t t74 = 701602377437874613LLU;

	t74 = (((x325%x326)/x327)/x328);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x329 = INT32_MAX;
	int32_t x330 = INT32_MAX;
	int64_t x331 = -1LL;
	int16_t x332 = INT16_MIN;
	int64_t t75 = 328102LL;

	t75 = (((x329%x330)/x331)/x332);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x333 = INT32_MIN;
	volatile uint8_t x334 = 29U;
	uint64_t x335 = 56119LLU;
	volatile uint64_t t76 = 0LLU;

	t76 = (((x333%x334)/x335)/x336);

	if (t76 != 2588249137302LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x337 = 3154U;
	int64_t x338 = INT64_MIN;
	static uint32_t x339 = UINT32_MAX;
	static int32_t x340 = INT32_MIN;

	t77 = (((x337%x338)/x339)/x340);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x342 = -1;
	int64_t x343 = INT64_MIN;
	static uint8_t x344 = 18U;

	t78 = (((x341%x342)/x343)/x344);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x345 = 371958LLU;
	uint16_t x346 = UINT16_MAX;
	static int8_t x347 = -1;
	int8_t x348 = INT8_MIN;
	volatile uint64_t t79 = 298LLU;

	t79 = (((x345%x346)/x347)/x348);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x349 = 8;
	static volatile int32_t x352 = INT32_MIN;
	volatile uint32_t t80 = 32321192U;

	t80 = (((x349%x350)/x351)/x352);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x354 = 3;
	uint32_t x355 = UINT32_MAX;
	volatile uint32_t t81 = 467818007U;

	t81 = (((x353%x354)/x355)/x356);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x357 = INT8_MIN;
	int64_t x358 = -29208370537053LL;
	int8_t x360 = INT8_MIN;
	int64_t t82 = 1298LL;

	t82 = (((x357%x358)/x359)/x360);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x361 = INT16_MIN;
	uint16_t x362 = UINT16_MAX;
	volatile int32_t x363 = INT32_MAX;
	int64_t x364 = 802990LL;
	volatile int64_t t83 = 2LL;

	t83 = (((x361%x362)/x363)/x364);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x365 = 455242798182901465LL;
	static int8_t x366 = -7;
	int64_t x367 = INT64_MAX;
	int32_t x368 = INT32_MIN;
	static volatile int64_t t84 = -67485667497LL;

	t84 = (((x365%x366)/x367)/x368);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x369 = INT32_MIN;
	int16_t x370 = -7;
	int8_t x371 = -1;

	t85 = (((x369%x370)/x371)/x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x373 = -1;
	uint16_t x374 = UINT16_MAX;
	int8_t x375 = INT8_MIN;

	t86 = (((x373%x374)/x375)/x376);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = 14;
	int64_t x378 = INT64_MIN;
	volatile int64_t x380 = INT64_MIN;
	volatile int64_t t87 = 61047207551988LL;

	t87 = (((x377%x378)/x379)/x380);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MAX;
	volatile uint16_t x388 = 7908U;
	volatile int64_t t88 = -852350221347704LL;

	t88 = (((x385%x386)/x387)/x388);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = -1;
	uint8_t x390 = 13U;
	static uint8_t x392 = 1U;
	static volatile uint64_t t89 = 68LLU;

	t89 = (((x389%x390)/x391)/x392);

	if (t89 != 8LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x393 = UINT64_MAX;
	static uint32_t x394 = UINT32_MAX;
	uint64_t x396 = 13107936LLU;
	uint64_t t90 = 844629252088246032LLU;

	t90 = (((x393%x394)/x395)/x396);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x397 = 211U;
	int16_t x399 = INT16_MAX;
	uint64_t x400 = 1956434062781646049LLU;
	static uint64_t t91 = 826220732584607LLU;

	t91 = (((x397%x398)/x399)/x400);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x403 = 4665887253LL;
	volatile int8_t x404 = INT8_MAX;
	volatile uint64_t t92 = 109893913100635LLU;

	t92 = (((x401%x402)/x403)/x404);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x405 = INT64_MIN;
	int8_t x406 = INT8_MIN;
	int32_t x407 = -1;
	uint8_t x408 = 10U;
	int64_t t93 = -135857450511204LL;

	t93 = (((x405%x406)/x407)/x408);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MAX;
	uint16_t x410 = 471U;
	uint8_t x411 = 12U;
	volatile int64_t x412 = 806403997LL;
	int64_t t94 = -4796070108505LL;

	t94 = (((x409%x410)/x411)/x412);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x414 = -1;
	int32_t x415 = 14673;
	volatile uint32_t x416 = UINT32_MAX;
	static int64_t t95 = 177615910LL;

	t95 = (((x413%x414)/x415)/x416);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x417 = INT32_MIN;
	int32_t x418 = INT32_MAX;
	int32_t x419 = -1915;
	volatile int64_t x420 = INT64_MIN;

	t96 = (((x417%x418)/x419)/x420);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MIN;
	int32_t x422 = -454643;
	int64_t x423 = INT64_MAX;
	volatile int32_t x424 = INT32_MIN;
	volatile int64_t t97 = 1544447916307567271LL;

	t97 = (((x421%x422)/x423)/x424);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x425 = 7U;
	int32_t x427 = INT32_MIN;
	static int32_t x428 = 257233607;
	volatile int64_t t98 = 58162295127379336LL;

	t98 = (((x425%x426)/x427)/x428);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x429 = UINT16_MAX;
	volatile int8_t x430 = -26;
	static volatile int64_t x431 = INT64_MIN;
	int32_t x432 = INT32_MAX;
	volatile int64_t t99 = 342390107425LL;

	t99 = (((x429%x430)/x431)/x432);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

