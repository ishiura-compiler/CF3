#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 3976U;
static int8_t x4 = INT8_MIN;
volatile int16_t x6 = INT16_MAX;
int8_t x8 = -12;
uint32_t x10 = 8069U;
int8_t x14 = -2;
static uint16_t x15 = 1U;
static int32_t x19 = -17;
int32_t t5 = -101137341;
uint32_t x37 = 41562763U;
int32_t x51 = INT32_MIN;
volatile int32_t t13 = 15;
int16_t x70 = 355;
int64_t x83 = -1LL;
volatile int32_t t17 = -1564;
uint16_t x92 = 1673U;
int16_t x114 = INT16_MIN;
int32_t x115 = INT32_MIN;
static volatile uint64_t x142 = 285589513686417625LLU;
uint8_t x143 = 4U;
static int32_t x146 = -1;
int8_t x147 = -1;
uint8_t x152 = UINT8_MAX;
static uint64_t x156 = UINT64_MAX;
int8_t x163 = -1;
volatile int32_t t34 = -88;
int8_t x166 = INT8_MIN;
int16_t x168 = 11;
uint8_t x171 = UINT8_MAX;
volatile uint32_t x172 = UINT32_MAX;
volatile int8_t x175 = -1;
volatile int32_t t37 = 1;
int32_t t39 = 113279;
uint16_t x189 = 206U;
static uint8_t x191 = UINT8_MAX;
int32_t x193 = -1;
uint32_t x210 = 444723U;
int8_t x211 = INT8_MAX;
static volatile uint16_t x213 = 5U;
int8_t x223 = INT8_MAX;
volatile int32_t t47 = 2;
int16_t x228 = 2898;
int32_t x235 = INT32_MAX;
int32_t x236 = INT32_MAX;
static int16_t x253 = INT16_MIN;
volatile int64_t x254 = -1LL;
volatile int32_t x261 = -1;
uint16_t x264 = 5U;
int8_t x269 = 32;
volatile int32_t t56 = -57475;
volatile int32_t t60 = 1;
int16_t x307 = -90;
uint64_t x318 = 1645053LLU;
volatile int32_t t63 = 22628883;
static uint16_t x323 = UINT16_MAX;
int64_t x327 = 488LL;
int32_t t65 = 35976004;
int8_t x343 = INT8_MIN;
static volatile int32_t x345 = 0;
volatile int32_t x346 = -24346666;
volatile int32_t x347 = -1;
uint64_t x349 = UINT64_MAX;
int16_t x353 = -1;
volatile int8_t x364 = -6;
static int8_t x376 = 1;
volatile int32_t x384 = 3535;
int16_t x396 = 9;
int8_t x397 = INT8_MIN;
volatile uint16_t x399 = 7U;
volatile int8_t x418 = INT8_MIN;
uint8_t x436 = UINT8_MAX;
int64_t x443 = -1777754LL;
int32_t t83 = 2148981;
volatile int32_t t85 = -540;
int64_t x453 = -1636215659365773LL;
uint64_t x463 = UINT64_MAX;
static uint8_t x466 = UINT8_MAX;
static uint16_t x479 = 12374U;
uint64_t x491 = 73784LLU;
uint64_t x493 = UINT64_MAX;
uint64_t x496 = 2178LLU;
static int32_t x499 = INT32_MIN;
volatile uint64_t x500 = 27511900024LLU;
int8_t x505 = INT8_MIN;
uint8_t x510 = 1U;
int32_t x515 = INT32_MAX;
int16_t x518 = -1;
static int32_t t97 = 22083103;
uint16_t x524 = 1671U;
static uint16_t x533 = 11445U;
static int64_t x536 = -1LL;
int32_t t99 = -318;


