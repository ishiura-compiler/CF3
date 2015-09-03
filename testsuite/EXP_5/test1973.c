#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = UINT32_MAX;
int32_t t3 = 2913646;
int16_t x24 = INT16_MIN;
uint8_t x26 = 17U;
int32_t x27 = INT32_MAX;
static uint16_t x34 = 415U;
volatile uint32_t x50 = UINT32_MAX;
volatile uint64_t x52 = 1017934LLU;
uint32_t x56 = 60100440U;
uint64_t x58 = UINT64_MAX;
uint8_t x59 = UINT8_MAX;
int64_t x60 = -1LL;
uint64_t x62 = 57506824881614LLU;
volatile int32_t t16 = 196293735;
int64_t x76 = -1LL;
volatile int32_t t18 = -4411965;
static int64_t x83 = -12174854150LL;
int8_t x84 = INT8_MIN;
volatile int64_t x86 = -15871339LL;
volatile int16_t x93 = 236;
static int32_t t24 = -4773975;
int64_t x103 = 5578LL;
volatile int64_t x104 = INT64_MIN;
int32_t x108 = INT32_MAX;
int32_t t26 = 15115051;
volatile uint8_t x111 = 100U;
int8_t x114 = INT8_MIN;
static volatile int32_t t29 = 1356;
int8_t x124 = -1;
int8_t x125 = -1;
volatile int32_t t31 = 13291;
volatile int8_t x135 = 3;
int16_t x139 = -1;
static int32_t t34 = 238158223;
int32_t x141 = INT32_MIN;
int8_t x142 = INT8_MIN;
int8_t x149 = 22;
volatile int32_t t37 = -26746599;
static volatile uint8_t x161 = UINT8_MAX;
int32_t x166 = INT32_MAX;
volatile uint8_t x167 = 26U;
volatile int32_t t43 = -1527651;
volatile int32_t t44 = 1303;
int16_t x182 = -1;
uint16_t x186 = 2U;
uint8_t x187 = 3U;
uint32_t x188 = UINT32_MAX;
static int32_t t47 = -74;
static int64_t x204 = -194575LL;
uint64_t x206 = UINT64_MAX;
volatile int32_t t51 = -875;
int32_t x209 = -1;
static volatile int8_t x222 = INT8_MIN;
uint8_t x223 = 25U;
uint32_t x226 = 178436740U;
volatile int32_t x239 = -8338;
int16_t x241 = -6;
uint16_t x250 = 1U;
static uint64_t x251 = 1320LLU;
volatile int16_t x253 = INT16_MAX;
uint8_t x258 = 0U;
int64_t x260 = INT64_MAX;
uint64_t x267 = UINT64_MAX;
int32_t x269 = -1;
int8_t x273 = -1;
static int64_t x279 = INT64_MAX;
static uint16_t x280 = 141U;
static uint32_t x283 = 26U;
static int32_t t70 = 1095500;
static int32_t t71 = -54;
int8_t x290 = -19;
int16_t x291 = INT16_MIN;
uint32_t x295 = UINT32_MAX;
volatile uint16_t x299 = 3351U;
uint16_t x300 = 7766U;
int64_t x301 = 423999148877865LL;
int16_t x304 = INT16_MIN;
int32_t t75 = 1276;
static volatile int8_t x309 = -3;
volatile int8_t x315 = 13;
static volatile int8_t x317 = 1;
int8_t x318 = INT8_MIN;
volatile uint64_t x321 = 158LLU;
int32_t t82 = -1;
volatile uint16_t x334 = 0U;
volatile int32_t x340 = 236;
static uint8_t x342 = 59U;
int64_t x343 = INT64_MIN;
volatile int32_t t85 = -17157033;
static uint32_t x352 = 1986093U;
uint64_t x354 = UINT64_MAX;
int8_t x355 = INT8_MIN;
static int16_t x362 = 2808;
int8_t x370 = 30;
volatile uint64_t x371 = UINT64_MAX;
int64_t x373 = INT64_MIN;
int8_t x377 = INT8_MIN;
int32_t x380 = -1;
static uint64_t x384 = 121624129825LLU;
uint8_t x387 = 56U;
uint32_t x395 = UINT32_MAX;
int32_t t99 = 0;


