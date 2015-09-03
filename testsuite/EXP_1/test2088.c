#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = -1;
int64_t x15 = INT64_MIN;
uint8_t x22 = 14U;
uint32_t x23 = UINT32_MAX;
int16_t x31 = 1;
int64_t x34 = INT64_MIN;
int64_t x37 = 6587696850106LL;
uint8_t x42 = UINT8_MAX;
int32_t x44 = -254446816;
uint16_t x50 = UINT16_MAX;
uint8_t x53 = 42U;
int16_t x58 = -410;
volatile uint32_t x59 = 705918U;
static volatile int64_t x66 = 201761LL;
int8_t x69 = -1;
uint8_t x73 = 13U;
volatile int32_t t18 = 7349150;
int32_t x82 = -3;
uint16_t x87 = 1844U;
int16_t x92 = 1;
volatile int16_t x95 = INT16_MIN;
uint32_t x97 = 129679U;
int8_t x99 = INT8_MIN;
uint64_t x110 = UINT64_MAX;
volatile int32_t t29 = -11;
static uint8_t x127 = 3U;
uint32_t x130 = 418U;
int32_t t33 = -1137;
uint64_t x143 = UINT64_MAX;
static volatile uint16_t x144 = UINT16_MAX;
uint64_t x151 = UINT64_MAX;
uint8_t x154 = UINT8_MAX;
volatile int32_t t37 = -527;
int16_t x168 = -1;
static int32_t t39 = -33737;
int64_t x175 = INT64_MAX;
uint64_t x179 = UINT64_MAX;
int32_t x182 = INT32_MIN;
int8_t x189 = -1;
int8_t x192 = 0;
uint16_t x200 = 11U;
int8_t x204 = INT8_MAX;
volatile int64_t x205 = INT64_MIN;
uint32_t x207 = 6452938U;
static int8_t x215 = INT8_MAX;
int16_t x220 = INT16_MAX;
static volatile int32_t t52 = -22290;
static int32_t x221 = -1;
int32_t t54 = 160;
volatile uint64_t x237 = 15875321000LLU;
int8_t x245 = INT8_MIN;
int64_t x250 = INT64_MIN;
int64_t x251 = INT64_MAX;
int32_t x252 = INT32_MIN;
int32_t t60 = -500557028;
static uint8_t x256 = 4U;
volatile int32_t t63 = 21;
volatile uint8_t x267 = UINT8_MAX;
volatile int64_t x276 = INT64_MIN;
int16_t x284 = -104;
volatile int32_t t68 = 88909924;
int8_t x292 = INT8_MIN;
volatile int64_t x299 = INT64_MIN;
volatile int32_t t72 = -9694325;
int64_t x301 = -3644287787446032770LL;
static int64_t x305 = 3025325676620088LL;
uint8_t x315 = 66U;
int32_t t78 = 2377302;
int16_t x327 = -1;
int32_t t79 = -25629570;
static uint64_t x331 = 25073890956752216LLU;
volatile int32_t x332 = INT32_MAX;
uint8_t x336 = 22U;
static int32_t x342 = -1;
uint16_t x347 = 3U;
int16_t x349 = -10905;
int32_t x350 = -408;
int8_t x354 = -1;
int32_t x359 = 19294;
int32_t x362 = -277180;
static uint32_t x365 = 1U;
int64_t x381 = INT64_MAX;
int64_t x385 = INT64_MAX;
int32_t t95 = -7662139;
uint32_t x395 = UINT32_MAX;
static volatile int8_t x397 = -1;
volatile int32_t t97 = -10861655;
int32_t t99 = -2348;


