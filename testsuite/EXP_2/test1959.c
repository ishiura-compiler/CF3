#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
int64_t x15 = -1LL;
int8_t x17 = INT8_MIN;
volatile int16_t x21 = INT16_MIN;
volatile int32_t t5 = 36519;
uint64_t x28 = UINT64_MAX;
int16_t x30 = -5227;
int32_t x36 = 66;
int32_t t8 = -211;
uint16_t x39 = UINT16_MAX;
uint64_t x40 = 1054306917LLU;
volatile int32_t t9 = -254;
uint32_t x42 = UINT32_MAX;
static uint64_t x50 = 39148905013631LLU;
volatile int32_t t12 = 0;
int64_t x53 = 4LL;
volatile int16_t x68 = -4081;
int32_t t16 = 697883;
static int16_t x71 = INT16_MAX;
volatile int8_t x72 = INT8_MAX;
int32_t t17 = 45454685;
volatile int32_t x80 = -10;
int64_t x81 = INT64_MAX;
uint8_t x86 = UINT8_MAX;
int32_t x87 = INT32_MAX;
volatile int32_t t21 = -79939118;
int64_t x94 = INT64_MAX;
int16_t x99 = INT16_MIN;
uint64_t x101 = 401858898855646937LLU;
int16_t x102 = 42;
static volatile int8_t x105 = -1;
int16_t x109 = -1;
volatile int32_t t27 = 243883;
int64_t x114 = 120138215493265515LL;
volatile uint8_t x116 = UINT8_MAX;
static volatile int32_t t28 = 468475;
uint8_t x118 = UINT8_MAX;
static int16_t x120 = INT16_MIN;
static int16_t x122 = INT16_MAX;
static int32_t t30 = -530781751;
uint64_t x127 = UINT64_MAX;
int32_t x128 = INT32_MAX;
int16_t x134 = -14998;
int64_t x135 = INT64_MIN;
int8_t x136 = -6;
static volatile int16_t x138 = INT16_MAX;
volatile int8_t x158 = INT8_MIN;
volatile uint32_t x163 = 4U;
int32_t x165 = -1;
static volatile int32_t t41 = -6;
static uint64_t x169 = 355403068LLU;
int64_t x174 = -1LL;
static int8_t x176 = INT8_MAX;
int64_t x177 = INT64_MAX;
int32_t x180 = INT32_MIN;
volatile int32_t t44 = -43564254;
volatile int8_t x182 = -1;
uint64_t x184 = UINT64_MAX;
int32_t x187 = -1;
int32_t t46 = 14709041;
int64_t x191 = INT64_MAX;
uint16_t x195 = 4U;
volatile int64_t x198 = 97481902609537LL;
int32_t x200 = 291755;
int8_t x206 = INT8_MIN;
uint64_t x209 = UINT64_MAX;
int16_t x213 = INT16_MAX;
int32_t x214 = INT32_MIN;
volatile int32_t x216 = INT32_MAX;
uint64_t x219 = 364680501936LLU;
int32_t t54 = -515771;
static int16_t x221 = -1;
uint64_t x222 = 29778751652215LLU;
volatile int16_t x225 = 7126;
int64_t x235 = INT64_MIN;
int32_t t58 = -69174;
static int32_t x239 = INT32_MAX;
int8_t x247 = INT8_MIN;
int16_t x248 = 0;
volatile int8_t x257 = INT8_MIN;
int16_t x259 = INT16_MIN;
int64_t x261 = -375881968LL;
int8_t x265 = INT8_MIN;
uint16_t x272 = 280U;
int32_t x275 = INT32_MAX;
static uint8_t x278 = 7U;
int8_t x281 = -1;
volatile uint64_t x283 = 13867147624508LLU;
static int64_t x293 = INT64_MIN;
static uint64_t x295 = UINT64_MAX;
volatile uint64_t x296 = 410LLU;
volatile int64_t x297 = INT64_MIN;
static int8_t x307 = INT8_MIN;
static uint16_t x310 = 4056U;
static volatile uint8_t x313 = 1U;
volatile int32_t t78 = -388624;
volatile int64_t x324 = -113LL;
int64_t x336 = INT64_MIN;
uint64_t x338 = UINT64_MAX;
int16_t x339 = -59;
volatile int8_t x347 = INT8_MAX;
volatile int8_t x349 = INT8_MIN;
uint8_t x351 = 3U;
int16_t x361 = -1;
uint32_t x362 = 3530142U;
uint64_t x364 = UINT64_MAX;
uint64_t x367 = UINT64_MAX;
int32_t t93 = 971283286;
volatile int8_t x386 = 0;
uint16_t x387 = 19774U;
int8_t x388 = -1;
int32_t x393 = -1;
volatile int32_t t98 = -1;
static int64_t x399 = -1LL;


