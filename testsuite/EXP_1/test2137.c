#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
uint8_t x14 = 9U;
static volatile int64_t t3 = 211760036884616LL;
uint64_t x18 = 88341828LLU;
uint64_t t4 = 6690333559LLU;
uint32_t x21 = UINT32_MAX;
static int16_t x23 = INT16_MAX;
int32_t t5 = 49002;
uint32_t x32 = UINT32_MAX;
int64_t x53 = 8864863831259587LL;
int64_t x54 = 49917883956LL;
static int32_t x55 = 2655644;
int16_t x58 = -53;
static volatile int8_t x61 = -1;
int32_t x62 = INT32_MAX;
int64_t x64 = INT64_MIN;
volatile int32_t t15 = -209876823;
volatile uint16_t x78 = 12U;
int64_t x83 = INT64_MIN;
int32_t x86 = -1;
static int16_t x90 = -1;
int16_t x99 = INT16_MIN;
int32_t x100 = INT32_MIN;
uint16_t x103 = UINT16_MAX;
uint32_t x104 = UINT32_MAX;
uint32_t t24 = 9660U;
int16_t x105 = -1;
volatile int64_t t25 = 28LL;
int64_t x123 = -14376430910LL;
int64_t x127 = INT64_MIN;
static volatile int8_t x131 = INT8_MIN;
volatile int32_t x134 = INT32_MIN;
static int16_t x137 = INT16_MAX;
int32_t x139 = -1;
uint8_t x142 = 30U;
int32_t x155 = INT32_MAX;
volatile int16_t x157 = INT16_MIN;
int16_t x163 = 994;
static volatile int8_t x167 = -1;
volatile int8_t x168 = -1;
uint8_t x184 = 25U;
uint64_t x187 = 2660LLU;
volatile int64_t t44 = -1534646501LL;
int16_t x191 = INT16_MAX;
int32_t t45 = -446140068;
uint8_t x193 = 27U;
uint32_t x197 = 3401200U;
int32_t x202 = INT32_MIN;
int16_t x206 = INT16_MIN;
static uint32_t t49 = 854737U;
int16_t x216 = -1;
int64_t x219 = 14912673042LL;
volatile uint64_t x223 = 89LLU;
int32_t x226 = -1;
static int32_t t54 = -221436555;
int64_t x230 = -1LL;
uint32_t x231 = 7426335U;
uint32_t x232 = 7308U;
int16_t x236 = -1;
uint64_t x239 = UINT64_MAX;
uint32_t x242 = 24432U;
uint16_t x247 = 147U;
volatile int32_t t59 = 10;
uint64_t x252 = 1061475951860713LLU;
int32_t t61 = -1625;
volatile int8_t x257 = INT8_MIN;
uint64_t t64 = 518886038198LLU;
uint16_t x269 = UINT16_MAX;
static int16_t x270 = INT16_MIN;
static int32_t t66 = 0;
int64_t x277 = -1LL;
static int16_t x278 = -404;
volatile uint16_t x282 = 205U;
int64_t x284 = -1LL;
uint32_t x288 = UINT32_MAX;
int8_t x292 = INT8_MAX;
int32_t t71 = 936098;
int8_t x305 = 7;
static int64_t x312 = -4924327545627LL;
int64_t t75 = -80223738319LL;
static int64_t x314 = -1LL;
int8_t x319 = INT8_MIN;
int32_t x323 = -1;
uint64_t t78 = 20LLU;
int32_t t79 = -38987948;
static int32_t t81 = 0;
uint64_t x337 = 47LLU;
static volatile int32_t t83 = 59930072;
uint64_t x345 = UINT64_MAX;
int16_t x357 = INT16_MIN;
volatile int8_t x358 = INT8_MAX;
uint8_t x362 = UINT8_MAX;
volatile int32_t t88 = 0;
volatile int32_t t90 = -10413636;
volatile int32_t t91 = -239931344;
uint32_t x388 = UINT32_MAX;
int16_t x390 = INT16_MIN;
uint16_t x393 = UINT16_MAX;
volatile uint16_t x396 = 39U;
static int8_t x397 = -27;
static uint16_t x405 = 29769U;


