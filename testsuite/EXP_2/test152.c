#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x19 = UINT16_MAX;
int32_t t5 = -233;
int32_t t6 = -293;
uint16_t x43 = UINT16_MAX;
uint16_t x44 = 190U;
int32_t t9 = -50108582;
static uint8_t x53 = UINT8_MAX;
volatile int64_t x54 = -1LL;
uint16_t x56 = 32754U;
int8_t x67 = -1;
int16_t x72 = INT16_MAX;
static int16_t x73 = -13182;
static int16_t x74 = INT16_MIN;
int32_t x76 = INT32_MIN;
volatile int16_t x84 = -1;
int32_t t16 = 0;
uint32_t x86 = UINT32_MAX;
int32_t x91 = 906;
int32_t t18 = 513239;
volatile int64_t x99 = 57850848795789LL;
static int8_t x112 = -10;
uint8_t x117 = UINT8_MAX;
static int32_t t25 = 11;
static int8_t x123 = -1;
volatile int64_t x126 = INT64_MIN;
static volatile int32_t x133 = INT32_MIN;
int32_t t30 = 63619068;
int8_t x143 = -1;
static int32_t t31 = 28580406;
uint8_t x147 = 0U;
static volatile int32_t t32 = 1048177208;
int8_t x160 = -1;
int8_t x161 = INT8_MIN;
int64_t x163 = -1LL;
int32_t x164 = -1;
static int32_t x165 = -4002;
volatile int64_t x171 = INT64_MIN;
volatile int8_t x173 = -1;
static int16_t x183 = INT16_MAX;
volatile int32_t t43 = -490536;
volatile int64_t x206 = -1LL;
static int32_t x207 = -111696165;
int64_t x211 = INT64_MIN;
static volatile int32_t t46 = 1;
static int64_t x216 = INT64_MIN;
volatile int32_t t47 = 38;
int32_t x220 = -1;
static volatile int32_t t48 = 195;
volatile uint32_t x226 = 9700U;
static uint16_t x233 = 104U;
volatile int64_t x235 = -1LL;
volatile int32_t t52 = 398664;
volatile int32_t t53 = 2;
volatile uint16_t x256 = 10U;
volatile int32_t t55 = 1267;
volatile int32_t x260 = INT32_MIN;
volatile int32_t t57 = 2288327;
uint32_t x266 = 15784458U;
static int64_t x268 = INT64_MIN;
int32_t x270 = INT32_MAX;
volatile int32_t t59 = -1;
int8_t x288 = INT8_MAX;
static volatile int32_t t63 = -14797462;
static uint16_t x297 = 23U;
volatile uint64_t x303 = 1LLU;
static int32_t t66 = 4;
int32_t x305 = INT32_MIN;
int8_t x307 = -1;
int16_t x310 = -1;
volatile int32_t t68 = 3883920;
static int32_t t70 = 51;
int32_t x336 = INT32_MIN;
int16_t x338 = INT16_MIN;
uint64_t x350 = UINT64_MAX;
static volatile uint32_t x352 = UINT32_MAX;
int64_t x353 = 4603878788617621674LL;
int32_t x361 = INT32_MAX;
volatile int32_t t79 = -521178;
int8_t x378 = INT8_MAX;
int64_t x385 = INT64_MIN;
int16_t x394 = INT16_MIN;
int8_t x396 = -6;
uint32_t x403 = 3U;
int32_t t89 = 313089411;
volatile int32_t t90 = -7512269;
int8_t x424 = -1;
static volatile uint8_t x426 = 0U;
uint32_t x437 = UINT32_MAX;
int8_t x440 = INT8_MIN;
static int64_t x444 = -1159336247LL;
static uint32_t x447 = 7U;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x2 = -1LL;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = -1;
	volatile int32_t t0 = 1288;

	t0 = ((x1|(x2+x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x6 = UINT32_MAX;
	volatile uint64_t x7 = UINT64_MAX;
	static int8_t x8 = INT8_MAX;
	int32_t t1 = 1;

	t1 = ((x5|(x6+x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	int16_t x10 = INT16_MIN;
	uint32_t x11 = 337U;
	static int8_t x12 = 0;
	int32_t t2 = 1559615;

	t2 = ((x9|(x10+x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 65669562364413LL;
	int16_t x14 = INT16_MIN;
	int32_t x15 = 20853773;
	int8_t x16 = -60;
	volatile int32_t t3 = 548;

	t3 = ((x13|(x14+x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 956LLU;
	volatile int8_t x18 = -1;
	int64_t x20 = 3220776214LL;
	volatile int32_t t4 = -3629;

	t4 = ((x17|(x18+x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MIN;
	static int16_t x22 = INT16_MIN;
	int64_t x23 = INT64_MAX;
	uint8_t x24 = 3U;

	t5 = ((x21|(x22+x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	volatile int32_t x30 = -10256;
	uint32_t x31 = 701051153U;
	volatile int64_t x32 = INT64_MIN;

	t6 = ((x29|(x30+x31))<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	static int32_t x34 = -1;
	int32_t x35 = 2;
	int32_t x36 = -1;
	static volatile int32_t t7 = -93562;

	t7 = ((x33|(x34+x35))<x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	volatile int32_t x38 = 439;
	volatile uint32_t x39 = UINT32_MAX;
	int16_t x40 = INT16_MIN;
	int32_t t8 = -345;

	t8 = ((x37|(x38+x39))<x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile uint32_t x42 = UINT32_MAX;

	t9 = ((x41|(x42+x43))<x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 0U;
	uint32_t x46 = 1759786U;
	int16_t x47 = INT16_MAX;
	int16_t x48 = 2;
	volatile int32_t t10 = 135690162;

	t10 = ((x45|(x46+x47))<x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = -2;
	int16_t x50 = INT16_MIN;
	int16_t x51 = 8;
	static uint16_t x52 = 159U;
	int32_t t11 = 127338;

	t11 = ((x49|(x50+x51))<x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x55 = -1LL;
	int32_t t12 = 733613;

	t12 = ((x53|(x54+x55))<x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x65 = INT16_MIN;
	int8_t x66 = INT8_MIN;
	int64_t x68 = INT64_MAX;
	int32_t t13 = -154;

	t13 = ((x65|(x66+x67))<x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = -6;
	int16_t x70 = 17;
	static volatile int8_t x71 = INT8_MIN;
	int32_t t14 = 484;

	t14 = ((x69|(x70+x71))<x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x75 = 1;
	int32_t t15 = -2;

	t15 = ((x73|(x74+x75))<x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x81 = -1;
	uint32_t x82 = 172302U;
	volatile uint8_t x83 = 24U;

	t16 = ((x81|(x82+x83))<x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MAX;
	int16_t x87 = 0;
	static int64_t x88 = 1257775240LL;
	int32_t t17 = 61;

	t17 = ((x85|(x86+x87))<x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	int8_t x92 = 20;

	t18 = ((x89|(x90+x91))<x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x93 = UINT32_MAX;
	uint32_t x94 = 165874U;
	static int32_t x95 = INT32_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t19 = -33511823;

	t19 = ((x93|(x94+x95))<x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = 2527278;
	int8_t x98 = INT8_MAX;
	int8_t x100 = -2;
	volatile int32_t t20 = -755020860;

	t20 = ((x97|(x98+x99))<x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 5709U;
	uint16_t x102 = 1039U;
	uint8_t x103 = 26U;
	int16_t x104 = 1122;
	int32_t t21 = -708496852;

	t21 = ((x101|(x102+x103))<x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = 1;
	int16_t x106 = -1;
	int16_t x107 = -205;
	volatile int16_t x108 = INT16_MAX;
	int32_t t22 = 1;

	t22 = ((x105|(x106+x107))<x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = INT8_MIN;
	int16_t x110 = INT16_MAX;
	int8_t x111 = 14;
	volatile int32_t t23 = -151;

	t23 = ((x109|(x110+x111))<x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = -1;
	uint32_t x115 = UINT32_MAX;
	static uint32_t x116 = 1U;
	static volatile int32_t t24 = 2284101;

	t24 = ((x113|(x114+x115))<x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x118 = 59;
	uint8_t x119 = UINT8_MAX;
	int8_t x120 = -1;

	t25 = ((x117|(x118+x119))<x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = UINT8_MAX;
	volatile int16_t x122 = INT16_MIN;
	uint64_t x124 = UINT64_MAX;
	volatile int32_t t26 = -1;

	t26 = ((x121|(x122+x123))<x124);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 96058LL;
	int64_t x127 = INT64_MAX;
	static int64_t x128 = -4476473715519LL;
	volatile int32_t t27 = -116953;

	t27 = ((x125|(x126+x127))<x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x129 = 132972176U;
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = -4;
	volatile int64_t x132 = INT64_MIN;
	static int32_t t28 = 12446;

	t28 = ((x129|(x130+x131))<x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x134 = UINT32_MAX;
	static int16_t x135 = INT16_MIN;
	int8_t x136 = 0;
	int32_t t29 = -1325232;

	t29 = ((x133|(x134+x135))<x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = -38;
	int8_t x138 = INT8_MAX;
	static volatile int8_t x139 = 4;
	volatile int64_t x140 = INT64_MIN;

	t30 = ((x137|(x138+x139))<x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = UINT16_MAX;
	static uint32_t x142 = UINT32_MAX;
	static uint32_t x144 = 12467U;

	t31 = ((x141|(x142+x143))<x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x145 = INT32_MIN;
	static int32_t x146 = INT32_MAX;
	static uint16_t x148 = UINT16_MAX;

	t32 = ((x145|(x146+x147))<x148);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = INT64_MIN;
	int16_t x150 = 8;
	int8_t x151 = -1;
	int16_t x152 = INT16_MIN;
	volatile int32_t t33 = -3944066;

	t33 = ((x149|(x150+x151))<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = UINT8_MAX;
	volatile uint64_t x158 = UINT64_MAX;
	uint32_t x159 = UINT32_MAX;
	int32_t t34 = -120;

	t34 = ((x157|(x158+x159))<x160);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x162 = 0;
	int32_t t35 = -3;

	t35 = ((x161|(x162+x163))<x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x166 = INT32_MIN;
	uint64_t x167 = 3718041909964494981LLU;
	int64_t x168 = INT64_MAX;
	volatile int32_t t36 = -442;

	t36 = ((x165|(x166+x167))<x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = 28349U;
	int64_t x170 = INT64_MAX;
	uint8_t x172 = UINT8_MAX;
	int32_t t37 = 259;

	t37 = ((x169|(x170+x171))<x172);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x174 = 73014LLU;
	uint64_t x175 = 97349805930346LLU;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t38 = 0;

	t38 = ((x173|(x174+x175))<x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x177 = INT8_MIN;
	static uint64_t x178 = 32343280LLU;
	static int32_t x179 = INT32_MIN;
	int32_t x180 = INT32_MAX;
	volatile int32_t t39 = 595331;

	t39 = ((x177|(x178+x179))<x180);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MIN;
	static volatile uint16_t x182 = 6381U;
	int16_t x184 = INT16_MIN;
	static int32_t t40 = 15811418;

	t40 = ((x181|(x182+x183))<x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 1862575441LLU;
	static int16_t x186 = INT16_MIN;
	uint64_t x187 = 616752544388702596LLU;
	uint8_t x188 = 12U;
	volatile int32_t t41 = -38821900;

	t41 = ((x185|(x186+x187))<x188);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x189 = 7808131;
	uint32_t x190 = 11720690U;
	int16_t x191 = INT16_MIN;
	static int64_t x192 = 245891575LL;
	int32_t t42 = -138975;

	t42 = ((x189|(x190+x191))<x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x197 = INT64_MIN;
	uint32_t x198 = 361730U;
	int32_t x199 = INT32_MAX;
	int16_t x200 = -1284;

	t43 = ((x197|(x198+x199))<x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x201 = 170504417698LLU;
	volatile int8_t x202 = INT8_MIN;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	static volatile int32_t t44 = 923685080;

	t44 = ((x201|(x202+x203))<x204);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = -1;
	uint16_t x208 = 10U;
	volatile int32_t t45 = 1281;

	t45 = ((x205|(x206+x207))<x208);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = 1;
	uint64_t x210 = 7434045LLU;
	int64_t x212 = INT64_MIN;

	t46 = ((x209|(x210+x211))<x212);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	volatile int32_t x214 = -809;
	int32_t x215 = -1;

	t47 = ((x213|(x214+x215))<x216);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x217 = 16275U;
	int64_t x218 = INT64_MAX;
	int32_t x219 = INT32_MIN;

	t48 = ((x217|(x218+x219))<x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x225 = INT32_MIN;
	int64_t x227 = INT64_MIN;
	int32_t x228 = 875742864;
	int32_t t49 = 313;

	t49 = ((x225|(x226+x227))<x228);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x229 = 6;
	uint64_t x230 = 80LLU;
	int64_t x231 = 380565824152LL;
	int8_t x232 = INT8_MIN;
	int32_t t50 = -3094;

	t50 = ((x229|(x230+x231))<x232);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x234 = -1LL;
	uint16_t x236 = UINT16_MAX;
	int32_t t51 = 126;

	t51 = ((x233|(x234+x235))<x236);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x237 = -1LL;
	static uint32_t x238 = UINT32_MAX;
	uint64_t x239 = UINT64_MAX;
	uint32_t x240 = UINT32_MAX;

	t52 = ((x237|(x238+x239))<x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MAX;
	int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MIN;

	t53 = ((x245|(x246+x247))<x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = -410479381;
	uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MIN;
	int16_t x252 = -12;
	int32_t t54 = -1682655;

	t54 = ((x249|(x250+x251))<x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x253 = INT64_MIN;
	int16_t x254 = 1;
	int64_t x255 = 61391LL;

	t55 = ((x253|(x254+x255))<x256);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x257 = 6;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = -164LL;
	volatile int32_t t56 = 177095;

	t56 = ((x257|(x258+x259))<x260);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x261 = 67U;
	int16_t x262 = INT16_MAX;
	volatile uint32_t x263 = UINT32_MAX;
	static int32_t x264 = INT32_MIN;

	t57 = ((x261|(x262+x263))<x264);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x265 = INT64_MIN;
	int32_t x267 = INT32_MIN;
	int32_t t58 = -4829783;

	t58 = ((x265|(x266+x267))<x268);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = INT64_MIN;
	int16_t x271 = -1;
	static int64_t x272 = -26LL;

	t59 = ((x269|(x270+x271))<x272);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x273 = 2470U;
	int16_t x274 = -64;
	volatile int16_t x275 = INT16_MIN;
	uint64_t x276 = UINT64_MAX;
	int32_t t60 = -3050884;

	t60 = ((x273|(x274+x275))<x276);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x277 = -306792462041068833LL;
	volatile uint32_t x278 = UINT32_MAX;
	int32_t x279 = INT32_MIN;
	int32_t x280 = -1;
	int32_t t61 = -3229;

	t61 = ((x277|(x278+x279))<x280);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x281 = INT32_MAX;
	volatile int16_t x282 = INT16_MIN;
	int8_t x283 = 21;
	volatile uint16_t x284 = 16979U;
	int32_t t62 = 9;

	t62 = ((x281|(x282+x283))<x284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x285 = UINT8_MAX;
	uint64_t x286 = UINT64_MAX;
	uint64_t x287 = UINT64_MAX;

	t63 = ((x285|(x286+x287))<x288);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x293 = INT32_MIN;
	volatile int32_t x294 = -1;
	volatile uint16_t x295 = 485U;
	static uint8_t x296 = 5U;
	static int32_t t64 = 0;

	t64 = ((x293|(x294+x295))<x296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x298 = INT8_MIN;
	static int8_t x299 = 1;
	static uint8_t x300 = 3U;
	int32_t t65 = 224;

	t65 = ((x297|(x298+x299))<x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x301 = INT32_MAX;
	int64_t x302 = 6820297764729LL;
	int32_t x304 = -2;

	t66 = ((x301|(x302+x303))<x304);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x306 = UINT16_MAX;
	volatile int32_t x308 = -1;
	int32_t t67 = -53;

	t67 = ((x305|(x306+x307))<x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x309 = UINT16_MAX;
	int64_t x311 = -1LL;
	static volatile uint16_t x312 = 13U;

	t68 = ((x309|(x310+x311))<x312);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x313 = INT8_MAX;
	uint8_t x314 = 1U;
	uint8_t x315 = 6U;
	int16_t x316 = INT16_MIN;
	int32_t t69 = 1524909;

	t69 = ((x313|(x314+x315))<x316);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = UINT8_MAX;
	int8_t x322 = -46;
	static uint16_t x323 = 13281U;
	int8_t x324 = -1;

	t70 = ((x321|(x322+x323))<x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x325 = -9012;
	int64_t x326 = -1LL;
	volatile int64_t x327 = -1LL;
	int64_t x328 = INT64_MIN;
	int32_t t71 = -88429;

	t71 = ((x325|(x326+x327))<x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint32_t x329 = 46U;
	volatile int64_t x330 = INT64_MAX;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = 1335U;
	static int32_t t72 = 103582;

	t72 = ((x329|(x330+x331))<x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 100U;
	static int64_t x335 = INT64_MIN;
	int32_t t73 = -7;

	t73 = ((x333|(x334+x335))<x336);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x337 = 63641;
	volatile int64_t x339 = -1LL;
	uint64_t x340 = 39754505758LLU;
	static int32_t t74 = -26872;

	t74 = ((x337|(x338+x339))<x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MAX;
	volatile uint64_t x343 = 271620864261663LLU;
	uint8_t x344 = UINT8_MAX;
	volatile int32_t t75 = 586867;

	t75 = ((x341|(x342+x343))<x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = -63;
	uint32_t x351 = 93906673U;
	volatile int32_t t76 = -30;

	t76 = ((x349|(x350+x351))<x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x354 = -1;
	uint32_t x355 = 5558464U;
	volatile uint8_t x356 = 92U;
	int32_t t77 = 55169;

	t77 = ((x353|(x354+x355))<x356);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x362 = 4090U;
	uint32_t x363 = 7853347U;
	uint64_t x364 = 158565716LLU;
	int32_t t78 = -130414160;

	t78 = ((x361|(x362+x363))<x364);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = 0;
	int16_t x366 = -1;
	int32_t x367 = INT32_MAX;
	volatile int16_t x368 = INT16_MIN;

	t79 = ((x365|(x366+x367))<x368);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = -1;
	static int16_t x370 = -1;
	int8_t x371 = 10;
	int16_t x372 = INT16_MIN;
	int32_t t80 = 3293;

	t80 = ((x369|(x370+x371))<x372);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	int16_t x375 = -1;
	uint8_t x376 = 57U;
	int32_t t81 = 8;

	t81 = ((x373|(x374+x375))<x376);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x377 = INT8_MIN;
	static uint64_t x379 = 56LLU;
	uint64_t x380 = 5629326876LLU;
	volatile int32_t t82 = -217;

	t82 = ((x377|(x378+x379))<x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x381 = 2LLU;
	volatile int32_t x382 = -1;
	int64_t x383 = -2358256499943LL;
	int8_t x384 = -1;
	static int32_t t83 = -137079825;

	t83 = ((x381|(x382+x383))<x384);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x386 = 1U;
	int32_t x387 = INT32_MIN;
	int32_t x388 = -1;
	int32_t t84 = 609;

	t84 = ((x385|(x386+x387))<x388);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x389 = 3458;
	int64_t x390 = 151LL;
	int8_t x391 = INT8_MIN;
	uint8_t x392 = 19U;
	volatile int32_t t85 = 21892;

	t85 = ((x389|(x390+x391))<x392);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = -1;
	uint16_t x395 = 182U;
	int32_t t86 = 0;

	t86 = ((x393|(x394+x395))<x396);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = -83988920139652LL;
	uint64_t x398 = 448139745642400LLU;
	int64_t x399 = 47471777690893LL;
	static uint16_t x400 = 3U;
	volatile int32_t t87 = 43;

	t87 = ((x397|(x398+x399))<x400);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x401 = -306915368604529568LL;
	uint64_t x402 = 15949526203544LLU;
	int64_t x404 = 2LL;
	int32_t t88 = -38876014;

	t88 = ((x401|(x402+x403))<x404);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x405 = 3845;
	int16_t x406 = -3506;
	uint64_t x407 = 877420LLU;
	volatile uint16_t x408 = UINT16_MAX;

	t89 = ((x405|(x406+x407))<x408);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MIN;
	int16_t x411 = INT16_MIN;
	uint64_t x412 = UINT64_MAX;

	t90 = ((x409|(x410+x411))<x412);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x413 = UINT8_MAX;
	int8_t x414 = INT8_MIN;
	int16_t x415 = -8;
	static uint16_t x416 = 7U;
	int32_t t91 = 7716513;

	t91 = ((x413|(x414+x415))<x416);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = -1063897132;
	uint8_t x422 = 2U;
	volatile int64_t x423 = INT64_MIN;
	volatile int32_t t92 = 1;

	t92 = ((x421|(x422+x423))<x424);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x425 = 2U;
	volatile int32_t x427 = INT32_MIN;
	uint16_t x428 = 27902U;
	int32_t t93 = -420580655;

	t93 = ((x425|(x426+x427))<x428);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = INT16_MIN;
	volatile int16_t x430 = -1;
	int64_t x431 = INT64_MAX;
	uint8_t x432 = UINT8_MAX;
	int32_t t94 = -31;

	t94 = ((x429|(x430+x431))<x432);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x433 = 18;
	int8_t x434 = -60;
	uint64_t x435 = UINT64_MAX;
	uint64_t x436 = 199002065681269LLU;
	volatile int32_t t95 = 17891;

	t95 = ((x433|(x434+x435))<x436);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x438 = INT8_MAX;
	int32_t x439 = -929;
	int32_t t96 = 0;

	t96 = ((x437|(x438+x439))<x440);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x441 = UINT8_MAX;
	int64_t x442 = INT64_MIN;
	static uint64_t x443 = 5859615990899LLU;
	volatile int32_t t97 = -113;

	t97 = ((x441|(x442+x443))<x444);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x445 = INT32_MAX;
	uint64_t x446 = 54419214634604783LLU;
	int32_t x448 = INT32_MAX;
	int32_t t98 = -2010362;

	t98 = ((x445|(x446+x447))<x448);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x449 = INT16_MIN;
	uint32_t x450 = 24U;
	int8_t x451 = -1;
	int16_t x452 = INT16_MAX;
	volatile int32_t t99 = 9893;

	t99 = ((x449|(x450+x451))<x452);

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