void f0(void) {
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 7671564116015LLU;
	uint64_t x4 = 178721589212LLU;
	volatile int32_t t0 = 193720738;

	t0 = (x1<=((x2|x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MAX;
	int8_t x7 = -44;
	uint8_t x8 = 70U;
	volatile int32_t t1 = 2580;

	t1 = (x5<=((x6|x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 2;
	int8_t x10 = -10;
	int32_t x11 = INT32_MAX;
	int64_t x12 = 0LL;
	int32_t t2 = -108975;

	t2 = (x9<=((x10|x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	static uint16_t x14 = 6179U;
	int8_t x15 = INT8_MAX;
	int16_t x16 = -1;

	t3 = (x13<=((x14|x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 6769U;
	volatile int64_t x18 = INT64_MIN;
	static int8_t x19 = INT8_MAX;
	volatile int32_t x20 = INT32_MAX;
	int32_t t4 = -111544;

	t4 = (x17<=((x18|x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = -3;
	volatile int16_t x22 = INT16_MAX;
	volatile int8_t x23 = 16;
	volatile int32_t t5 = -3670338;

	t5 = (x21<=((x22|x23)<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x28 = -1LL;
	volatile int32_t t6 = -77828323;

	t6 = (x25<=((x26|x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static uint16_t x30 = UINT16_MAX;
	int64_t x31 = INT64_MIN;
	int32_t x32 = 13;
	volatile int32_t t7 = 152397;

	t7 = (x29<=((x30|x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = UINT16_MAX;
	int32_t x35 = INT32_MIN;
	int16_t x36 = -4;
	volatile int32_t t8 = 9379;

	t8 = (x33<=((x34|x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 54288404599300LL;
	static volatile int16_t x38 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	volatile int64_t x40 = -80737652LL;
	int32_t t9 = -52432644;

	t9 = (x37<=((x38|x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int16_t x42 = -17;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = 973950U;
	volatile int32_t t10 = 642196348;

	t10 = (x41<=((x42|x43)<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	int32_t x47 = INT32_MAX;
	int32_t x48 = -6612685;
	volatile int32_t t11 = 14533548;

	t11 = (x45<=((x46|x47)<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int64_t x51 = -2048517352715LL;
	int32_t t12 = 0;

	t12 = (x49<=((x50|x51)<x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int8_t x54 = INT8_MIN;
	int64_t x55 = -1LL;
	volatile int32_t t13 = -411249;

	t13 = (x53<=((x54|x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static int32_t t14 = -174881204;

	t14 = (x57<=((x58|x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x63 = INT8_MAX;
	uint16_t x64 = 4043U;
	volatile int32_t t15 = 17156217;

	t15 = (x61<=((x62|x63)<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 63U;
	int16_t x66 = INT16_MIN;
	volatile int16_t x67 = -1;
	static int16_t x68 = 9094;

	t16 = (x65<=((x66|x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -373083260;
	int32_t x70 = -1;
	volatile int16_t x71 = -17;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = -3644;

	t17 = (x69<=((x70|x71)<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint64_t x74 = 39312448LLU;
	int32_t x75 = 3838;

	t18 = (x73<=((x74|x75)<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 1;
	volatile uint8_t x78 = UINT8_MAX;
	int64_t x79 = 292LL;
	uint32_t x80 = 57U;
	int32_t t19 = -19610855;

	t19 = (x77<=((x78|x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -7619515819LL;
	int64_t x82 = -1LL;
	static volatile int32_t t20 = -133627025;

	t20 = (x81<=((x82|x83)<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static uint8_t x87 = 79U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = 332454730;

	t21 = (x85<=((x86|x87)<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -33432022LL;
	static uint32_t x90 = UINT32_MAX;
	int16_t x91 = INT16_MIN;
	uint8_t x92 = UINT8_MAX;
	static volatile int32_t t22 = -246068634;

	t22 = (x89<=((x90|x91)<x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MIN;
	int32_t x95 = 259123;
	int32_t x96 = INT32_MAX;
	static volatile int32_t t23 = 10904211;

	t23 = (x93<=((x94|x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	static int64_t x98 = -1110018536460787884LL;
	uint64_t x99 = 4499068733LLU;
	volatile int32_t x100 = -1;

	t24 = (x97<=((x98|x99)<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	static uint32_t x102 = UINT32_MAX;
	int32_t t25 = 25;

	t25 = (x101<=((x102|x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	uint16_t x106 = 440U;
	int16_t x107 = INT16_MAX;

	t26 = (x105<=((x106|x107)<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 62218688LLU;
	int16_t x110 = 30;
	int64_t x112 = -713898LL;
	volatile int32_t t27 = -440046864;

	t27 = (x109<=((x110|x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	int64_t x115 = -334245484LL;
	int64_t x116 = INT64_MIN;
	int32_t t28 = -30;

	t28 = (x113<=((x114|x115)<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	static volatile uint8_t x118 = 4U;
	uint32_t x119 = 123722U;
	uint16_t x120 = UINT16_MAX;

	t29 = (x117<=((x118|x119)<x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MAX;
	int32_t t30 = -2791;

	t30 = (x121<=((x122|x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MAX;
	int32_t x127 = 1;
	uint16_t x128 = 10796U;

	t31 = (x125<=((x126|x127)<x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = -416;
	static int8_t x130 = 11;
	uint32_t x131 = 244U;
	uint32_t x132 = 26960U;
	int32_t t32 = -173340150;

	t32 = (x129<=((x130|x131)<x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 148432828U;
	volatile uint8_t x134 = 4U;
	int64_t x136 = INT64_MIN;
	int32_t t33 = -46774089;

	t33 = (x133<=((x134|x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 11122U;
	volatile int8_t x138 = INT8_MAX;
	int8_t x140 = INT8_MIN;

	t34 = (x137<=((x138|x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x143 = -1;
	int64_t x144 = INT64_MIN;
	int32_t t35 = -62;

	t35 = (x141<=((x142|x143)<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 47466781U;
	int32_t x146 = INT32_MAX;
	uint16_t x147 = 22559U;
	uint16_t x148 = 14U;
	static int32_t t36 = 126815613;

	t36 = (x145<=((x146|x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MIN;
	int64_t x151 = -1LL;
	uint32_t x152 = 9164U;

	t37 = (x149<=((x150|x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 2802391067576423LL;
	int8_t x154 = INT8_MIN;
	int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;
	int32_t t38 = -67437951;

	t38 = (x153<=((x154|x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	int32_t x158 = 27585;
	int64_t x159 = -2928972834577482LL;
	int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 342;

	t39 = (x157<=((x158|x159)<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x162 = INT16_MIN;
	uint64_t x163 = 15450323641821LLU;
	static int8_t x164 = -5;
	volatile int32_t t40 = 1857482;

	t40 = (x161<=((x162|x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 4U;
	uint32_t x168 = 504089145U;
	volatile int32_t t41 = 0;

	t41 = (x165<=((x166|x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t x170 = INT32_MAX;
	int8_t x171 = INT8_MIN;
	uint32_t x172 = UINT32_MAX;
	int32_t t42 = -54092702;

	t42 = (x169<=((x170|x171)<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = -8;
	static volatile int16_t x174 = INT16_MIN;
	volatile uint8_t x175 = UINT8_MAX;
	volatile uint32_t x176 = UINT32_MAX;

	t43 = (x173<=((x174|x175)<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = -1;
	static int64_t x178 = INT64_MIN;
	uint16_t x179 = 6376U;
	volatile int8_t x180 = -1;

	t44 = (x177<=((x178|x179)<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MIN;
	int32_t x183 = INT32_MIN;
	int16_t x184 = -3781;
	static int32_t t45 = 1053;

	t45 = (x181<=((x182|x183)<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 10;
	int32_t t46 = -3893;

	t46 = (x185<=((x186|x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 103352845U;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;

	t47 = (x189<=((x190|x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -365;
	int16_t x194 = -1;
	volatile int8_t x195 = INT8_MIN;
	int8_t x196 = -1;
	static volatile int32_t t48 = 2816;

	t48 = (x193<=((x194|x195)<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 547518057521899410LLU;
	int8_t x198 = INT8_MIN;
	static volatile int8_t x199 = INT8_MIN;
	int16_t x200 = -1;
	static volatile int32_t t49 = 46;

	t49 = (x197<=((x198|x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 12U;
	volatile int32_t x202 = INT32_MAX;
	int32_t x203 = INT32_MAX;
	volatile int32_t t50 = -76266;

	t50 = (x201<=((x202|x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = UINT16_MAX;

	t51 = (x205<=((x206|x207)<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = INT64_MAX;
	int64_t x211 = INT64_MIN;
	int16_t x212 = 8;
	int32_t t52 = 2;

	t52 = (x209<=((x210|x211)<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	uint32_t x214 = 41518U;
	static int64_t x215 = 370420118LL;
	static int64_t x216 = -11687887LL;
	static int32_t t53 = -4942799;

	t53 = (x213<=((x214|x215)<x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x217 = 2398294U;
	int32_t x218 = -75258931;
	int16_t x219 = -1;
	volatile int32_t x220 = -1;
	static volatile int32_t t54 = -211878;

	t54 = (x217<=((x218|x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = INT64_MIN;
	uint8_t x224 = 4U;
	int32_t t55 = 13237;

	t55 = (x221<=((x222|x223)<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint32_t x225 = 911U;
	uint32_t x227 = UINT32_MAX;
	int64_t x228 = -1LL;
	volatile int32_t t56 = -7277;

	t56 = (x225<=((x226|x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	int8_t x230 = -1;
	uint64_t x231 = 228478851004123983LLU;
	volatile uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = -28632;

	t57 = (x229<=((x230|x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	uint64_t x234 = 182371324LLU;
	int8_t x235 = -2;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t58 = 49177;

	t58 = (x233<=((x234|x235)<x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	static uint8_t x238 = 1U;
	volatile int32_t x240 = -1;
	volatile int32_t t59 = 1031444;

	t59 = (x237<=((x238|x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x242 = 1292484281457LL;
	int32_t x243 = -120634602;
	int16_t x244 = INT16_MAX;
	static int32_t t60 = 837;

	t60 = (x241<=((x242|x243)<x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -17625418299LL;
	volatile int16_t x246 = -1;
	volatile uint16_t x247 = UINT16_MAX;
	uint16_t x248 = 1U;
	int32_t t61 = -14;

	t61 = (x245<=((x246|x247)<x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = INT64_MAX;
	int64_t x252 = INT64_MIN;
	static volatile int32_t t62 = 3;

	t62 = (x249<=((x250|x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x254 = 0U;
	int64_t x255 = INT64_MAX;
	int16_t x256 = -55;
	int32_t t63 = -4;

	t63 = (x253<=((x254|x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 2271908LLU;
	volatile int16_t x259 = INT16_MAX;
	int32_t t64 = -1;

	t64 = (x257<=((x258|x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = 1;
	int32_t x262 = INT32_MIN;
	int32_t x263 = -43697985;
	uint64_t x264 = UINT64_MAX;
	static volatile int32_t t65 = 0;

	t65 = (x261<=((x262|x263)<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	uint64_t x266 = 406031596092017LLU;
	static int16_t x268 = INT16_MAX;
	int32_t t66 = 0;

	t66 = (x265<=((x266|x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MIN;
	uint64_t x271 = 92785238LLU;
	int32_t x272 = INT32_MIN;
	int32_t t67 = -7929;

	t67 = (x269<=((x270|x271)<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = 10805663717LLU;
	volatile uint8_t x275 = UINT8_MAX;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t68 = 14475;

	t68 = (x273<=((x274|x275)<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	uint32_t x278 = UINT32_MAX;
	volatile int32_t t69 = 269343238;

	t69 = (x277<=((x278|x279)<x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int64_t x282 = -1LL;
	int32_t x284 = INT32_MIN;

	t70 = (x281<=((x282|x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 27U;
	int8_t x286 = 0;
	static uint16_t x287 = 3U;
	static volatile int32_t x288 = 21173;

	t71 = (x285<=((x286|x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MIN;
	int64_t x292 = 2082073772265574LL;
	int32_t t72 = -466029333;

	t72 = (x289<=((x290|x291)<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	volatile uint16_t x294 = 285U;
	int32_t x296 = -744741775;
	int32_t t73 = -6151;

	t73 = (x293<=((x294|x295)<x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 120U;
	int16_t x298 = -27;
	int32_t t74 = -1372021;

	t74 = (x297<=((x298|x299)<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MIN;
	uint16_t x303 = UINT16_MAX;

	t75 = (x301<=((x302|x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -16728407;
	uint64_t x306 = 115018910LLU;
	int8_t x307 = INT8_MIN;
	int64_t x308 = -41173547293LL;
	int32_t t76 = -27976;

	t76 = (x305<=((x306|x307)<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = 3049U;
	int32_t x311 = INT32_MAX;
	int16_t x312 = INT16_MAX;
	volatile int32_t t77 = 1;

	t77 = (x309<=((x310|x311)<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = INT8_MIN;
	volatile int32_t x314 = 0;
	int64_t x316 = -391965701831LL;
	static int32_t t78 = -53405290;

	t78 = (x313<=((x314|x315)<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x319 = -44;
	int64_t x320 = INT64_MIN;
	volatile int32_t t79 = -3472098;

	t79 = (x317<=((x318|x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x322 = INT16_MIN;
	volatile int16_t x323 = INT16_MIN;
	static int16_t x324 = -1;
	int32_t t80 = -3581;

	t80 = (x321<=((x322|x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = 48U;
	uint16_t x326 = 423U;
	uint16_t x327 = UINT16_MAX;
	volatile int16_t x328 = 9870;
	volatile int32_t t81 = -16504672;

	t81 = (x325<=((x326|x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 399807440314LL;
	uint8_t x330 = 1U;
	volatile uint64_t x331 = 77616651LLU;
	int64_t x332 = INT64_MIN;

	t82 = (x329<=((x330|x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x333 = -43227;
	int64_t x335 = -2529829599LL;
	uint8_t x336 = 26U;
	volatile int32_t t83 = 20252;

	t83 = (x333<=((x334|x335)<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 117327378U;
	int8_t x338 = 1;
	volatile uint8_t x339 = 1U;
	int32_t t84 = 826131;

	t84 = (x337<=((x338|x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = -1;
	volatile int32_t x344 = -5;

	t85 = (x341<=((x342|x343)<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	int64_t x346 = INT64_MIN;
	static uint32_t x347 = 30U;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = -1;

	t86 = (x345<=((x346|x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1237808259LL;
	static uint64_t x350 = 162403243675834549LLU;
	volatile int32_t x351 = INT32_MIN;
	int32_t t87 = -204;

	t87 = (x349<=((x350|x351)<x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 2U;
	int32_t x356 = 1661089;
	volatile int32_t t88 = -673652;

	t88 = (x353<=((x354|x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -1;
	static int32_t x358 = INT32_MAX;
	volatile int16_t x359 = INT16_MIN;
	static volatile int32_t x360 = -1;
	int32_t t89 = -142770020;

	t89 = (x357<=((x358|x359)<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x361 = 0LL;
	int8_t x363 = INT8_MAX;
	uint8_t x364 = UINT8_MAX;
	volatile int32_t t90 = 1;

	t90 = (x361<=((x362|x363)<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	int32_t x366 = 102810;
	int8_t x367 = 0;
	int16_t x368 = -1;
	volatile int32_t t91 = -1;

	t91 = (x365<=((x366|x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = -6648785552LL;
	uint32_t x372 = UINT32_MAX;
	volatile int32_t t92 = 5225;

	t92 = (x369<=((x370|x371)<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = -5;
	int16_t x375 = INT16_MIN;
	static volatile int64_t x376 = -1LL;
	volatile int32_t t93 = 1679321;

	t93 = (x373<=((x374|x375)<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	int64_t x379 = INT64_MIN;
	volatile int32_t t94 = -6;

	t94 = (x377<=((x378|x379)<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -46;
	int8_t x382 = 0;
	static int16_t x383 = -47;
	int32_t t95 = -5395;

	t95 = (x381<=((x382|x383)<x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x385 = UINT16_MAX;
	uint64_t x386 = 361568LLU;
	int8_t x388 = -1;
	int32_t t96 = 7;

	t96 = (x385<=((x386|x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MAX;
	volatile uint8_t x390 = 7U;
	int32_t x391 = INT32_MIN;
	int16_t x392 = -15;
	int32_t t97 = 65919263;

	t97 = (x389<=((x390|x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MIN;
	int8_t x394 = 2;
	int8_t x396 = -1;
	int32_t t98 = 923012907;

	t98 = (x393<=((x394|x395)<x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	int64_t x399 = -1LL;
	int8_t x400 = 15;

	t99 = (x397<=((x398|x399)<x400));

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