void f0(void) {
	int64_t x1 = 831144017609LL;
	int8_t x2 = INT8_MIN;
	static uint32_t x4 = UINT32_MAX;
	volatile int32_t t0 = 19246;

	t0 = ((x1==(x2|x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 194073LL;
	int8_t x6 = 8;
	static int64_t x7 = -4178331851243LL;
	int8_t x8 = 2;
	int32_t t1 = 3;

	t1 = ((x5==(x6|x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	int32_t x11 = 13089168;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = -51948;

	t2 = ((x9==(x10|x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -3;
	int16_t x14 = INT16_MIN;
	int8_t x16 = -1;
	volatile int32_t t3 = -1;

	t3 = ((x13==(x14|x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 130630377543736LLU;
	volatile int32_t x19 = -14007590;
	int64_t x20 = INT64_MAX;
	int32_t t4 = 238450392;

	t4 = ((x17==(x18|x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x22 = INT32_MAX;
	volatile int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MIN;

	t5 = ((x21==(x22|x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	volatile uint16_t x26 = 104U;
	int32_t x27 = -1;
	volatile int32_t t6 = 330;

	t6 = ((x25==(x26|x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -137;
	static volatile int16_t x31 = 0;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -317943;

	t7 = ((x29==(x30|x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 16U;
	static int32_t x34 = INT32_MAX;
	uint32_t x35 = UINT32_MAX;

	t8 = ((x33==(x34|x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 139;
	volatile uint16_t x38 = 11086U;

	t9 = ((x37==(x38|x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	uint8_t x43 = 5U;
	static int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -187152;

	t10 = ((x41==(x42|x43))<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int64_t x46 = INT64_MIN;
	volatile int64_t x47 = -52140LL;
	volatile int16_t x48 = INT16_MAX;
	int32_t t11 = 38;

	t11 = ((x45==(x46|x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -60854;
	uint64_t x51 = 85LLU;
	int32_t x52 = -1;

	t12 = ((x49==(x50|x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x54 = INT64_MAX;
	int64_t x55 = INT64_MAX;
	uint32_t x56 = 796U;
	int32_t t13 = 0;

	t13 = ((x53==(x54|x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x57 = 1000742LLU;
	int8_t x58 = INT8_MAX;
	static volatile uint8_t x59 = 4U;
	volatile uint32_t x60 = 118175540U;
	int32_t t14 = 3687;

	t14 = ((x57==(x58|x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 5U;
	int64_t x62 = INT64_MIN;
	volatile uint64_t x63 = 675LLU;
	uint32_t x64 = UINT32_MAX;
	static int32_t t15 = -988;

	t15 = ((x61==(x62|x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	static int8_t x66 = INT8_MIN;
	volatile uint8_t x67 = 20U;

	t16 = ((x65==(x66|x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 1917U;
	static uint8_t x70 = 24U;

	t17 = ((x69==(x70|x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1120513512583729245LL;
	int32_t x74 = 5;
	int64_t x75 = INT64_MIN;
	volatile uint64_t x76 = 1468LLU;
	volatile int32_t t18 = -137128;

	t18 = ((x73==(x74|x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -1;
	static uint32_t x78 = 1098240U;
	uint8_t x79 = 61U;
	int32_t t19 = -199917233;

	t19 = ((x77==(x78|x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -6;
	uint16_t x83 = 2U;
	static uint8_t x84 = 88U;
	int32_t t20 = 0;

	t20 = ((x81==(x82|x83))<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = 447100908;
	int16_t x88 = INT16_MIN;

	t21 = ((x85==(x86|x87))<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = 21;
	static int32_t x90 = -1;
	volatile uint16_t x91 = 0U;
	volatile int32_t x92 = 220;
	int32_t t22 = -8616;

	t22 = ((x89==(x90|x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = UINT16_MAX;
	uint16_t x95 = 7013U;
	static int64_t x96 = -1LL;
	int32_t t23 = 65471;

	t23 = ((x93==(x94|x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	volatile int64_t x100 = INT64_MIN;
	int32_t t24 = 185379026;

	t24 = ((x97==(x98|x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x103 = 1468803339681129LLU;
	uint16_t x104 = UINT16_MAX;
	int32_t t25 = 67;

	t25 = ((x101==(x102|x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	static volatile int8_t x107 = INT8_MIN;
	int32_t x108 = -1;
	static volatile int32_t t26 = 123;

	t26 = ((x105==(x106|x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x110 = INT16_MIN;
	uint8_t x111 = 6U;
	volatile int64_t x112 = INT64_MIN;

	t27 = ((x109==(x110|x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	uint16_t x115 = 1U;

	t28 = ((x113==(x114|x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = 293918319LL;
	int32_t x119 = -1;
	volatile int32_t t29 = 6;

	t29 = ((x117==(x118|x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x121 = UINT64_MAX;
	static volatile uint8_t x123 = 44U;
	volatile uint32_t x124 = UINT32_MAX;

	t30 = ((x121==(x122|x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = UINT64_MAX;
	int8_t x126 = 31;
	int32_t t31 = 57;

	t31 = ((x125==(x126|x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = 2U;
	uint64_t x130 = 32918071118LLU;
	volatile uint8_t x131 = 7U;
	uint16_t x132 = 5352U;
	volatile int32_t t32 = 2;

	t32 = ((x129==(x130|x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = 278;
	volatile int32_t t33 = -7516;

	t33 = ((x133==(x134|x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x137 = UINT64_MAX;
	uint64_t x139 = 185LLU;
	int32_t x140 = INT32_MIN;
	int32_t t34 = -2995156;

	t34 = ((x137==(x138|x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -4166512;
	static uint8_t x142 = UINT8_MAX;
	static int8_t x143 = 11;
	int8_t x144 = 12;
	int32_t t35 = -19605;

	t35 = ((x141==(x142|x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x145 = 7;
	uint16_t x146 = 178U;
	int16_t x147 = -1;
	int16_t x148 = 1119;
	int32_t t36 = -232;

	t36 = ((x145==(x146|x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	int8_t x150 = INT8_MIN;
	static uint8_t x151 = 100U;
	int8_t x152 = 45;
	volatile int32_t t37 = 31;

	t37 = ((x149==(x150|x151))<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = -1;
	static int64_t x154 = -32927808LL;
	int64_t x155 = INT64_MIN;
	int16_t x156 = 0;
	static int32_t t38 = -16102838;

	t38 = ((x153==(x154|x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 458478U;
	static int8_t x159 = INT8_MIN;
	uint16_t x160 = 764U;
	int32_t t39 = -8056;

	t39 = ((x157==(x158|x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -2;
	static int16_t x162 = INT16_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile int32_t t40 = -519068477;

	t40 = ((x161==(x162|x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 3U;
	uint64_t x167 = UINT64_MAX;
	int32_t x168 = INT32_MIN;

	t41 = ((x165==(x166|x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x170 = 1521LLU;
	static int32_t x171 = INT32_MIN;
	int8_t x172 = -1;
	volatile int32_t t42 = 7534785;

	t42 = ((x169==(x170|x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = -43567;
	int32_t x175 = -1;
	volatile int32_t t43 = 5;

	t43 = ((x173==(x174|x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int16_t x178 = 6657;
	int16_t x179 = INT16_MAX;

	t44 = ((x177==(x178|x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 46U;
	uint8_t x183 = UINT8_MAX;
	volatile int32_t t45 = -15277494;

	t45 = ((x181==(x182|x183))<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = 4622444459LLU;
	uint32_t x186 = UINT32_MAX;
	volatile uint32_t x188 = 48370U;

	t46 = ((x185==(x186|x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	uint16_t x190 = 8307U;
	uint64_t x192 = 3880LLU;
	static int32_t t47 = 357;

	t47 = ((x189==(x190|x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 3U;
	volatile int16_t x194 = -1;
	int8_t x196 = -1;
	int32_t t48 = -75296;

	t48 = ((x193==(x194|x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	int64_t x199 = INT64_MIN;
	int32_t t49 = 8283;

	t49 = ((x197==(x198|x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	static int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MAX;
	volatile int64_t x204 = 109804961901400006LL;
	int32_t t50 = 42346;

	t50 = ((x201==(x202|x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	int32_t x207 = -1;
	int8_t x208 = 0;
	volatile int32_t t51 = -11332348;

	t51 = ((x205==(x206|x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = INT64_MIN;
	static uint64_t x211 = UINT64_MAX;
	uint16_t x212 = 254U;
	volatile int32_t t52 = 72483;

	t52 = ((x209==(x210|x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x215 = -14;
	int32_t t53 = 483;

	t53 = ((x213==(x214|x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = 2717913;
	int16_t x218 = 0;
	uint64_t x220 = UINT64_MAX;

	t54 = ((x217==(x218|x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x223 = INT32_MAX;
	static uint64_t x224 = 343LLU;
	int32_t t55 = -396930;

	t55 = ((x221==(x222|x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x226 = UINT64_MAX;
	static volatile int64_t x227 = -2833511LL;
	int16_t x228 = INT16_MIN;
	static volatile int32_t t56 = 33519917;

	t56 = ((x225==(x226|x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 19270U;
	uint32_t x230 = UINT32_MAX;
	int32_t x231 = -818404;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t57 = -1;

	t57 = ((x229==(x230|x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = 14424207785439LL;
	volatile int64_t x234 = INT64_MAX;
	volatile uint64_t x236 = 13LLU;

	t58 = ((x233==(x234|x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int64_t x238 = 1621LL;
	static int32_t x240 = -872182167;
	static int32_t t59 = 2248;

	t59 = ((x237==(x238|x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = INT32_MIN;
	uint8_t x242 = UINT8_MAX;
	static volatile uint8_t x243 = UINT8_MAX;
	int8_t x244 = -10;
	static volatile int32_t t60 = 193922143;

	t60 = ((x241==(x242|x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 12U;
	int8_t x246 = 1;
	int32_t t61 = 24;

	t61 = ((x245==(x246|x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x249 = UINT32_MAX;
	uint8_t x250 = 2U;
	int64_t x251 = 0LL;
	uint64_t x252 = 1069966209LLU;
	volatile int32_t t62 = 730045;

	t62 = ((x249==(x250|x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 3U;
	uint64_t x254 = UINT64_MAX;
	int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	static int32_t t63 = 7586020;

	t63 = ((x253==(x254|x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x258 = INT64_MIN;
	static int8_t x260 = INT8_MAX;
	volatile int32_t t64 = -2;

	t64 = ((x257==(x258|x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 643020084867419LLU;
	uint32_t x263 = 13677U;
	int32_t x264 = INT32_MIN;
	volatile int32_t t65 = -32050692;

	t65 = ((x261==(x262|x263))<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x266 = INT8_MIN;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 123544614;

	t66 = ((x265==(x266|x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x269 = UINT64_MAX;
	static volatile int16_t x270 = 838;
	uint16_t x271 = 29093U;
	volatile int32_t t67 = 1810;

	t67 = ((x269==(x270|x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 2U;
	int16_t x274 = 1;
	volatile uint64_t x276 = 34691056445666LLU;
	int32_t t68 = -1894614;

	t68 = ((x273==(x274|x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 4093146LL;
	static uint16_t x279 = 4U;
	uint64_t x280 = 160999365876LLU;
	volatile int32_t t69 = -190;

	t69 = ((x277==(x278|x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x282 = 1;
	static volatile int16_t x284 = -4090;
	volatile int32_t t70 = 17562124;

	t70 = ((x281==(x282|x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x285 = 119U;
	static int32_t x286 = INT32_MAX;
	static int64_t x287 = INT64_MIN;
	static volatile int32_t x288 = INT32_MAX;
	volatile int32_t t71 = -58;

	t71 = ((x285==(x286|x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 2907741;
	volatile int16_t x290 = -1;
	int8_t x291 = -63;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t72 = 211401391;

	t72 = ((x289==(x290|x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = -1;
	int32_t t73 = 91098;

	t73 = ((x293==(x294|x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = 51;
	volatile int8_t x299 = INT8_MIN;
	int32_t x300 = INT32_MAX;
	int32_t t74 = 92;

	t74 = ((x297==(x298|x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 9658471;
	static int8_t x302 = 1;
	int32_t x303 = INT32_MIN;
	int8_t x304 = -1;
	static volatile int32_t t75 = 14;

	t75 = ((x301==(x302|x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 10U;
	volatile int8_t x306 = -1;
	uint32_t x308 = 18366U;
	volatile int32_t t76 = 264116;

	t76 = ((x305==(x306|x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	uint16_t x311 = 30010U;
	volatile int64_t x312 = INT64_MIN;
	static int32_t t77 = -7;

	t77 = ((x309==(x310|x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x314 = -1;
	int8_t x315 = -10;
	volatile int16_t x316 = -810;

	t78 = ((x313==(x314|x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int8_t x318 = INT8_MAX;
	volatile int64_t x319 = 1826540377514199020LL;
	int16_t x320 = 3726;
	int32_t t79 = 13021794;

	t79 = ((x317==(x318|x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	static volatile uint8_t x322 = 52U;
	int8_t x323 = INT8_MIN;
	volatile int32_t t80 = 1402;

	t80 = ((x321==(x322|x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 327U;
	int32_t x326 = 1901;
	int8_t x327 = INT8_MIN;
	int32_t x328 = INT32_MIN;
	static volatile int32_t t81 = -251;

	t81 = ((x325==(x326|x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 2005;
	int8_t x330 = 31;
	uint8_t x331 = UINT8_MAX;
	static int8_t x332 = -20;
	volatile int32_t t82 = -114;

	t82 = ((x329==(x330|x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	static volatile int32_t x334 = -1;
	int32_t x335 = INT32_MIN;
	int32_t t83 = 6764261;

	t83 = ((x333==(x334|x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = 0LL;
	int32_t x340 = -1;
	volatile int32_t t84 = -111660;

	t84 = ((x337==(x338|x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -1;
	int16_t x342 = INT16_MAX;
	int16_t x343 = -35;
	volatile uint32_t x344 = UINT32_MAX;
	int32_t t85 = 31913695;

	t85 = ((x341==(x342|x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int64_t x346 = -1LL;
	int64_t x348 = 939401493532LL;
	int32_t t86 = 28007759;

	t86 = ((x345==(x346|x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x350 = UINT16_MAX;
	int64_t x352 = -4789893991LL;
	volatile int32_t t87 = -17560033;

	t87 = ((x349==(x350|x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	volatile uint16_t x354 = 866U;
	int16_t x355 = -1;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = -485178431;

	t88 = ((x353==(x354|x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MAX;
	static uint16_t x358 = UINT16_MAX;
	static int32_t x359 = -1;
	volatile int32_t x360 = INT32_MAX;
	volatile int32_t t89 = 2200458;

	t89 = ((x357==(x358|x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x363 = 642U;
	int32_t t90 = 301156;

	t90 = ((x361==(x362|x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	volatile int64_t x366 = INT64_MIN;
	int16_t x368 = -1;
	int32_t t91 = -7;

	t91 = ((x365==(x366|x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x369 = -12;
	volatile uint32_t x370 = 170686U;
	int16_t x371 = -1664;
	static uint16_t x372 = 3585U;
	volatile int32_t t92 = 4337465;

	t92 = ((x369==(x370|x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -7555090;
	static uint32_t x374 = 134943152U;
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 5683U;

	t93 = ((x373==(x374|x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MIN;
	uint32_t x378 = 200358099U;
	static int64_t x379 = -1LL;
	static int64_t x380 = -1LL;
	volatile int32_t t94 = -26372;

	t94 = ((x377==(x378|x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = 6;
	volatile int64_t x382 = INT64_MAX;
	uint32_t x383 = 453518U;
	int64_t x384 = -116110454LL;
	static volatile int32_t t95 = -179329;

	t95 = ((x381==(x382|x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = 1;
	int32_t t96 = -1238;

	t96 = ((x385==(x386|x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 10173U;
	int8_t x390 = 2;
	int64_t x391 = INT64_MIN;
	static int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 1;

	t97 = ((x389==(x390|x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MAX;
	volatile int32_t x395 = INT32_MAX;
	volatile int64_t x396 = INT64_MIN;

	t98 = ((x393==(x394|x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	static uint16_t x398 = 3U;
	uint8_t x400 = 2U;
	int32_t t99 = 22246447;

	t99 = ((x397==(x398|x399))<x400);

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