void f0(void) {
	int16_t x1 = 20;
	int32_t x3 = INT32_MIN;
	uint64_t x4 = 1929298632LLU;
	static uint64_t t0 = 7959192595153144LLU;

	t0 = (((x1^x2)<x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int32_t x6 = 0;
	static int8_t x7 = -12;
	volatile uint8_t x8 = 13U;
	volatile int32_t t1 = 3339;

	t1 = (((x5^x6)<x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 372U;
	int8_t x10 = INT8_MAX;
	uint64_t x11 = UINT64_MAX;
	uint32_t x12 = 516206U;
	uint32_t t2 = 63U;

	t2 = (((x9^x10)<x11)%x12);

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int64_t x15 = 1359081929LL;
	int64_t x16 = -3692259796879300LL;

	t3 = (((x13^x14)<x15)%x16);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	volatile int8_t x19 = INT8_MAX;
	volatile uint64_t x20 = UINT64_MAX;

	t4 = (((x17^x18)<x19)%x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MIN;
	int32_t x24 = -109;

	t5 = (((x21^x22)<x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = UINT16_MAX;
	uint32_t x30 = UINT32_MAX;
	uint8_t x31 = 1U;
	volatile uint32_t t6 = 10U;

	t6 = (((x29^x30)<x31)%x32);

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -31;
	static int8_t x34 = INT8_MAX;
	volatile int8_t x35 = -1;
	volatile uint32_t x36 = 721868U;
	uint32_t t7 = 4334U;

	t7 = (((x33^x34)<x35)%x36);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int64_t x38 = INT64_MIN;
	int16_t x39 = 7;
	static volatile int32_t x40 = INT32_MIN;
	static int32_t t8 = 24;

	t8 = (((x37^x38)<x39)%x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int64_t x42 = INT64_MIN;
	int64_t x43 = -1LL;
	static uint32_t x44 = UINT32_MAX;
	uint32_t t9 = 6U;

	t9 = (((x41^x42)<x43)%x44);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -2;
	uint8_t x46 = 3U;
	int32_t x47 = INT32_MAX;
	static int16_t x48 = INT16_MIN;
	int32_t t10 = 16;

	t10 = (((x45^x46)<x47)%x48);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	int8_t x50 = INT8_MAX;
	int8_t x51 = -1;
	volatile int64_t x52 = 3345531130576LL;
	static volatile int64_t t11 = -120739LL;

	t11 = (((x49^x50)<x51)%x52);

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x56 = INT16_MIN;
	int32_t t12 = 2;

	t12 = (((x53^x54)<x55)%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = INT8_MIN;
	uint64_t x59 = 77632826400566LLU;
	volatile uint32_t x60 = 5113817U;
	uint32_t t13 = 120504249U;

	t13 = (((x57^x58)<x59)%x60);

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x63 = UINT64_MAX;
	volatile int64_t t14 = -486382801070LL;

	t14 = (((x61^x62)<x63)%x64);

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = -1;
	volatile int16_t x66 = -1;
	int16_t x67 = INT16_MAX;
	uint8_t x68 = UINT8_MAX;

	t15 = (((x65^x66)<x67)%x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = UINT32_MAX;
	static int16_t x70 = INT16_MAX;
	int8_t x71 = INT8_MIN;
	uint32_t x72 = UINT32_MAX;
	static volatile uint32_t t16 = 1288684431U;

	t16 = (((x69^x70)<x71)%x72);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	uint8_t x74 = 1U;
	volatile uint8_t x75 = 111U;
	static int8_t x76 = -1;
	volatile int32_t t17 = 237;

	t17 = (((x73^x74)<x75)%x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = 118605204923504LLU;
	static int16_t x79 = INT16_MAX;
	static int32_t x80 = INT32_MIN;
	volatile int32_t t18 = 2121;

	t18 = (((x77^x78)<x79)%x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MAX;
	int32_t x82 = 28;
	volatile int32_t x84 = -134;
	static int32_t t19 = 269;

	t19 = (((x81^x82)<x83)%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MAX;
	int32_t x87 = -1;
	uint16_t x88 = 2739U;
	static int32_t t20 = 1090;

	t20 = (((x85^x86)<x87)%x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	volatile int32_t x91 = INT32_MIN;
	int64_t x92 = INT64_MIN;
	volatile int64_t t21 = 69648662998LL;

	t21 = (((x89^x90)<x91)%x92);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = INT8_MIN;
	int16_t x94 = 3888;
	static int32_t x95 = -236;
	volatile int16_t x96 = -1;
	volatile int32_t t22 = 440231;

	t22 = (((x93^x94)<x95)%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	uint8_t x98 = 51U;
	volatile int32_t t23 = 8504;

	t23 = (((x97^x98)<x99)%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MIN;
	int16_t x102 = -10986;

	t24 = (((x101^x102)<x103)%x104);

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x106 = 56U;
	volatile int8_t x107 = INT8_MIN;
	int64_t x108 = 248700051662157LL;

	t25 = (((x105^x106)<x107)%x108);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -595240;
	int16_t x110 = 2320;
	int32_t x111 = 181;
	int16_t x112 = -1;
	int32_t t26 = 1;

	t26 = (((x109^x110)<x111)%x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 101U;
	static uint16_t x114 = 14171U;
	volatile int32_t x115 = -1;
	uint16_t x116 = UINT16_MAX;
	int32_t t27 = 186797269;

	t27 = (((x113^x114)<x115)%x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t28 = -10098292;

	t28 = (((x121^x122)<x123)%x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = UINT64_MAX;
	static int32_t x128 = INT32_MAX;
	volatile int32_t t29 = 12;

	t29 = (((x125^x126)<x127)%x128);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = UINT16_MAX;
	uint8_t x130 = UINT8_MAX;
	uint32_t x132 = 3U;
	static uint32_t t30 = 63U;

	t30 = (((x129^x130)<x131)%x132);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MAX;
	int32_t x135 = INT32_MIN;
	int32_t x136 = 23487;
	int32_t t31 = 1;

	t31 = (((x133^x134)<x135)%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x138 = -1;
	int32_t x140 = -1;
	int32_t t32 = -231613;

	t32 = (((x137^x138)<x139)%x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x141 = 3;
	uint64_t x143 = 19800311981LLU;
	int64_t x144 = INT64_MIN;
	int64_t t33 = 184398660440828484LL;

	t33 = (((x141^x142)<x143)%x144);

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 371U;
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = INT64_MAX;
	uint16_t x148 = 24U;
	static volatile int32_t t34 = 16227865;

	t34 = (((x145^x146)<x147)%x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x149 = 2413U;
	uint32_t x150 = 3U;
	uint8_t x151 = 2U;
	int64_t x152 = 154201582LL;
	volatile int64_t t35 = 8116LL;

	t35 = (((x149^x150)<x151)%x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	static volatile uint32_t x154 = 2066159570U;
	int8_t x156 = INT8_MAX;
	volatile int32_t t36 = 53774;

	t36 = (((x153^x154)<x155)%x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x158 = -1;
	volatile uint8_t x159 = UINT8_MAX;
	int8_t x160 = -1;
	int32_t t37 = -619;

	t37 = (((x157^x158)<x159)%x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 1381807U;
	volatile int32_t x162 = INT32_MAX;
	int64_t x164 = INT64_MAX;
	volatile int64_t t38 = -92LL;

	t38 = (((x161^x162)<x163)%x164);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = -1091;
	volatile int16_t x166 = -5836;
	int32_t t39 = 5420;

	t39 = (((x165^x166)<x167)%x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = INT8_MIN;
	uint64_t x170 = 439LLU;
	int64_t x171 = INT64_MIN;
	int32_t x172 = INT32_MIN;
	volatile int32_t t40 = -5470;

	t40 = (((x169^x170)<x171)%x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x173 = 15U;
	uint64_t x174 = UINT64_MAX;
	uint64_t x175 = UINT64_MAX;
	int32_t x176 = -1056380;
	volatile int32_t t41 = -284296;

	t41 = (((x173^x174)<x175)%x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = -47;
	int32_t x178 = 1919128;
	volatile uint32_t x179 = UINT32_MAX;
	static int64_t x180 = INT64_MIN;
	static volatile int64_t t42 = -4305616416233LL;

	t42 = (((x177^x178)<x179)%x180);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = -1LL;
	int64_t x182 = -2851831465606LL;
	uint8_t x183 = 116U;
	static int32_t t43 = 33264;

	t43 = (((x181^x182)<x183)%x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = 15831441472LL;
	int32_t x186 = INT32_MIN;
	int64_t x188 = INT64_MIN;

	t44 = (((x185^x186)<x187)%x188);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x189 = 776490014LLU;
	int16_t x190 = INT16_MAX;
	int32_t x192 = INT32_MAX;

	t45 = (((x189^x190)<x191)%x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x194 = 341502088;
	static volatile int32_t x195 = -1;
	int8_t x196 = -1;
	static int32_t t46 = 46;

	t46 = (((x193^x194)<x195)%x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x198 = -4552;
	volatile int32_t x199 = 1;
	static uint64_t x200 = UINT64_MAX;
	uint64_t t47 = 23317LLU;

	t47 = (((x197^x198)<x199)%x200);

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	uint8_t x203 = 4U;
	static int16_t x204 = 2455;
	volatile int32_t t48 = 8;

	t48 = (((x201^x202)<x203)%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x205 = UINT8_MAX;
	int8_t x207 = -1;
	volatile uint32_t x208 = UINT32_MAX;

	t49 = (((x205^x206)<x207)%x208);

	if (t49 != 1U) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x209 = 1090115478550524LLU;
	volatile int64_t x210 = -629934280021994LL;
	static uint8_t x211 = 0U;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t50 = 47435590;

	t50 = (((x209^x210)<x211)%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = 774;
	static volatile int32_t t51 = -3;

	t51 = (((x213^x214)<x215)%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x217 = 462278269619329LLU;
	volatile int8_t x218 = INT8_MAX;
	static uint64_t x220 = 9515LLU;
	uint64_t t52 = 3LLU;

	t52 = (((x217^x218)<x219)%x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = INT8_MAX;
	int64_t x222 = 5676LL;
	uint8_t x224 = 1U;
	volatile int32_t t53 = -2458546;

	t53 = (((x221^x222)<x223)%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x225 = INT8_MAX;
	uint8_t x227 = 21U;
	uint16_t x228 = UINT16_MAX;

	t54 = (((x225^x226)<x227)%x228);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x229 = 11192U;
	volatile uint32_t t55 = 3U;

	t55 = (((x229^x230)<x231)%x232);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -1;
	uint64_t x234 = 3122921LLU;
	int64_t x235 = INT64_MIN;
	volatile int32_t t56 = -6870;

	t56 = (((x233^x234)<x235)%x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MIN;
	static uint32_t x238 = 238902205U;
	int32_t x240 = INT32_MAX;
	volatile int32_t t57 = 12149452;

	t57 = (((x237^x238)<x239)%x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x241 = UINT8_MAX;
	uint8_t x243 = 10U;
	static int64_t x244 = -528773371LL;
	int64_t t58 = -10511890545760LL;

	t58 = (((x241^x242)<x243)%x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x245 = 1;
	int32_t x246 = INT32_MIN;
	uint16_t x248 = UINT16_MAX;

	t59 = (((x245^x246)<x247)%x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = UINT64_MAX;
	static uint8_t x250 = 3U;
	static volatile uint64_t x251 = 162LLU;
	volatile uint64_t t60 = 1689254737835204LLU;

	t60 = (((x249^x250)<x251)%x252);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = 5;
	int8_t x254 = INT8_MAX;
	volatile uint16_t x255 = 1U;
	volatile int32_t x256 = -1;

	t61 = (((x253^x254)<x255)%x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x258 = 6926857U;
	volatile int16_t x259 = INT16_MAX;
	static int32_t x260 = INT32_MIN;
	static int32_t t62 = -3491;

	t62 = (((x257^x258)<x259)%x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MIN;
	int16_t x262 = 1;
	int8_t x263 = 46;
	volatile int64_t x264 = -1LL;
	volatile int64_t t63 = 2154275713909LL;

	t63 = (((x261^x262)<x263)%x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = 45;
	volatile int16_t x266 = -74;
	uint8_t x267 = 1U;
	uint64_t x268 = UINT64_MAX;

	t64 = (((x265^x266)<x267)%x268);

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x271 = 4430693709200645263LLU;
	static int8_t x272 = -1;
	int32_t t65 = -72055019;

	t65 = (((x269^x270)<x271)%x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = -1;
	uint32_t x274 = 193U;
	uint16_t x275 = 4U;
	int16_t x276 = -1;

	t66 = (((x273^x274)<x275)%x276);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x279 = INT32_MAX;
	uint64_t x280 = 927424331549LLU;
	uint64_t t67 = 86516914843828842LLU;

	t67 = (((x277^x278)<x279)%x280);

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x283 = -1;
	volatile int64_t t68 = -188704LL;

	t68 = (((x281^x282)<x283)%x284);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x285 = INT16_MAX;
	int32_t x286 = INT32_MAX;
	int32_t x287 = INT32_MAX;
	uint32_t t69 = 873137397U;

	t69 = (((x285^x286)<x287)%x288);

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MAX;
	uint8_t x290 = 37U;
	int64_t x291 = -543381433692926LL;
	int32_t t70 = -9;

	t70 = (((x289^x290)<x291)%x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -1;
	uint64_t x294 = UINT64_MAX;
	uint16_t x295 = 1U;
	volatile int32_t x296 = -1;

	t71 = (((x293^x294)<x295)%x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x297 = INT8_MIN;
	int64_t x298 = -1LL;
	int64_t x299 = INT64_MIN;
	int32_t x300 = INT32_MIN;
	int32_t t72 = 1554302;

	t72 = (((x297^x298)<x299)%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 60U;
	int16_t x302 = INT16_MAX;
	volatile int32_t x303 = INT32_MIN;
	static volatile uint8_t x304 = 1U;
	static volatile int32_t t73 = -9516;

	t73 = (((x301^x302)<x303)%x304);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x306 = UINT8_MAX;
	int8_t x307 = -1;
	static int32_t x308 = -1;
	int32_t t74 = -1008066828;

	t74 = (((x305^x306)<x307)%x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x309 = 27U;
	uint8_t x310 = 14U;
	uint32_t x311 = 11779U;

	t75 = (((x309^x310)<x311)%x312);

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x313 = 3431;
	static uint8_t x315 = 26U;
	static int64_t x316 = INT64_MIN;
	volatile int64_t t76 = 4891537567LL;

	t76 = (((x313^x314)<x315)%x316);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x317 = UINT8_MAX;
	int32_t x318 = INT32_MIN;
	static int16_t x320 = 34;
	int32_t t77 = 110586;

	t77 = (((x317^x318)<x319)%x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x321 = INT8_MIN;
	int32_t x322 = 297;
	static uint64_t x324 = UINT64_MAX;

	t78 = (((x321^x322)<x323)%x324);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	int32_t x326 = INT32_MIN;
	volatile int8_t x327 = 1;
	int16_t x328 = INT16_MAX;

	t79 = (((x325^x326)<x327)%x328);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = INT8_MIN;
	int64_t x330 = INT64_MAX;
	volatile int16_t x331 = -2;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t80 = 585U;

	t80 = (((x329^x330)<x331)%x332);

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = UINT32_MAX;
	int16_t x334 = INT16_MIN;
	uint32_t x335 = 704U;
	int16_t x336 = INT16_MIN;

	t81 = (((x333^x334)<x335)%x336);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x338 = 16U;
	static int32_t x339 = INT32_MIN;
	uint64_t x340 = UINT64_MAX;
	static volatile uint64_t t82 = 20612245LLU;

	t82 = (((x337^x338)<x339)%x340);

	if (t82 != 1LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = -1;
	static volatile int32_t x342 = INT32_MIN;
	int8_t x343 = -1;
	int8_t x344 = -1;

	t83 = (((x341^x342)<x343)%x344);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = INT16_MIN;
	int64_t x347 = -1LL;
	static volatile int8_t x348 = INT8_MIN;
	volatile int32_t t84 = 103555;

	t84 = (((x345^x346)<x347)%x348);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MIN;
	int64_t x350 = INT64_MIN;
	volatile uint32_t x351 = 1698991U;
	int64_t x352 = INT64_MIN;
	int64_t t85 = -526410835406990292LL;

	t85 = (((x349^x350)<x351)%x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x353 = 56890067697312LLU;
	int8_t x354 = 0;
	uint64_t x355 = 1010285855268LLU;
	int8_t x356 = INT8_MIN;
	int32_t t86 = -4386;

	t86 = (((x353^x354)<x355)%x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x359 = INT32_MIN;
	uint32_t x360 = 1693U;
	volatile uint32_t t87 = 249288570U;

	t87 = (((x357^x358)<x359)%x360);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	static int8_t x363 = 0;
	volatile int16_t x364 = INT16_MIN;

	t88 = (((x361^x362)<x363)%x364);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x365 = INT8_MIN;
	static int16_t x366 = 971;
	uint16_t x367 = 19U;
	uint32_t x368 = 225982606U;
	volatile uint32_t t89 = 12851U;

	t89 = (((x365^x366)<x367)%x368);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x369 = UINT16_MAX;
	int8_t x370 = 13;
	int8_t x371 = INT8_MAX;
	int32_t x372 = INT32_MIN;

	t90 = (((x369^x370)<x371)%x372);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x373 = 23035259LLU;
	uint64_t x374 = 1783038587670LLU;
	volatile int64_t x375 = -1LL;
	static volatile int8_t x376 = 4;

	t91 = (((x373^x374)<x375)%x376);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = -1;
	int16_t x378 = -10;
	static uint8_t x379 = 12U;
	static uint32_t x380 = 6449U;
	static uint32_t t92 = 24U;

	t92 = (((x377^x378)<x379)%x380);

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MIN;
	int16_t x382 = -1;
	volatile uint32_t x383 = 273232U;
	uint8_t x384 = 16U;
	volatile int32_t t93 = 59;

	t93 = (((x381^x382)<x383)%x384);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = -15660355107903LL;
	static volatile int64_t x386 = INT64_MIN;
	uint32_t x387 = 3217227U;
	volatile uint32_t t94 = 207529U;

	t94 = (((x385^x386)<x387)%x388);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x389 = INT32_MAX;
	static uint16_t x391 = UINT16_MAX;
	int16_t x392 = INT16_MIN;
	volatile int32_t t95 = -699728837;

	t95 = (((x389^x390)<x391)%x392);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x394 = -1LL;
	int8_t x395 = INT8_MIN;
	int32_t t96 = 1048756;

	t96 = (((x393^x394)<x395)%x396);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = -1;
	int32_t x399 = -53650;
	int32_t x400 = INT32_MIN;
	static volatile int32_t t97 = 8377470;

	t97 = (((x397^x398)<x399)%x400);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = 38LL;
	int64_t x402 = -1225796664390545LL;
	int64_t x403 = -33412LL;
	static uint32_t x404 = 21U;
	volatile uint32_t t98 = 24245537U;

	t98 = (((x401^x402)<x403)%x404);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x406 = -1;
	static uint32_t x407 = 190335575U;
	int8_t x408 = INT8_MIN;
	volatile int32_t t99 = 820687;

	t99 = (((x405^x406)<x407)%x408);

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

