#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = INT64_MIN;
volatile uint32_t x14 = 16634441U;
int32_t x16 = INT32_MAX;
uint64_t t5 = 1049420232672LLU;
static int64_t x25 = -1LL;
uint32_t x27 = UINT32_MAX;
volatile uint64_t t6 = 17975751232552088LLU;
int16_t x36 = INT16_MIN;
static int32_t t8 = 61593628;
int64_t x37 = 28292LL;
int64_t x50 = INT64_MIN;
int32_t x51 = INT32_MIN;
volatile int64_t t12 = 107LL;
uint64_t x53 = 1575329204780942468LLU;
static volatile int8_t x73 = INT8_MIN;
int8_t x74 = 59;
volatile int32_t t17 = 258620119;
static uint8_t x80 = UINT8_MAX;
volatile int64_t t19 = -208033669082217338LL;
static volatile int64_t x88 = INT64_MAX;
int16_t x90 = INT16_MAX;
volatile int32_t t22 = -43111;
uint64_t x100 = 95656LLU;
uint64_t t23 = 242777126LLU;
uint8_t x101 = UINT8_MAX;
uint64_t x106 = UINT64_MAX;
static int16_t x111 = INT16_MAX;
static uint8_t x112 = 11U;
static uint64_t x116 = UINT64_MAX;
volatile int8_t x120 = INT8_MIN;
volatile int32_t t28 = -159679;
int64_t t30 = 106739LL;
int16_t x130 = INT16_MIN;
int8_t x141 = -1;
uint32_t x148 = 3U;
volatile uint16_t x161 = 598U;
int64_t x162 = INT64_MIN;
static int8_t x165 = INT8_MIN;
static volatile int32_t x168 = INT32_MIN;
int8_t x182 = INT8_MIN;
uint32_t x185 = UINT32_MAX;
uint16_t x188 = UINT16_MAX;
int8_t x190 = -1;
int32_t x194 = -1;
int8_t x199 = 0;
uint64_t x202 = UINT64_MAX;
uint8_t x208 = UINT8_MAX;
int32_t t50 = 56;
uint16_t x210 = 438U;
int32_t x211 = 240587;
int64_t x221 = 85212087382714480LL;
static int32_t x228 = -1;
int16_t x231 = INT16_MIN;
static int16_t x235 = INT16_MIN;
static uint8_t x237 = 2U;
int16_t x241 = INT16_MAX;
uint16_t x245 = 21084U;
uint64_t x253 = UINT64_MAX;
int64_t x271 = INT64_MIN;
volatile int64_t t68 = -7720128149LL;
static uint64_t x285 = 1087185LLU;
int32_t x288 = -1;
static int8_t x291 = INT8_MAX;
volatile uint64_t t71 = 0LLU;
int32_t x294 = INT32_MAX;
volatile int64_t t72 = 13925974704817901LL;
uint32_t x297 = UINT32_MAX;
static int16_t x298 = INT16_MIN;
int32_t t74 = 138955983;
int16_t x307 = INT16_MAX;
int16_t x308 = INT16_MIN;
int16_t x319 = 32;
uint32_t x324 = UINT32_MAX;
int8_t x326 = -7;
int32_t x336 = -1;
int16_t x340 = INT16_MAX;
static int8_t x341 = -2;
uint64_t x343 = 245902244828589LLU;
volatile int32_t t83 = INT32_MAX;
static int32_t t84 = INT32_MIN;
int16_t x350 = -1;
int16_t x359 = -1;
volatile int8_t x362 = INT8_MIN;
uint32_t x369 = UINT32_MAX;
int32_t x370 = INT32_MIN;
uint32_t x374 = 10596217U;
int64_t x377 = -1LL;
static uint32_t x384 = UINT32_MAX;
uint32_t t93 = 133591859U;
static int64_t x398 = 11178LL;
int8_t x406 = -1;
uint64_t x408 = 105240LLU;