void f0(void) {
	volatile int64_t x1 = -1LL;
	static int64_t x2 = -1LL;
	volatile int32_t t0 = 15139652;

	t0 = (((x1*x2)/x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 12U;
	volatile int64_t x7 = INT64_MAX;
	static int32_t t1 = 77166396;

	t1 = (((x5*x6)/x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	static int8_t x11 = -1;
	int16_t x12 = -1;
	volatile int32_t t2 = 5;

	t2 = (((x9*x10)/x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = 6;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = -2700777;

	t3 = (((x13*x14)/x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 51U;
	static int32_t x18 = -1;
	uint8_t x20 = 3U;
	int32_t t4 = -259;

	t4 = (((x17*x18)/x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 1505909044937039LL;
	uint32_t x22 = 0U;
	uint16_t x23 = 2242U;
	int32_t x24 = -49476268;

	t5 = (((x21*x22)/x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	int8_t x26 = 10;
	uint16_t x27 = 119U;
	int16_t x28 = INT16_MAX;
	int32_t t6 = 18322;

	t6 = (((x25*x26)/x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 182LLU;
	int16_t x30 = -212;
	uint8_t x31 = UINT8_MAX;
	uint8_t x32 = 6U;
	int32_t t7 = -171;

	t7 = (((x29*x30)/x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MIN;
	int32_t x39 = INT32_MIN;
	volatile int16_t x40 = -1;
	static int32_t t8 = -170;

	t8 = (((x37*x38)/x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -10;
	int8_t x42 = 29;
	static volatile int64_t x43 = INT64_MIN;
	int16_t x44 = 0;
	int32_t t9 = -245385562;

	t9 = (((x41*x42)/x43)<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x45 = 109U;
	static int64_t x46 = 22466274950119LL;
	int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MAX;
	volatile int32_t t10 = 625;

	t10 = (((x45*x46)/x47)<x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	int8_t x50 = -1;
	uint16_t x52 = UINT16_MAX;
	int32_t t11 = -142529;

	t11 = (((x49*x50)/x51)<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x53 = UINT8_MAX;
	uint64_t x54 = 51014LLU;
	uint16_t x55 = UINT16_MAX;
	volatile uint16_t x56 = 2U;
	int32_t t12 = -79398988;

	t12 = (((x53*x54)/x55)<x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	int16_t x59 = -477;
	int64_t x60 = INT64_MAX;

	t13 = (((x57*x58)/x59)<x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	int32_t x72 = -542;
	static volatile int32_t t14 = -547208837;

	t14 = (((x69*x70)/x71)<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = 8103662582024LL;
	int16_t x74 = -25;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = INT64_MAX;
	volatile int32_t t15 = 198;

	t15 = (((x73*x74)/x75)<x76);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 0U;
	uint32_t x78 = 1119356U;
	uint64_t x79 = 1LLU;
	uint64_t x80 = 82365650180293LLU;
	static volatile int32_t t16 = -383925645;

	t16 = (((x77*x78)/x79)<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = 8;
	int16_t x82 = 2;
	int8_t x84 = -1;

	t17 = (((x81*x82)/x83)<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 1836;
	int32_t x86 = -1;
	uint64_t x87 = 28842LLU;
	uint8_t x88 = UINT8_MAX;
	int32_t t18 = -7261799;

	t18 = (((x85*x86)/x87)<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 300U;
	volatile int8_t x90 = INT8_MAX;
	int32_t x91 = INT32_MIN;
	volatile int32_t t19 = -1913370;

	t19 = (((x89*x90)/x91)<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	static int16_t x94 = INT16_MAX;
	uint32_t x95 = 59139504U;
	static volatile uint32_t x96 = 244U;
	volatile int32_t t20 = -351;

	t20 = (((x93*x94)/x95)<x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = 943;
	uint16_t x98 = 58U;
	int16_t x99 = INT16_MAX;
	static volatile int16_t x100 = INT16_MIN;
	volatile int32_t t21 = 58466405;

	t21 = (((x97*x98)/x99)<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = UINT8_MAX;
	static int64_t x110 = 11869LL;
	volatile uint32_t x111 = UINT32_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t22 = 1;

	t22 = (((x109*x110)/x111)<x112);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = INT16_MIN;
	static int8_t x116 = -1;
	static int32_t t23 = 1;

	t23 = (((x113*x114)/x115)<x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 24274164U;
	volatile uint64_t x118 = 6503635581399930696LLU;
	static int16_t x119 = -15146;
	int32_t x120 = INT32_MAX;
	int32_t t24 = -3811;

	t24 = (((x117*x118)/x119)<x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = -1LL;
	int16_t x123 = 1;
	static int64_t x124 = INT64_MIN;
	static int32_t t25 = -5073;

	t25 = (((x121*x122)/x123)<x124);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = -653213368386LL;
	int32_t x127 = INT32_MIN;
	static int64_t x128 = INT64_MIN;
	static int32_t t26 = 1;

	t26 = (((x125*x126)/x127)<x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x133 = 31U;
	volatile int16_t x134 = -1;
	int8_t x135 = INT8_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t27 = -21;

	t27 = (((x133*x134)/x135)<x136);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = -1;
	static uint32_t x138 = 29432U;
	int16_t x139 = INT16_MIN;
	uint16_t x140 = 19U;
	static int32_t t28 = 3227;

	t28 = (((x137*x138)/x139)<x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x141 = INT32_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t29 = 3949;

	t29 = (((x141*x142)/x143)<x144);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x145 = 68577950486974127LLU;
	static volatile int64_t x148 = 21227368938425648LL;
	volatile int32_t t30 = 48323;

	t30 = (((x145*x146)/x147)<x148);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 5703424U;
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MIN;
	int32_t t31 = 0;

	t31 = (((x149*x150)/x151)<x152);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x153 = 1086992U;
	volatile uint8_t x154 = UINT8_MAX;
	int32_t x155 = INT32_MIN;
	int32_t t32 = 31;

	t32 = (((x153*x154)/x155)<x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = 25;
	static uint32_t x158 = 272388U;
	volatile int8_t x159 = -1;
	int32_t x160 = 278;
	volatile int32_t t33 = 91;

	t33 = (((x157*x158)/x159)<x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = 80U;
	uint8_t x162 = UINT8_MAX;
	volatile int8_t x164 = INT8_MIN;

	t34 = (((x161*x162)/x163)<x164);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 111U;
	uint32_t x167 = 43273889U;
	volatile int32_t t35 = 113554;

	t35 = (((x165*x166)/x167)<x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = -1;
	volatile uint8_t x170 = 0U;
	volatile int32_t t36 = 212406;

	t36 = (((x169*x170)/x171)<x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x173 = UINT64_MAX;
	int8_t x174 = -29;
	volatile int8_t x176 = -13;

	t37 = (((x173*x174)/x175)<x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x177 = 12;
	uint16_t x178 = 47U;
	int8_t x179 = INT8_MAX;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t38 = 81949502;

	t38 = (((x177*x178)/x179)<x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = UINT64_MAX;
	uint8_t x182 = 11U;
	volatile uint8_t x183 = 43U;
	volatile uint64_t x184 = UINT64_MAX;

	t39 = (((x181*x182)/x183)<x184);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x190 = UINT8_MAX;
	int8_t x192 = INT8_MAX;
	volatile int32_t t40 = -183;

	t40 = (((x189*x190)/x191)<x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = -1;
	static volatile int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MIN;
	int32_t t41 = 16769576;

	t41 = (((x193*x194)/x195)<x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x197 = 1207U;
	static int16_t x198 = INT16_MAX;
	static volatile int8_t x199 = INT8_MIN;
	uint16_t x200 = UINT16_MAX;
	int32_t t42 = 808;

	t42 = (((x197*x198)/x199)<x200);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = -1;
	volatile uint16_t x202 = 795U;
	int16_t x203 = INT16_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t43 = 12;

	t43 = (((x201*x202)/x203)<x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x209 = 56745LLU;
	int64_t x212 = INT64_MIN;
	static int32_t t44 = -17687711;

	t44 = (((x209*x210)/x211)<x212);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	static uint64_t x216 = UINT64_MAX;
	int32_t t45 = 201167;

	t45 = (((x213*x214)/x215)<x216);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x217 = INT8_MIN;
	uint64_t x218 = 855345LLU;
	static volatile int32_t x219 = INT32_MIN;
	uint32_t x220 = 7648349U;
	volatile int32_t t46 = -470688052;

	t46 = (((x217*x218)/x219)<x220);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x221 = INT8_MIN;
	static uint8_t x222 = 2U;
	int32_t x224 = INT32_MAX;

	t47 = (((x221*x222)/x223)<x224);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = 1703163LLU;
	volatile uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	volatile int32_t t48 = -1;

	t48 = (((x225*x226)/x227)<x228);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = 514272285472LLU;
	int64_t x230 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	volatile int32_t x232 = -1;
	volatile int32_t t49 = -1;

	t49 = (((x229*x230)/x231)<x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = UINT32_MAX;
	volatile int32_t x234 = INT32_MIN;
	int32_t t50 = 86577788;

	t50 = (((x233*x234)/x235)<x236);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x249 = 0U;
	int64_t x250 = INT64_MIN;
	uint16_t x251 = UINT16_MAX;
	static uint32_t x252 = UINT32_MAX;
	volatile int32_t t51 = 0;

	t51 = (((x249*x250)/x251)<x252);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x255 = INT8_MIN;
	static volatile uint8_t x256 = 1U;
	int32_t t52 = 6025087;

	t52 = (((x253*x254)/x255)<x256);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = -1LL;
	int32_t x258 = -466534;
	volatile int32_t x259 = INT32_MIN;
	static int16_t x260 = -1;
	volatile int32_t t53 = 2365;

	t53 = (((x257*x258)/x259)<x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x262 = 3;
	uint8_t x263 = 1U;
	static volatile int32_t t54 = -15009085;

	t54 = (((x261*x262)/x263)<x264);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MAX;
	volatile uint32_t x267 = UINT32_MAX;
	int32_t x268 = INT32_MIN;
	int32_t t55 = 61747;

	t55 = (((x265*x266)/x267)<x268);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x270 = 279U;
	uint64_t x271 = 4396658231603339095LLU;
	volatile int16_t x272 = 0;

	t56 = (((x269*x270)/x271)<x272);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x277 = 16U;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -25;
	int64_t x280 = INT64_MIN;
	int32_t t57 = 61594;

	t57 = (((x277*x278)/x279)<x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x289 = 1;
	int32_t x290 = -20643;
	uint8_t x291 = 5U;
	uint32_t x292 = 702626510U;
	volatile int32_t t58 = 1;

	t58 = (((x289*x290)/x291)<x292);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x297 = 23LLU;
	volatile uint16_t x298 = 1859U;
	volatile int8_t x299 = 1;
	volatile uint32_t x300 = 1678886U;
	volatile int32_t t59 = -65213;

	t59 = (((x297*x298)/x299)<x300);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = -1;
	static int64_t x302 = INT64_MAX;
	uint64_t x303 = 85784281LLU;
	int16_t x304 = 16;

	t60 = (((x301*x302)/x303)<x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x305 = UINT32_MAX;
	volatile int32_t x306 = 1130;
	static volatile int64_t x308 = -1937776LL;
	int32_t t61 = 51410;

	t61 = (((x305*x306)/x307)<x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = -386;
	volatile int16_t x310 = INT16_MAX;
	int32_t x311 = INT32_MIN;
	static volatile int8_t x312 = INT8_MIN;
	static int32_t t62 = -35694;

	t62 = (((x309*x310)/x311)<x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x317 = -1LL;
	static uint64_t x319 = UINT64_MAX;
	static uint16_t x320 = 8U;

	t63 = (((x317*x318)/x319)<x320);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x321 = INT64_MAX;
	int16_t x322 = -1;
	int32_t x324 = INT32_MAX;
	volatile int32_t t64 = -250960840;

	t64 = (((x321*x322)/x323)<x324);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x325 = 30667212946556673LLU;
	int32_t x326 = INT32_MIN;
	uint32_t x328 = 19098U;

	t65 = (((x325*x326)/x327)<x328);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x341 = UINT16_MAX;
	static volatile int16_t x342 = -27;
	uint32_t x344 = 9U;
	int32_t t66 = 278149381;

	t66 = (((x341*x342)/x343)<x344);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x348 = INT16_MIN;
	int32_t t67 = -484968611;

	t67 = (((x345*x346)/x347)<x348);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x350 = 259966LL;
	static int64_t x351 = -1LL;
	int32_t x352 = -28918;
	volatile int32_t t68 = 264897533;

	t68 = (((x349*x350)/x351)<x352);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x354 = 7U;
	uint8_t x355 = 1U;
	int32_t x356 = INT32_MAX;
	int32_t t69 = -9174534;

	t69 = (((x353*x354)/x355)<x356);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = INT8_MIN;
	volatile int32_t x358 = 10408835;
	volatile int32_t x359 = -1;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t70 = 88756403;

	t70 = (((x357*x358)/x359)<x360);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x361 = -1;
	int64_t x362 = 669010536417639LL;
	int32_t x363 = INT32_MIN;
	int32_t t71 = -35449816;

	t71 = (((x361*x362)/x363)<x364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x365 = 2U;
	int16_t x366 = -1221;
	volatile int8_t x367 = -1;
	static uint8_t x368 = 32U;
	static int32_t t72 = 122499334;

	t72 = (((x365*x366)/x367)<x368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x373 = INT64_MIN;
	static volatile int16_t x374 = 1;
	int32_t x375 = 5126;
	volatile int32_t t73 = 56121710;

	t73 = (((x373*x374)/x375)<x376);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x381 = -1LL;
	static uint8_t x382 = 7U;
	int32_t x383 = -52;
	volatile int32_t t74 = 0;

	t74 = (((x381*x382)/x383)<x384);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x393 = 24468029LLU;
	int32_t x394 = -95903;
	int32_t x395 = INT32_MIN;
	int32_t t75 = 1;

	t75 = (((x393*x394)/x395)<x396);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x398 = -1LL;
	static int16_t x400 = INT16_MIN;
	int32_t t76 = -1901916;

	t76 = (((x397*x398)/x399)<x400);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x401 = INT32_MAX;
	uint64_t x402 = 22LLU;
	uint16_t x403 = UINT16_MAX;
	volatile int16_t x404 = INT16_MIN;
	volatile int32_t t77 = -107379;

	t77 = (((x401*x402)/x403)<x404);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x409 = -351;
	static volatile uint8_t x410 = 45U;
	volatile int16_t x411 = -17;
	static int32_t x412 = INT32_MAX;
	volatile int32_t t78 = 6434;

	t78 = (((x409*x410)/x411)<x412);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x413 = INT32_MAX;
	int8_t x414 = -1;
	int32_t x415 = 53023461;
	volatile uint64_t x416 = 394377944619287174LLU;
	volatile int32_t t79 = 16788481;

	t79 = (((x413*x414)/x415)<x416);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x417 = -1LL;
	int64_t x419 = -8375320343LL;
	volatile int8_t x420 = INT8_MAX;
	int32_t t80 = -12598721;

	t80 = (((x417*x418)/x419)<x420);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x433 = UINT32_MAX;
	int64_t x434 = -1LL;
	volatile uint64_t x435 = 1417618778LLU;
	volatile int32_t t81 = 1;

	t81 = (((x433*x434)/x435)<x436);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x437 = 3611U;
	int16_t x438 = INT16_MIN;
	uint8_t x439 = 112U;
	static int8_t x440 = -1;
	volatile int32_t t82 = -1300034;

	t82 = (((x437*x438)/x439)<x440);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x441 = INT8_MIN;
	static volatile uint16_t x442 = 2334U;
	int16_t x444 = INT16_MIN;

	t83 = (((x441*x442)/x443)<x444);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = 2816LL;
	int16_t x446 = INT16_MIN;
	static int8_t x447 = 2;
	volatile uint16_t x448 = 2674U;
	volatile int32_t t84 = 91;

	t84 = (((x445*x446)/x447)<x448);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x449 = 1073U;
	int8_t x450 = INT8_MAX;
	int32_t x451 = INT32_MIN;
	uint32_t x452 = 1U;

	t85 = (((x449*x450)/x451)<x452);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x454 = UINT64_MAX;
	int8_t x455 = INT8_MAX;
	int32_t x456 = -1;
	static volatile int32_t t86 = -4012;

	t86 = (((x453*x454)/x455)<x456);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x461 = -5202;
	uint32_t x462 = 805U;
	uint8_t x464 = 63U;
	volatile int32_t t87 = 397565587;

	t87 = (((x461*x462)/x463)<x464);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x465 = 1703894;
	int32_t x467 = -1;
	int32_t x468 = INT32_MIN;
	static int32_t t88 = 992;

	t88 = (((x465*x466)/x467)<x468);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x477 = 11214U;
	uint16_t x478 = UINT16_MAX;
	int64_t x480 = INT64_MIN;
	int32_t t89 = -7;

	t89 = (((x477*x478)/x479)<x480);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x481 = UINT32_MAX;
	uint64_t x482 = 193174371436LLU;
	uint16_t x483 = UINT16_MAX;
	uint32_t x484 = 278U;
	static volatile int32_t t90 = -252952192;

	t90 = (((x481*x482)/x483)<x484);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x489 = INT8_MIN;
	volatile int16_t x490 = INT16_MIN;
	int16_t x492 = INT16_MAX;
	volatile int32_t t91 = -33255165;

	t91 = (((x489*x490)/x491)<x492);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x494 = 13172513LLU;
	volatile int32_t x495 = -1;
	volatile int32_t t92 = 1329;

	t92 = (((x493*x494)/x495)<x496);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x497 = 6809950U;
	static uint64_t x498 = 767634LLU;
	volatile int32_t t93 = 66;

	t93 = (((x497*x498)/x499)<x500);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x506 = INT8_MIN;
	int64_t x507 = -1LL;
	uint32_t x508 = UINT32_MAX;
	volatile int32_t t94 = 128052043;

	t94 = (((x505*x506)/x507)<x508);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x509 = 2577U;
	int32_t x511 = -5103403;
	int32_t x512 = INT32_MIN;
	int32_t t95 = 163;

	t95 = (((x509*x510)/x511)<x512);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x513 = -1;
	volatile int16_t x514 = INT16_MIN;
	int32_t x516 = INT32_MIN;
	volatile int32_t t96 = 590843;

	t96 = (((x513*x514)/x515)<x516);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x517 = 231U;
	uint32_t x519 = 117870857U;
	static volatile int16_t x520 = -1;

	t97 = (((x517*x518)/x519)<x520);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x521 = -1LL;
	uint32_t x522 = 49U;
	int64_t x523 = 30060651LL;
	int32_t t98 = 130889356;

	t98 = (((x521*x522)/x523)<x524);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x534 = 24172421U;
	static uint64_t x535 = 827712214346673LLU;

	t99 = (((x533*x534)/x535)<x536);

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

