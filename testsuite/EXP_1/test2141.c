#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = -1LL;
volatile int64_t x11 = -7266096106550772LL;
int8_t x17 = INT8_MIN;
volatile uint64_t x18 = 50842558772714LLU;
static int32_t t4 = 12;
volatile uint16_t x22 = 492U;
int64_t x25 = -2202889960256924LL;
int32_t x29 = -58950;
static int64_t x30 = INT64_MAX;
volatile uint32_t x31 = 521U;
int16_t x41 = -1;
volatile int32_t t10 = -132;
static uint32_t x47 = 53U;
int8_t x48 = -1;
int32_t x57 = INT32_MAX;
volatile int32_t x67 = INT32_MAX;
static volatile uint32_t x69 = UINT32_MAX;
static int32_t t17 = -118;
static volatile int16_t x76 = -1;
static int8_t x77 = -1;
volatile int32_t x78 = -1;
static int32_t x83 = INT32_MAX;
int32_t x85 = -50;
static int32_t x86 = 1972225;
uint16_t x90 = UINT16_MAX;
volatile int8_t x93 = INT8_MAX;
volatile uint32_t x103 = UINT32_MAX;
uint8_t x107 = 4U;
static uint32_t x110 = UINT32_MAX;
int32_t t29 = -14189021;
uint16_t x124 = UINT16_MAX;
int8_t x129 = -9;
int16_t x131 = INT16_MIN;
static uint32_t x133 = 468606U;
static volatile int64_t x134 = -374287425808LL;
int8_t x135 = 38;
int16_t x137 = -1;
int32_t x147 = -55969985;
int32_t x148 = INT32_MAX;
volatile int64_t x151 = INT64_MAX;
uint64_t x152 = 107318472942999LLU;
int32_t x154 = -240702;
int32_t x155 = 8372492;
uint64_t x156 = 14LLU;
int64_t x159 = -1LL;
int64_t x166 = -1LL;
volatile int32_t t41 = -4395414;
static int32_t t42 = -14701;
volatile int32_t t43 = 1562055;
static int32_t x179 = INT32_MAX;
volatile uint16_t x183 = 6523U;
static uint64_t x193 = 2939164950864542LLU;
uint32_t x194 = UINT32_MAX;
static int32_t x196 = -173465;
int64_t x198 = -1LL;
volatile int32_t t49 = -469034748;
int64_t x208 = 1LL;
uint32_t x212 = 11U;
volatile int32_t t52 = -12643;
int32_t x213 = INT32_MIN;
volatile uint16_t x215 = 242U;
static volatile int64_t x229 = INT64_MIN;
volatile uint64_t x231 = UINT64_MAX;
uint8_t x233 = UINT8_MAX;
volatile int32_t t60 = -1031;
int16_t x247 = 0;
int32_t x248 = INT32_MAX;
static uint16_t x252 = 10U;
volatile uint16_t x258 = UINT16_MAX;
int16_t x268 = -1;
volatile int32_t t67 = 819447;
volatile uint64_t x277 = UINT64_MAX;
int64_t x285 = -3196110886166197LL;
volatile int64_t x290 = -5927691213LL;
int64_t x291 = INT64_MIN;
volatile int16_t x302 = INT16_MAX;
volatile uint16_t x303 = 6675U;
static int32_t x305 = INT32_MIN;
int64_t x306 = INT64_MIN;
int8_t x309 = -14;
uint32_t x310 = 283U;
static uint8_t x315 = 3U;
volatile int32_t t80 = -1503373;
int16_t x326 = -1;
uint64_t x333 = UINT64_MAX;
volatile int16_t x337 = INT16_MIN;
static int64_t x345 = INT64_MIN;
volatile int64_t x347 = INT64_MIN;
static int16_t x348 = -22;
static volatile int32_t t87 = -45;
static volatile int32_t t88 = -57397;
int64_t x358 = INT64_MIN;
uint16_t x364 = UINT16_MAX;
volatile int32_t t90 = -294;
int32_t t91 = -45001658;
int16_t x371 = 1;
int32_t t92 = 8190653;
int16_t x378 = INT16_MAX;
int8_t x379 = -1;
int32_t t94 = -4;
int32_t t95 = -122303;
volatile int16_t x386 = -940;
static uint32_t x387 = 19010U;
uint64_t x392 = 5LLU;
uint16_t x396 = 4U;
int32_t t98 = 3202794;
static int32_t x397 = INT32_MIN;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int64_t x2 = INT64_MAX;
	int16_t x3 = 9932;
	volatile int32_t x4 = 6263905;
	volatile int32_t t0 = -8055192;

	t0 = (((x1^x2)<x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = 1582;
	uint64_t x7 = UINT64_MAX;
	static int32_t x8 = INT32_MAX;
	static int32_t t1 = 3;

	t1 = (((x5^x6)<x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 498U;
	uint64_t x10 = 9071659782963LLU;
	uint64_t x12 = 252483987116634027LLU;
	volatile int32_t t2 = -84;

	t2 = (((x9^x10)<x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 236484035U;
	uint64_t x14 = 521299290322196LLU;
	int64_t x15 = 296120452748758638LL;
	uint32_t x16 = 1173772829U;
	static volatile int32_t t3 = 0;

	t3 = (((x13^x14)<x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = INT32_MAX;
	uint32_t x20 = UINT32_MAX;

	t4 = (((x17^x18)<x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 2340807216517902933LLU;
	uint8_t x23 = UINT8_MAX;
	int16_t x24 = -3115;
	int32_t t5 = -14;

	t5 = (((x21^x22)<x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	static volatile int16_t x28 = -3579;
	int32_t t6 = -18;

	t6 = (((x25^x26)<x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x32 = -1LL;
	volatile int32_t t7 = -6884;

	t7 = (((x29^x30)<x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = UINT64_MAX;
	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MIN;
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = -62147;

	t8 = (((x33^x34)<x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 369U;
	uint32_t x38 = 349457340U;
	volatile uint8_t x39 = 63U;
	static uint64_t x40 = UINT64_MAX;
	int32_t t9 = -1;

	t9 = (((x37^x38)<x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = -1;
	volatile uint32_t x43 = 47U;
	int8_t x44 = INT8_MAX;

	t10 = (((x41^x42)<x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 10767;
	volatile uint8_t x46 = 34U;
	int32_t t11 = 3;

	t11 = (((x45^x46)<x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 30U;
	uint16_t x50 = UINT16_MAX;
	int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MAX;
	int32_t t12 = -186;

	t12 = (((x49^x50)<x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 6U;
	int64_t x54 = -560032530793127515LL;
	uint16_t x55 = 32078U;
	static uint8_t x56 = 23U;
	volatile int32_t t13 = -3;

	t13 = (((x53^x54)<x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x58 = 3U;
	uint64_t x59 = 120741191LLU;
	static uint32_t x60 = 54U;
	volatile int32_t t14 = -201825583;

	t14 = (((x57^x58)<x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int64_t x62 = 969953376965LL;
	static int16_t x63 = -1;
	static volatile int8_t x64 = INT8_MIN;
	static int32_t t15 = -4;

	t15 = (((x61^x62)<x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	int16_t x66 = INT16_MAX;
	static volatile int16_t x68 = 36;
	volatile int32_t t16 = 0;

	t16 = (((x65^x66)<x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x70 = 41U;
	volatile int32_t x71 = 14290;
	static uint32_t x72 = UINT32_MAX;

	t17 = (((x69^x70)<x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	int32_t x74 = 64824629;
	int8_t x75 = INT8_MAX;
	int32_t t18 = 73561;

	t18 = (((x73^x74)<x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x79 = UINT16_MAX;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -9183403;

	t19 = (((x77^x78)<x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = 1;
	int32_t x82 = 45;
	int16_t x84 = -594;
	int32_t t20 = 24941;

	t20 = (((x81^x82)<x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x87 = UINT16_MAX;
	volatile uint64_t x88 = UINT64_MAX;
	int32_t t21 = 3963;

	t21 = (((x85^x86)<x87)<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -1LL;
	static int16_t x91 = INT16_MIN;
	uint8_t x92 = 0U;
	int32_t t22 = -1598;

	t22 = (((x89^x90)<x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = -1;
	uint16_t x95 = 2U;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = -20;

	t23 = (((x93^x94)<x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int64_t x98 = 168949LL;
	int16_t x99 = INT16_MIN;
	static int8_t x100 = INT8_MIN;
	int32_t t24 = -13;

	t24 = (((x97^x98)<x99)<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 12U;
	uint32_t x102 = 652707U;
	volatile uint64_t x104 = 410584752381567LLU;
	static int32_t t25 = 21;

	t25 = (((x101^x102)<x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	static int32_t x106 = INT32_MIN;
	static uint16_t x108 = UINT16_MAX;
	volatile int32_t t26 = -47346;

	t26 = (((x105^x106)<x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 318871LLU;
	int32_t x111 = INT32_MAX;
	static volatile int16_t x112 = 0;
	int32_t t27 = 3;

	t27 = (((x109^x110)<x111)<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -8147;
	static int16_t x114 = INT16_MIN;
	int8_t x115 = INT8_MIN;
	int8_t x116 = 4;
	int32_t t28 = 3;

	t28 = (((x113^x114)<x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -7;
	int32_t x118 = INT32_MIN;
	int8_t x119 = 1;
	volatile int32_t x120 = INT32_MIN;

	t29 = (((x117^x118)<x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = UINT16_MAX;
	volatile uint8_t x122 = 3U;
	uint32_t x123 = 14826476U;
	static int32_t t30 = -35;

	t30 = (((x121^x122)<x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	uint64_t x126 = 3783925478757LLU;
	int64_t x127 = -67105575437088568LL;
	uint8_t x128 = UINT8_MAX;
	int32_t t31 = -6591;

	t31 = (((x125^x126)<x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -3015227107LL;
	static uint64_t x132 = 558773049137963LLU;
	volatile int32_t t32 = 366;

	t32 = (((x129^x130)<x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x136 = INT16_MAX;
	volatile int32_t t33 = 618;

	t33 = (((x133^x134)<x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = INT64_MAX;
	volatile int8_t x139 = INT8_MIN;
	uint64_t x140 = UINT64_MAX;
	int32_t t34 = -43193;

	t34 = (((x137^x138)<x139)<x140);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int16_t x142 = INT16_MAX;
	volatile uint64_t x143 = 35532584147967681LLU;
	int8_t x144 = -8;
	static int32_t t35 = -482;

	t35 = (((x141^x142)<x143)<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -4LL;
	uint16_t x146 = 6139U;
	volatile int32_t t36 = -3666;

	t36 = (((x145^x146)<x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint64_t x150 = UINT64_MAX;
	int32_t t37 = -1;

	t37 = (((x149^x150)<x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 9927947111191980LLU;
	static int32_t t38 = 36877;

	t38 = (((x153^x154)<x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	static int32_t x158 = INT32_MAX;
	volatile int32_t x160 = 681977488;
	static volatile int32_t t39 = 1112778;

	t39 = (((x157^x158)<x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static uint8_t x162 = UINT8_MAX;
	int8_t x163 = 0;
	volatile uint64_t x164 = 0LLU;
	int32_t t40 = 183828638;

	t40 = (((x161^x162)<x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = INT64_MAX;
	int8_t x167 = INT8_MIN;
	volatile int8_t x168 = INT8_MIN;

	t41 = (((x165^x166)<x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -16113058303827151LL;
	int8_t x170 = -1;
	int32_t x171 = -1;
	int8_t x172 = INT8_MIN;

	t42 = (((x169^x170)<x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	volatile uint8_t x174 = 4U;
	uint16_t x175 = 13193U;
	int64_t x176 = 726009LL;

	t43 = (((x173^x174)<x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	static uint8_t x178 = UINT8_MAX;
	int8_t x180 = -5;
	static int32_t t44 = -1;

	t44 = (((x177^x178)<x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int16_t x182 = INT16_MAX;
	int32_t x184 = INT32_MAX;
	static int32_t t45 = 0;

	t45 = (((x181^x182)<x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x185 = 1551U;
	volatile uint8_t x186 = UINT8_MAX;
	volatile uint16_t x187 = 2502U;
	static int64_t x188 = INT64_MIN;
	int32_t t46 = -1958;

	t46 = (((x185^x186)<x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	volatile uint16_t x190 = UINT16_MAX;
	uint64_t x191 = 130133514642609LLU;
	static uint8_t x192 = UINT8_MAX;
	int32_t t47 = 1413647;

	t47 = (((x189^x190)<x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x195 = INT8_MIN;
	volatile int32_t t48 = 18953450;

	t48 = (((x193^x194)<x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -140553LL;
	uint32_t x199 = 46304U;
	int64_t x200 = INT64_MAX;

	t49 = (((x197^x198)<x199)<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int16_t x202 = 72;
	volatile uint8_t x203 = UINT8_MAX;
	uint32_t x204 = 13483U;
	int32_t t50 = 1;

	t50 = (((x201^x202)<x203)<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = UINT16_MAX;
	volatile uint64_t x206 = 3093847597681LLU;
	int64_t x207 = -1LL;
	int32_t t51 = -21711768;

	t51 = (((x205^x206)<x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = -22800;
	uint32_t x211 = 1230155108U;

	t52 = (((x209^x210)<x211)<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x214 = 22472748U;
	volatile int8_t x216 = INT8_MIN;
	static int32_t t53 = 269208;

	t53 = (((x213^x214)<x215)<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = 36U;
	uint64_t x218 = 103LLU;
	int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MIN;
	int32_t t54 = 55096;

	t54 = (((x217^x218)<x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	volatile uint16_t x222 = 3U;
	int8_t x223 = INT8_MIN;
	int64_t x224 = INT64_MIN;
	static int32_t t55 = -10178;

	t55 = (((x221^x222)<x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 7U;
	int32_t x226 = -1;
	static int8_t x227 = -1;
	int64_t x228 = 225899976LL;
	volatile int32_t t56 = -5498370;

	t56 = (((x225^x226)<x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	volatile int16_t x232 = INT16_MIN;
	volatile int32_t t57 = -161;

	t57 = (((x229^x230)<x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x234 = INT16_MIN;
	uint64_t x235 = 7321467932580964804LLU;
	int32_t x236 = INT32_MIN;
	int32_t t58 = -285389;

	t58 = (((x233^x234)<x235)<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	int64_t x238 = INT64_MAX;
	int8_t x239 = INT8_MIN;
	int64_t x240 = -1LL;
	static volatile int32_t t59 = 972;

	t59 = (((x237^x238)<x239)<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MAX;
	int64_t x242 = -7588734080462LL;
	int8_t x243 = 0;
	volatile uint8_t x244 = 95U;

	t60 = (((x241^x242)<x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = -7;
	int8_t x246 = INT8_MAX;
	volatile int32_t t61 = -1922187;

	t61 = (((x245^x246)<x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x249 = INT16_MIN;
	volatile int8_t x250 = INT8_MAX;
	int16_t x251 = 61;
	static volatile int32_t t62 = 1266;

	t62 = (((x249^x250)<x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = -1LL;
	uint16_t x254 = UINT16_MAX;
	int32_t x255 = -1;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -1061033;

	t63 = (((x253^x254)<x255)<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 99U;
	int8_t x259 = -1;
	volatile int16_t x260 = -8111;
	volatile int32_t t64 = 17423451;

	t64 = (((x257^x258)<x259)<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = INT64_MIN;
	static uint8_t x263 = UINT8_MAX;
	int32_t x264 = -1;
	static volatile int32_t t65 = -3502;

	t65 = (((x261^x262)<x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	int16_t x266 = INT16_MIN;
	static volatile int16_t x267 = -2;
	int32_t t66 = -1;

	t66 = (((x265^x266)<x267)<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int64_t x270 = INT64_MAX;
	volatile int8_t x271 = -6;
	volatile int64_t x272 = -16757279623LL;

	t67 = (((x269^x270)<x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MAX;
	static uint64_t x274 = UINT64_MAX;
	volatile int16_t x275 = 0;
	int16_t x276 = 233;
	int32_t t68 = 1907170;

	t68 = (((x273^x274)<x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x278 = INT8_MIN;
	volatile uint64_t x279 = 125027695LLU;
	uint32_t x280 = 26497U;
	int32_t t69 = 22568092;

	t69 = (((x277^x278)<x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	static int16_t x282 = -1;
	uint64_t x283 = 237174806LLU;
	uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = -1666;

	t70 = (((x281^x282)<x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x286 = 11131;
	int16_t x287 = -34;
	int8_t x288 = -1;
	int32_t t71 = -50965222;

	t71 = (((x285^x286)<x287)<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x289 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t72 = 5;

	t72 = (((x289^x290)<x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	volatile int8_t x296 = INT8_MAX;
	volatile int32_t t73 = -208299640;

	t73 = (((x293^x294)<x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 6854697U;
	uint16_t x298 = UINT16_MAX;
	uint64_t x299 = 147277LLU;
	static uint8_t x300 = 3U;
	int32_t t74 = 1;

	t74 = (((x297^x298)<x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 10U;
	uint16_t x304 = 13537U;
	static int32_t t75 = 1468;

	t75 = (((x301^x302)<x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x307 = INT64_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t76 = -20;

	t76 = (((x305^x306)<x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x311 = INT16_MAX;
	uint16_t x312 = 105U;
	int32_t t77 = 489947177;

	t77 = (((x309^x310)<x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	static int16_t x314 = -1;
	volatile int64_t x316 = 3074091960LL;
	volatile int32_t t78 = 233009;

	t78 = (((x313^x314)<x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	int16_t x318 = INT16_MIN;
	volatile int8_t x319 = INT8_MIN;
	int8_t x320 = 13;
	int32_t t79 = 2;

	t79 = (((x317^x318)<x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x321 = -1;
	uint64_t x322 = UINT64_MAX;
	int16_t x323 = -1;
	int64_t x324 = INT64_MAX;

	t80 = (((x321^x322)<x323)<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	int64_t x327 = -21190799LL;
	volatile int16_t x328 = INT16_MIN;
	volatile int32_t t81 = 551065;

	t81 = (((x325^x326)<x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -7;
	int8_t x330 = 22;
	volatile int8_t x331 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	static volatile int32_t t82 = -2;

	t82 = (((x329^x330)<x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x334 = INT64_MIN;
	uint16_t x335 = UINT16_MAX;
	static int32_t x336 = INT32_MIN;
	static volatile int32_t t83 = -521809586;

	t83 = (((x333^x334)<x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = 1U;
	volatile uint64_t x339 = 2808822013LLU;
	uint16_t x340 = 1046U;
	volatile int32_t t84 = 18742099;

	t84 = (((x337^x338)<x339)<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = -996092761;
	volatile uint64_t x342 = 6793352127412927702LLU;
	static uint8_t x343 = 0U;
	volatile int32_t x344 = INT32_MIN;
	int32_t t85 = 0;

	t85 = (((x341^x342)<x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = 1826362;
	volatile int32_t t86 = 16932640;

	t86 = (((x345^x346)<x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -123;
	int64_t x350 = 8174445912321LL;
	int8_t x351 = -1;
	volatile uint16_t x352 = 14203U;

	t87 = (((x349^x350)<x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -31606878819LL;
	volatile uint32_t x354 = UINT32_MAX;
	int32_t x355 = -1;
	int32_t x356 = INT32_MIN;

	t88 = (((x353^x354)<x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x357 = 2289U;
	static uint16_t x359 = UINT16_MAX;
	uint32_t x360 = 0U;
	volatile int32_t t89 = -389;

	t89 = (((x357^x358)<x359)<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x361 = 0U;
	volatile int8_t x362 = INT8_MIN;
	volatile int32_t x363 = INT32_MAX;

	t90 = (((x361^x362)<x363)<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 118U;
	uint16_t x366 = 57U;
	int64_t x367 = 49039971081256LL;
	static int16_t x368 = -8154;

	t91 = (((x365^x366)<x367)<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = -1;
	int8_t x370 = INT8_MIN;
	volatile uint64_t x372 = 13LLU;

	t92 = (((x369^x370)<x371)<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 219;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = INT16_MIN;
	int32_t x376 = 485081;
	static volatile int32_t t93 = -292;

	t93 = (((x373^x374)<x375)<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = 1294LL;
	int32_t x380 = -1;

	t94 = (((x377^x378)<x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 1500118137591LLU;
	static int8_t x382 = 47;
	int8_t x383 = INT8_MAX;
	static int32_t x384 = -1;

	t95 = (((x381^x382)<x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = INT16_MAX;
	int64_t x388 = -102LL;
	static volatile int32_t t96 = -11520;

	t96 = (((x385^x386)<x387)<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	volatile uint16_t x390 = 246U;
	uint8_t x391 = 65U;
	static volatile int32_t t97 = 367212379;

	t97 = (((x389^x390)<x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 9121140LL;
	int8_t x394 = INT8_MIN;
	int8_t x395 = INT8_MAX;

	t98 = (((x393^x394)<x395)<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 1U;
	int64_t x399 = INT64_MIN;
	int64_t x400 = INT64_MAX;
	static volatile int32_t t99 = 66;

	t99 = (((x397^x398)<x399)<x400);

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