void f0(void) {
	static int64_t x1 = -119071277509LL;
	int64_t x2 = 751LL;
	static int16_t x3 = 3;
	volatile int8_t x4 = -1;
	static volatile int32_t t0 = -19947434;

	t0 = (((x1^x2)<x3)+x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int32_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int64_t x8 = INT64_MIN;

	t1 = (((x5^x6)<x7)+x8);

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 3U;
	int32_t x10 = INT32_MIN;
	static volatile int64_t x11 = 842286757310LL;
	int32_t x12 = INT32_MIN;
	int32_t t2 = -11042;

	t2 = (((x9^x10)<x11)+x12);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 63U;
	uint16_t x15 = 917U;
	volatile int32_t t3 = INT32_MAX;

	t3 = (((x13^x14)<x15)+x16);

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 2426;
	static uint32_t x18 = 2U;
	int16_t x19 = INT16_MIN;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = 50915073;

	t4 = (((x17^x18)<x19)+x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint8_t x22 = 1U;
	static int8_t x23 = 1;
	volatile uint64_t x24 = 172242676602127454LLU;

	t5 = (((x21^x22)<x23)+x24);

	if (t5 != 172242676602127455LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x26 = INT16_MIN;
	static uint64_t x28 = 1776890229090734LLU;

	t6 = (((x25^x26)<x27)+x28);

	if (t6 != 1776890229090735LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 7252;
	int64_t x30 = INT64_MAX;
	static int32_t x31 = INT32_MAX;
	int16_t x32 = 0;
	int32_t t7 = 46;

	t7 = (((x29^x30)<x31)+x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	int16_t x35 = -1;

	t8 = (((x33^x34)<x35)+x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = 1582646;
	int8_t x39 = 42;
	int16_t x40 = 16;
	volatile int32_t t9 = -44645;

	t9 = (((x37^x38)<x39)+x40);

	if (t9 != 16) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MAX;
	int8_t x42 = INT8_MAX;
	uint32_t x43 = 6314076U;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -4294404;

	t10 = (((x41^x42)<x43)+x44);

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = INT16_MIN;
	static int32_t x47 = -1;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -59;

	t11 = (((x45^x46)<x47)+x48);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = INT8_MIN;
	volatile int64_t x52 = -2649864LL;

	t12 = (((x49^x50)<x51)+x52);

	if (t12 != -2649864LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 1U;
	static volatile uint64_t x55 = 105578814296125LLU;
	volatile int32_t x56 = INT32_MIN;
	int32_t t13 = INT32_MIN;

	t13 = (((x53^x54)<x55)+x56);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 653758LL;
	volatile uint32_t x58 = 181712U;
	volatile int32_t x59 = INT32_MIN;
	volatile int32_t x60 = 11175514;
	static int32_t t14 = -4185;

	t14 = (((x57^x58)<x59)+x60);

	if (t14 != 11175514) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 29U;
	uint8_t x64 = 3U;
	volatile int32_t t15 = 1;

	t15 = (((x61^x62)<x63)+x64);

	if (t15 != 3) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = UINT64_MAX;
	int8_t x70 = INT8_MAX;
	static int32_t x71 = INT32_MIN;
	uint8_t x72 = 27U;
	volatile int32_t t16 = 478507;

	t16 = (((x69^x70)<x71)+x72);

	if (t16 != 27) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x75 = UINT64_MAX;
	static uint16_t x76 = UINT16_MAX;

	t17 = (((x73^x74)<x75)+x76);

	if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x77 = INT16_MAX;
	int16_t x78 = 630;
	int16_t x79 = 430;
	int32_t t18 = 4;

	t18 = (((x77^x78)<x79)+x80);

	if (t18 != 255) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = -1;
	volatile int8_t x82 = INT8_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = 26952392298LL;

	t19 = (((x81^x82)<x83)+x84);

	if (t19 != 26952392298LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 349U;
	volatile uint64_t x86 = UINT64_MAX;
	static uint32_t x87 = 790928U;
	int64_t t20 = INT64_MAX;

	t20 = (((x85^x86)<x87)+x88);

	if (t20 != INT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 3;
	static int8_t x91 = -1;
	int64_t x92 = -1LL;
	static volatile int64_t t21 = -1954031917346907016LL;

	t21 = (((x89^x90)<x91)+x92);

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = INT8_MIN;
	uint64_t x94 = 1073279855445LLU;
	uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MIN;

	t22 = (((x93^x94)<x95)+x96);

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	int8_t x98 = INT8_MAX;
	uint8_t x99 = 2U;

	t23 = (((x97^x98)<x99)+x100);

	if (t23 != 95656LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x102 = 21798597040LL;
	uint64_t x103 = 15326324LLU;
	int8_t x104 = -1;
	static int32_t t24 = 55849;

	t24 = (((x101^x102)<x103)+x104);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -1LL;
	int8_t x107 = INT8_MIN;
	volatile int16_t x108 = -8;
	volatile int32_t t25 = -191;

	t25 = (((x105^x106)<x107)+x108);

	if (t25 != -7) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	volatile uint64_t x110 = UINT64_MAX;
	volatile int32_t t26 = 13;

	t26 = (((x109^x110)<x111)+x112);

	if (t26 != 12) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 1U;
	int8_t x114 = -1;
	int8_t x115 = 1;
	volatile uint64_t t27 = 6793628633LLU;

	t27 = (((x113^x114)<x115)+x116);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = UINT32_MAX;
	static volatile uint16_t x118 = 26U;
	volatile uint8_t x119 = 15U;

	t28 = (((x117^x118)<x119)+x120);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MIN;
	static uint8_t x122 = 13U;
	volatile uint64_t x123 = 6544390082854507LLU;
	static volatile int64_t x124 = -16999721194LL;
	int64_t t29 = -21883275253002447LL;

	t29 = (((x121^x122)<x123)+x124);

	if (t29 != -16999721194LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = 4U;
	int32_t x126 = INT32_MAX;
	volatile int64_t x127 = INT64_MAX;
	int64_t x128 = -272LL;

	t30 = (((x125^x126)<x127)+x128);

	if (t30 != -271LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 197739348U;
	static int16_t x131 = INT16_MAX;
	static int8_t x132 = INT8_MIN;
	int32_t t31 = 26501;

	t31 = (((x129^x130)<x131)+x132);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = -1;
	uint64_t x134 = 234630379LLU;
	int64_t x135 = 2LL;
	uint64_t x136 = 2123276956355272687LLU;
	uint64_t t32 = 13905LLU;

	t32 = (((x133^x134)<x135)+x136);

	if (t32 != 2123276956355272687LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MIN;
	static int64_t x138 = INT64_MAX;
	volatile int64_t x139 = 4803315050683LL;
	int8_t x140 = 59;
	static volatile int32_t t33 = -46529240;

	t33 = (((x137^x138)<x139)+x140);

	if (t33 != 60) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	int32_t x144 = INT32_MAX;
	int32_t t34 = INT32_MAX;

	t34 = (((x141^x142)<x143)+x144);

	if (t34 != INT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = -1;
	static int64_t x147 = -1LL;
	uint32_t t35 = 1968384235U;

	t35 = (((x145^x146)<x147)+x148);

	if (t35 != 4U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x149 = -1;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = 6584LLU;
	int32_t x152 = INT32_MIN;
	volatile int32_t t36 = INT32_MIN;

	t36 = (((x149^x150)<x151)+x152);

	if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	static volatile int8_t x154 = -1;
	int16_t x155 = 1;
	volatile int64_t x156 = 344959LL;
	int64_t t37 = 481101337462042LL;

	t37 = (((x153^x154)<x155)+x156);

	if (t37 != 344959LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = -1;
	static volatile uint64_t x158 = 30857444135195829LLU;
	int64_t x159 = -4248277441751LL;
	uint16_t x160 = 12U;
	int32_t t38 = 833540;

	t38 = (((x157^x158)<x159)+x160);

	if (t38 != 13) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x163 = UINT64_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t39 = 3;

	t39 = (((x161^x162)<x163)+x164);

	if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = 12870476LL;
	static int32_t x167 = INT32_MAX;
	static int32_t t40 = 607;

	t40 = (((x165^x166)<x167)+x168);

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x169 = INT64_MIN;
	static volatile uint32_t x170 = UINT32_MAX;
	volatile int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	static volatile int32_t t41 = 1585385;

	t41 = (((x169^x170)<x171)+x172);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -17980;
	int8_t x174 = -3;
	volatile int16_t x175 = INT16_MAX;
	int8_t x176 = 48;
	volatile int32_t t42 = -434796616;

	t42 = (((x173^x174)<x175)+x176);

	if (t42 != 49) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x177 = -1;
	int32_t x178 = -1638855;
	int64_t x179 = INT64_MAX;
	int8_t x180 = INT8_MAX;
	volatile int32_t t43 = -13690769;

	t43 = (((x177^x178)<x179)+x180);

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x181 = 2007065280U;
	int16_t x183 = INT16_MIN;
	static int8_t x184 = INT8_MIN;
	volatile int32_t t44 = 1641;

	t44 = (((x181^x182)<x183)+x184);

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x186 = -989542488646LL;
	volatile int64_t x187 = 17LL;
	volatile int32_t t45 = 8;

	t45 = (((x185^x186)<x187)+x188);

	if (t45 != 65536) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x189 = -2;
	int8_t x191 = INT8_MIN;
	int8_t x192 = -1;
	volatile int32_t t46 = 1;

	t46 = (((x189^x190)<x191)+x192);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = -1LL;
	static uint16_t x195 = 67U;
	volatile int64_t x196 = -1LL;
	static int64_t t47 = -39514314082180LL;

	t47 = (((x193^x194)<x195)+x196);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = 5U;
	int32_t x198 = INT32_MAX;
	uint8_t x200 = 4U;
	static volatile int32_t t48 = -860;

	t48 = (((x197^x198)<x199)+x200);

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = 27;
	int8_t x203 = INT8_MIN;
	int8_t x204 = INT8_MIN;
	volatile int32_t t49 = -1;

	t49 = (((x201^x202)<x203)+x204);

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = INT64_MIN;
	int64_t x206 = INT64_MIN;
	static int16_t x207 = -1;

	t50 = (((x205^x206)<x207)+x208);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = 18875;
	uint16_t x212 = 10U;
	volatile int32_t t51 = -11357455;

	t51 = (((x209^x210)<x211)+x212);

	if (t51 != 11) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x213 = -3;
	volatile int64_t x214 = INT64_MIN;
	static int16_t x215 = INT16_MAX;
	static volatile int16_t x216 = 0;
	int32_t t52 = -183443;

	t52 = (((x213^x214)<x215)+x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = INT32_MIN;
	volatile uint32_t x218 = 9U;
	int8_t x219 = INT8_MIN;
	static uint8_t x220 = 1U;
	static volatile int32_t t53 = 3679936;

	t53 = (((x217^x218)<x219)+x220);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x222 = 379U;
	uint16_t x223 = UINT16_MAX;
	int16_t x224 = INT16_MAX;
	int32_t t54 = -1;

	t54 = (((x221^x222)<x223)+x224);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = UINT64_MAX;
	static uint8_t x226 = UINT8_MAX;
	int32_t x227 = INT32_MIN;
	int32_t t55 = -245;

	t55 = (((x225^x226)<x227)+x228);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -1;
	int16_t x230 = INT16_MIN;
	volatile int64_t x232 = INT64_MAX;
	int64_t t56 = INT64_MAX;

	t56 = (((x229^x230)<x231)+x232);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x233 = UINT64_MAX;
	int32_t x234 = INT32_MAX;
	int8_t x236 = INT8_MIN;
	volatile int32_t t57 = -373;

	t57 = (((x233^x234)<x235)+x236);

	if (t57 != -127) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x238 = 53314278U;
	static int32_t x239 = -1;
	uint16_t x240 = 30U;
	int32_t t58 = 1;

	t58 = (((x237^x238)<x239)+x240);

	if (t58 != 31) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x242 = INT8_MAX;
	int64_t x243 = INT64_MIN;
	int64_t x244 = INT64_MAX;
	int64_t t59 = INT64_MAX;

	t59 = (((x241^x242)<x243)+x244);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x246 = INT8_MIN;
	int16_t x247 = -1;
	int16_t x248 = -1;
	static volatile int32_t t60 = 7420;

	t60 = (((x245^x246)<x247)+x248);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x249 = INT64_MIN;
	int8_t x250 = -1;
	uint32_t x251 = 41U;
	static int64_t x252 = INT64_MAX;
	int64_t t61 = INT64_MAX;

	t61 = (((x249^x250)<x251)+x252);

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = -1;
	int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MIN;
	volatile int64_t t62 = 174876257728LL;

	t62 = (((x253^x254)<x255)+x256);

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x257 = UINT16_MAX;
	uint16_t x258 = UINT16_MAX;
	volatile int16_t x259 = 6;
	int8_t x260 = INT8_MIN;
	volatile int32_t t63 = -1;

	t63 = (((x257^x258)<x259)+x260);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = 0U;
	volatile int32_t x263 = INT32_MAX;
	uint64_t x264 = 960203102LLU;
	volatile uint64_t t64 = 2324364764444534083LLU;

	t64 = (((x261^x262)<x263)+x264);

	if (t64 != 960203103LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x265 = 1478U;
	volatile int32_t x266 = -18565944;
	int16_t x267 = INT16_MIN;
	static int8_t x268 = -1;
	int32_t t65 = 52137586;

	t65 = (((x265^x266)<x267)+x268);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = INT8_MIN;
	uint64_t x270 = UINT64_MAX;
	int8_t x272 = INT8_MAX;
	int32_t t66 = 540;

	t66 = (((x269^x270)<x271)+x272);

	if (t66 != 128) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	uint8_t x274 = UINT8_MAX;
	uint8_t x275 = 1U;
	int16_t x276 = 4502;
	int32_t t67 = -5142;

	t67 = (((x273^x274)<x275)+x276);

	if (t67 != 4503) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x277 = 159501648U;
	int16_t x278 = INT16_MIN;
	volatile int64_t x279 = INT64_MAX;
	int64_t x280 = INT64_MIN;

	t68 = (((x277^x278)<x279)+x280);

	if (t68 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x281 = -1;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	int16_t x284 = INT16_MIN;
	static volatile int32_t t69 = 0;

	t69 = (((x281^x282)<x283)+x284);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x286 = INT64_MAX;
	uint8_t x287 = UINT8_MAX;
	int32_t t70 = -95086;

	t70 = (((x285^x286)<x287)+x288);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = -807517;
	int16_t x290 = 507;
	volatile uint64_t x292 = 178512440204LLU;

	t71 = (((x289^x290)<x291)+x292);

	if (t71 != 178512440205LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x293 = 533312989507032368LLU;
	uint64_t x295 = UINT64_MAX;
	int64_t x296 = -92LL;

	t72 = (((x293^x294)<x295)+x296);

	if (t72 != -91LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;
	volatile int64_t t73 = -843716232421339LL;

	t73 = (((x297^x298)<x299)+x300);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = 857639292U;
	static volatile int32_t x302 = 316849791;
	static uint32_t x303 = UINT32_MAX;
	int32_t x304 = INT32_MIN;

	t74 = (((x301^x302)<x303)+x304);

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x305 = -1;
	int64_t x306 = INT64_MAX;
	volatile int32_t t75 = -57547;

	t75 = (((x305^x306)<x307)+x308);

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x313 = -833LL;
	uint64_t x314 = 12703731215312LLU;
	uint64_t x315 = 1178832966338985865LLU;
	int32_t x316 = INT32_MAX;
	volatile int32_t t76 = INT32_MAX;

	t76 = (((x313^x314)<x315)+x316);

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = -24722LL;
	uint16_t x318 = UINT16_MAX;
	static int64_t x320 = -1LL;
	static int64_t t77 = 504713969573016518LL;

	t77 = (((x317^x318)<x319)+x320);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x321 = UINT8_MAX;
	int8_t x322 = INT8_MAX;
	volatile uint16_t x323 = 14493U;
	uint32_t t78 = 25736U;

	t78 = (((x321^x322)<x323)+x324);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x325 = INT64_MIN;
	uint16_t x327 = 0U;
	int32_t x328 = INT32_MIN;
	static int32_t t79 = INT32_MIN;

	t79 = (((x325^x326)<x327)+x328);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = 26558657051614072LL;
	int64_t x330 = 6967515538879480LL;
	int8_t x331 = 60;
	static int32_t x332 = INT32_MIN;
	static int32_t t80 = INT32_MIN;

	t80 = (((x329^x330)<x331)+x332);

	if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x333 = 1483U;
	int8_t x334 = INT8_MIN;
	int8_t x335 = INT8_MIN;
	int32_t t81 = 41819479;

	t81 = (((x333^x334)<x335)+x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = -1LL;
	int16_t x338 = INT16_MAX;
	int64_t x339 = -3437LL;
	volatile int32_t t82 = -5223990;

	t82 = (((x337^x338)<x339)+x340);

	if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x342 = 53600225LLU;
	int32_t x344 = INT32_MAX;

	t83 = (((x341^x342)<x343)+x344);

	if (t83 != INT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MAX;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MIN;
	int32_t x348 = INT32_MIN;

	t84 = (((x345^x346)<x347)+x348);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x349 = 1704034400387036519LLU;
	int8_t x351 = -1;
	static int16_t x352 = -1;
	volatile int32_t t85 = 1;

	t85 = (((x349^x350)<x351)+x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = INT8_MIN;
	uint16_t x354 = 7070U;
	uint16_t x355 = 32096U;
	int8_t x356 = INT8_MIN;
	int32_t t86 = 23221;

	t86 = (((x353^x354)<x355)+x356);

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x357 = 74U;
	int8_t x358 = -1;
	int8_t x360 = -1;
	volatile int32_t t87 = -64735611;

	t87 = (((x357^x358)<x359)+x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = UINT32_MAX;
	int32_t x363 = INT32_MAX;
	int32_t x364 = 709607903;
	int32_t t88 = -237414;

	t88 = (((x361^x362)<x363)+x364);

	if (t88 != 709607904) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 7685328LLU;
	uint16_t x366 = 265U;
	int32_t x367 = -11147114;
	volatile int32_t x368 = INT32_MIN;
	volatile int32_t t89 = -7053585;

	t89 = (((x365^x366)<x367)+x368);

	if (t89 != -2147483647) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x371 = INT64_MIN;
	uint16_t x372 = 4U;
	int32_t t90 = 115254;

	t90 = (((x369^x370)<x371)+x372);

	if (t90 != 4) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	static int64_t x375 = INT64_MIN;
	uint32_t x376 = 28423U;
	uint32_t t91 = 4U;

	t91 = (((x373^x374)<x375)+x376);

	if (t91 != 28423U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x378 = -1;
	int8_t x379 = 3;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t92 = -109824564;

	t92 = (((x377^x378)<x379)+x380);

	if (t92 != 256) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = INT32_MIN;
	int8_t x382 = 0;
	int16_t x383 = -3314;

	t93 = (((x381^x382)<x383)+x384);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = -1;
	static volatile int32_t t94 = -644702;

	t94 = (((x385^x386)<x387)+x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x389 = 367;
	volatile uint64_t x390 = UINT64_MAX;
	uint32_t x391 = UINT32_MAX;
	volatile uint64_t x392 = 101LLU;
	volatile uint64_t t95 = 34350844077LLU;

	t95 = (((x389^x390)<x391)+x392);

	if (t95 != 101LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = UINT8_MAX;
	uint64_t x394 = UINT64_MAX;
	static int64_t x395 = -1LL;
	int8_t x396 = INT8_MIN;
	volatile int32_t t96 = -702;

	t96 = (((x393^x394)<x395)+x396);

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x397 = 0;
	int64_t x399 = INT64_MAX;
	int16_t x400 = -1;
	static volatile int32_t t97 = 96008254;

	t97 = (((x397^x398)<x399)+x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = 2;
	volatile int16_t x402 = INT16_MIN;
	uint16_t x403 = 137U;
	static uint32_t x404 = 441U;
	static uint32_t t98 = 28149697U;

	t98 = (((x401^x402)<x403)+x404);

	if (t98 != 442U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x405 = 4U;
	int32_t x407 = INT32_MAX;
	volatile uint64_t t99 = 1728199762LLU;

	t99 = (((x405^x406)<x407)+x408);

	if (t99 != 105241LLU) { NG(); } else { ; }
	
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