void f0(void) {
	uint8_t x1 = 68U;
	volatile int64_t x2 = 108325841LL;
	volatile int32_t x3 = -1;
	volatile int8_t x4 = INT8_MAX;
	int32_t t0 = -80601;

	t0 = (((x1^x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 12377LLU;
	volatile int64_t x6 = INT64_MAX;
	int16_t x7 = INT16_MAX;
	uint32_t x8 = 1495U;
	static int32_t t1 = -22;

	t1 = (((x5^x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint64_t x11 = 85930LLU;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -15078;

	t2 = (((x9^x10)%x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 11;
	volatile int64_t x14 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	int32_t t3 = 1;

	t3 = (((x13^x14)%x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 1U;
	int16_t x18 = 0;
	static volatile uint16_t x19 = 37U;
	int64_t x20 = -140378266037643330LL;
	int32_t t4 = -6209135;

	t4 = (((x17^x18)%x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = -59;
	int64_t x24 = INT64_MAX;
	volatile int32_t t5 = 1;

	t5 = (((x21^x22)%x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MAX;
	int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	static int64_t x28 = 6LL;
	int32_t t6 = -98676;

	t6 = (((x25^x26)%x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = UINT8_MAX;
	volatile int8_t x30 = INT8_MAX;
	int64_t x32 = -1LL;
	int32_t t7 = 37870096;

	t7 = (((x29^x30)%x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = INT16_MIN;
	volatile int32_t t8 = 1;

	t8 = (((x33^x34)%x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x38 = 215535U;
	int32_t x39 = -20722120;
	int16_t x40 = -2;
	volatile int32_t t9 = -926;

	t9 = (((x37^x38)%x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 4325U;
	int64_t x43 = -1LL;
	static int32_t t10 = 124;

	t10 = (((x41^x42)%x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	int64_t x46 = 766LL;
	int16_t x47 = -1;
	volatile int32_t x48 = INT32_MIN;
	volatile int32_t t11 = -2183420;

	t11 = (((x45^x46)%x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int32_t x51 = -228;
	volatile int16_t x52 = INT16_MIN;
	int32_t t12 = 238686615;

	t12 = (((x49^x50)%x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x54 = -642394416;
	uint64_t x55 = 231LLU;
	static uint64_t x56 = 86845314198867LLU;
	volatile int32_t t13 = 1;

	t13 = (((x53^x54)%x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	static int64_t x60 = 230249896LL;
	static int32_t t14 = -3473;

	t14 = (((x57^x58)%x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int64_t x62 = INT64_MIN;
	uint32_t x63 = UINT32_MAX;
	int32_t x64 = -1;
	volatile int32_t t15 = -2692350;

	t15 = (((x61^x62)%x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 11U;
	int64_t x67 = INT64_MIN;
	int64_t x68 = INT64_MAX;
	int32_t t16 = 59;

	t16 = (((x65^x66)%x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 13847836453716191LLU;
	int16_t x71 = INT16_MIN;
	volatile int64_t x72 = INT64_MAX;
	int32_t t17 = 73280;

	t17 = (((x69^x70)%x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = UINT32_MAX;
	int64_t x75 = INT64_MIN;
	uint32_t x76 = 262707977U;

	t18 = (((x73^x74)%x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = UINT32_MAX;
	static volatile int32_t t19 = -221;

	t19 = (((x77^x78)%x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	int32_t x83 = -51;
	volatile int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 2;

	t20 = (((x81^x82)%x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -3;
	uint16_t x86 = 2983U;
	static int32_t x88 = 1071173670;
	volatile int32_t t21 = -222312565;

	t21 = (((x85^x86)%x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = INT16_MAX;
	uint8_t x90 = 113U;
	int8_t x91 = INT8_MIN;
	volatile int32_t t22 = -32746656;

	t22 = (((x89^x90)%x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	uint32_t x94 = UINT32_MAX;
	static uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 31;

	t23 = (((x93^x94)%x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x98 = INT16_MAX;
	uint8_t x100 = UINT8_MAX;
	static volatile int32_t t24 = -36005914;

	t24 = (((x97^x98)%x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = INT8_MIN;
	volatile int8_t x102 = INT8_MAX;
	int64_t x103 = -1LL;
	static int32_t x104 = INT32_MIN;
	volatile int32_t t25 = -787;

	t25 = (((x101^x102)%x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x109 = INT16_MIN;
	volatile int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	int32_t t26 = -3576;

	t26 = (((x109^x110)%x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x113 = -13;
	uint16_t x114 = 3992U;
	int64_t x115 = -13LL;
	uint64_t x116 = UINT64_MAX;
	int32_t t27 = -19067;

	t27 = (((x113^x114)%x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x117 = INT16_MIN;
	int32_t x118 = 3744;
	int32_t x119 = -506669850;
	int32_t x120 = INT32_MIN;
	int32_t t28 = -32105616;

	t28 = (((x117^x118)%x119)==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -1LL;
	int8_t x122 = -1;
	static int32_t x123 = INT32_MIN;
	uint64_t x124 = UINT64_MAX;

	t29 = (((x121^x122)%x123)==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 850424661695LLU;
	volatile uint8_t x126 = 1U;
	uint32_t x128 = UINT32_MAX;
	int32_t t30 = 12885641;

	t30 = (((x125^x126)%x127)==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x129 = 5;
	int32_t x131 = 4384;
	static volatile int64_t x132 = INT64_MIN;
	static volatile int32_t t31 = 121;

	t31 = (((x129^x130)%x131)==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = 5U;
	static volatile int64_t x134 = INT64_MAX;
	static volatile int32_t x135 = -1;
	static int64_t x136 = 16595LL;
	int32_t t32 = -1743647;

	t32 = (((x133^x134)%x135)==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = UINT64_MAX;
	static int8_t x138 = INT8_MAX;
	int16_t x139 = 7;
	int64_t x140 = INT64_MIN;

	t33 = (((x137^x138)%x139)==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = INT64_MAX;
	static uint16_t x142 = 275U;
	static volatile int32_t t34 = -3;

	t34 = (((x141^x142)%x143)==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = -1;
	int64_t x146 = -126714197060666669LL;
	int8_t x147 = -1;
	uint16_t x148 = 10683U;
	int32_t t35 = 6;

	t35 = (((x145^x146)%x147)==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	static int32_t x150 = 1830;
	int8_t x152 = INT8_MIN;
	volatile int32_t t36 = 5862;

	t36 = (((x149^x150)%x151)==x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = -1LL;
	static int64_t x155 = INT64_MAX;
	uint64_t x156 = 18846921608871622LLU;

	t37 = (((x153^x154)%x155)==x156);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x158 = INT32_MAX;
	int16_t x159 = INT16_MAX;
	int32_t x160 = -1;
	volatile int32_t t38 = 8882217;

	t38 = (((x157^x158)%x159)==x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x165 = 1666300243LLU;
	int16_t x166 = 0;
	uint8_t x167 = 113U;

	t39 = (((x165^x166)%x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = -584181;
	uint8_t x170 = 3U;
	volatile int16_t x171 = INT16_MIN;
	uint64_t x172 = 16932970650LLU;
	volatile int32_t t40 = 341;

	t40 = (((x169^x170)%x171)==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 19U;
	int16_t x174 = INT16_MIN;
	int16_t x176 = -2;
	volatile int32_t t41 = 1950451;

	t41 = (((x173^x174)%x175)==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x178 = -1LL;
	int32_t x180 = 101;
	int32_t t42 = -48668984;

	t42 = (((x177^x178)%x179)==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x181 = 87LLU;
	volatile int16_t x183 = -1;
	uint32_t x184 = 450U;
	int32_t t43 = 48803375;

	t43 = (((x181^x182)%x183)==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	static int16_t x186 = -1;
	int32_t x187 = -6784;
	volatile int8_t x188 = INT8_MAX;
	static int32_t t44 = 835;

	t44 = (((x185^x186)%x187)==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x190 = -244;
	int16_t x191 = INT16_MIN;
	static volatile int32_t t45 = -14514454;

	t45 = (((x189^x190)%x191)==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = 567;
	volatile int64_t x194 = INT64_MIN;
	int32_t x195 = INT32_MIN;
	static int16_t x196 = 6;
	volatile int32_t t46 = 1;

	t46 = (((x193^x194)%x195)==x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	static int64_t x198 = INT64_MIN;
	int8_t x199 = -1;
	static volatile int32_t t47 = 3;

	t47 = (((x197^x198)%x199)==x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = 363U;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t48 = 2;

	t48 = (((x201^x202)%x203)==x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x206 = INT16_MIN;
	int8_t x208 = -1;
	volatile int32_t t49 = 1;

	t49 = (((x205^x206)%x207)==x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = 905601947U;
	volatile int64_t x210 = -1LL;
	uint64_t x211 = 10048912207346LLU;
	volatile int64_t x212 = -1LL;
	int32_t t50 = 101;

	t50 = (((x209^x210)%x211)==x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 1152493U;
	volatile uint16_t x216 = 899U;
	volatile int32_t t51 = 422534223;

	t51 = (((x213^x214)%x215)==x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = -1;
	uint16_t x219 = 60U;

	t52 = (((x217^x218)%x219)==x220);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x222 = -8;
	static int32_t x223 = 1399;
	static uint32_t x224 = 14305U;
	volatile int32_t t53 = -97001922;

	t53 = (((x221^x222)%x223)==x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x225 = 51195U;
	uint64_t x226 = 2129071007345981971LLU;
	static int64_t x227 = INT64_MIN;
	int64_t x228 = -1LL;

	t54 = (((x225^x226)%x227)==x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	int16_t x230 = -1;
	int32_t x231 = -1;
	int16_t x232 = -1;
	int32_t t55 = 122623;

	t55 = (((x229^x230)%x231)==x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x233 = 7948913LLU;
	uint32_t x234 = UINT32_MAX;
	volatile int64_t x235 = INT64_MAX;
	uint64_t x236 = 573004219691853311LLU;
	int32_t t56 = 29838;

	t56 = (((x233^x234)%x235)==x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint8_t x238 = 0U;
	uint32_t x239 = 1015272900U;
	int16_t x240 = -1;
	static volatile int32_t t57 = 4683;

	t57 = (((x237^x238)%x239)==x240);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = 1LL;
	int16_t x242 = 20;
	static uint8_t x243 = 5U;
	int64_t x244 = -2LL;
	int32_t t58 = 2093;

	t58 = (((x241^x242)%x243)==x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x246 = UINT32_MAX;
	uint8_t x247 = 12U;
	uint64_t x248 = 638018LLU;
	int32_t t59 = -2;

	t59 = (((x245^x246)%x247)==x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x249 = 19288U;

	t60 = (((x249^x250)%x251)==x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MAX;
	int16_t x254 = -989;
	volatile uint64_t x255 = 1041257494593LLU;
	volatile int32_t t61 = -479961;

	t61 = (((x253^x254)%x255)==x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -5;
	static int16_t x258 = -1;
	int16_t x259 = -3;
	int16_t x260 = INT16_MAX;
	int32_t t62 = 58268819;

	t62 = (((x257^x258)%x259)==x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = 1;
	int64_t x262 = -31160638LL;
	uint16_t x263 = 1U;
	int16_t x264 = INT16_MIN;

	t63 = (((x261^x262)%x263)==x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = 57;
	int32_t x266 = 1313;
	uint16_t x268 = 1219U;
	int32_t t64 = -10545;

	t64 = (((x265^x266)%x267)==x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = INT16_MIN;
	volatile int8_t x270 = INT8_MIN;
	static int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MAX;
	static int32_t t65 = 0;

	t65 = (((x269^x270)%x271)==x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = INT8_MIN;
	int64_t x274 = INT64_MIN;
	volatile int64_t x275 = INT64_MIN;
	static volatile int32_t t66 = -95;

	t66 = (((x273^x274)%x275)==x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MIN;
	static uint16_t x278 = 24480U;
	int16_t x279 = INT16_MAX;
	uint16_t x280 = 289U;
	int32_t t67 = -749642850;

	t67 = (((x277^x278)%x279)==x280);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x281 = INT16_MIN;
	static int8_t x282 = 0;
	int64_t x283 = INT64_MIN;

	t68 = (((x281^x282)%x283)==x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MIN;
	static volatile uint64_t x287 = 107501121340934833LLU;
	int8_t x288 = INT8_MIN;
	int32_t t69 = 9637;

	t69 = (((x285^x286)%x287)==x288);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x289 = 18;
	int16_t x290 = INT16_MIN;
	int16_t x291 = -1;
	int32_t t70 = -1;

	t70 = (((x289^x290)%x291)==x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -35550LL;
	int8_t x294 = -1;
	uint32_t x295 = 1935383806U;
	int8_t x296 = 0;
	volatile int32_t t71 = -11213240;

	t71 = (((x293^x294)%x295)==x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = INT8_MIN;
	volatile int32_t x298 = INT32_MIN;
	volatile int16_t x300 = -1;

	t72 = (((x297^x298)%x299)==x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x302 = INT64_MIN;
	volatile uint32_t x303 = 30U;
	int64_t x304 = 111918861LL;
	int32_t t73 = 56375;

	t73 = (((x301^x302)%x303)==x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x306 = UINT16_MAX;
	volatile int16_t x307 = -13234;
	int16_t x308 = -13268;
	int32_t t74 = -1;

	t74 = (((x305^x306)%x307)==x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = 11;
	int32_t x310 = 4;
	uint8_t x311 = 2U;
	volatile uint16_t x312 = 3875U;
	int32_t t75 = 1619307;

	t75 = (((x309^x310)%x311)==x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	int32_t x316 = INT32_MIN;
	volatile int32_t t76 = 6;

	t76 = (((x313^x314)%x315)==x316);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = INT64_MIN;
	static uint8_t x318 = 42U;
	static int32_t x319 = -32504;
	static volatile uint8_t x320 = 15U;
	int32_t t77 = 1;

	t77 = (((x317^x318)%x319)==x320);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = -49;
	volatile int16_t x322 = -1;
	volatile int8_t x323 = -1;
	volatile uint16_t x324 = 21285U;

	t78 = (((x321^x322)%x323)==x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = INT64_MIN;
	int32_t x326 = -1;
	static int8_t x328 = INT8_MAX;

	t79 = (((x325^x326)%x327)==x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = 1290399478445618303LLU;
	int64_t x330 = INT64_MAX;
	volatile int32_t t80 = -8912;

	t80 = (((x329^x330)%x331)==x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x333 = 6828LLU;
	uint32_t x334 = 3041137U;
	volatile int8_t x335 = INT8_MIN;
	static volatile int32_t t81 = 1053150550;

	t81 = (((x333^x334)%x335)==x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 2668923U;
	int16_t x338 = 1;
	static int32_t x339 = INT32_MIN;
	int8_t x340 = 0;
	volatile int32_t t82 = 676600;

	t82 = (((x337^x338)%x339)==x340);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -1LL;
	volatile int64_t x343 = INT64_MAX;
	int8_t x344 = -12;
	volatile int32_t t83 = -1;

	t83 = (((x341^x342)%x343)==x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x345 = 665LLU;
	int16_t x346 = -1;
	volatile uint8_t x348 = 42U;
	static int32_t t84 = 3788899;

	t84 = (((x345^x346)%x347)==x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x351 = 24759488U;
	int16_t x352 = INT16_MAX;
	volatile int32_t t85 = -297461717;

	t85 = (((x349^x350)%x351)==x352);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x353 = UINT16_MAX;
	int8_t x355 = -5;
	int8_t x356 = 5;
	volatile int32_t t86 = -2212;

	t86 = (((x353^x354)%x355)==x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x357 = 4;
	uint16_t x358 = 2803U;
	volatile uint8_t x360 = 116U;
	volatile int32_t t87 = 288361;

	t87 = (((x357^x358)%x359)==x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x361 = INT64_MIN;
	int64_t x363 = 24975607231LL;
	int8_t x364 = INT8_MIN;
	int32_t t88 = 22;

	t88 = (((x361^x362)%x363)==x364);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x366 = -1LL;
	int64_t x367 = INT64_MIN;
	static int32_t x368 = INT32_MIN;
	volatile int32_t t89 = 1;

	t89 = (((x365^x366)%x367)==x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x369 = INT8_MAX;
	volatile uint16_t x370 = 2U;
	int64_t x371 = INT64_MAX;
	int8_t x372 = INT8_MAX;
	int32_t t90 = -1022706;

	t90 = (((x369^x370)%x371)==x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = -1;
	int8_t x374 = 0;
	int64_t x375 = 16180395042251269LL;
	int8_t x376 = -45;
	static int32_t t91 = -1867;

	t91 = (((x373^x374)%x375)==x376);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x377 = 48;
	static uint32_t x378 = 13716910U;
	int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MAX;
	int32_t t92 = 759543;

	t92 = (((x377^x378)%x379)==x380);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x382 = -1;
	volatile int32_t x383 = INT32_MIN;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t93 = 41811;

	t93 = (((x381^x382)%x383)==x384);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x386 = 167U;
	int8_t x387 = -27;
	volatile uint32_t x388 = UINT32_MAX;
	volatile int32_t t94 = -47;

	t94 = (((x385^x386)%x387)==x388);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = -19;
	static volatile int8_t x390 = INT8_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	int16_t x392 = 5;

	t95 = (((x389^x390)%x391)==x392);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x393 = -2550LL;
	int32_t x394 = -1;
	uint32_t x396 = UINT32_MAX;
	int32_t t96 = -4;

	t96 = (((x393^x394)%x395)==x396);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x398 = 76U;
	volatile int32_t x399 = INT32_MIN;
	volatile int64_t x400 = INT64_MAX;

	t97 = (((x397^x398)%x399)==x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = UINT64_MAX;
	volatile int16_t x402 = -1;
	volatile uint64_t x403 = UINT64_MAX;
	int32_t x404 = -16453866;
	int32_t t98 = -305092;

	t98 = (((x401^x402)%x403)==x404);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = 104687027LL;
	int8_t x406 = INT8_MIN;
	int16_t x407 = 1;
	int8_t x408 = INT8_MIN;

	t99 = (((x405^x406)%x407)==x408);

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

