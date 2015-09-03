#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -229;
uint32_t x16 = 7U;
uint64_t x23 = 1465034900LLU;
volatile int32_t t5 = -183299094;
int8_t x36 = INT8_MIN;
static uint32_t x38 = 191869779U;
int16_t x40 = -1;
int64_t x43 = 207692102512265291LL;
volatile int16_t x44 = -1;
int16_t x48 = -1;
volatile int8_t x49 = INT8_MIN;
int16_t x53 = 5;
int32_t x55 = INT32_MIN;
volatile uint8_t x59 = UINT8_MAX;
static volatile int32_t x60 = -1;
volatile int32_t t14 = 83604;
volatile int8_t x68 = 2;
int8_t x73 = INT8_MIN;
volatile int32_t t17 = 725712;
volatile uint32_t x95 = 103905017U;
static int32_t x99 = INT32_MIN;
volatile int8_t x104 = 0;
volatile int32_t t25 = -325;
static int8_t x110 = 3;
int16_t x111 = INT16_MAX;
uint64_t x112 = 166611969846714LLU;
volatile uint16_t x122 = UINT16_MAX;
int32_t t30 = -266726;
volatile int16_t x131 = INT16_MAX;
volatile int32_t x138 = 0;
static uint32_t x140 = UINT32_MAX;
volatile int32_t t35 = -935;
int16_t x150 = INT16_MAX;
int16_t x151 = INT16_MAX;
uint64_t x155 = 15808303296242LLU;
int64_t x158 = -1LL;
static int8_t x164 = INT8_MIN;
int16_t x165 = INT16_MIN;
uint16_t x175 = 3877U;
int32_t t44 = 17;
static volatile int32_t t45 = 1;
int8_t x189 = -20;
static int8_t x192 = INT8_MAX;
uint64_t x222 = UINT64_MAX;
volatile int32_t t54 = 44636;
static volatile int32_t x228 = INT32_MIN;
uint16_t x231 = 1134U;
uint64_t x233 = 31LLU;
int64_t x234 = INT64_MAX;
static volatile int32_t t61 = 1;
int16_t x258 = INT16_MIN;
int64_t x260 = INT64_MIN;
static int64_t x264 = -802600LL;
int16_t x270 = INT16_MIN;
volatile int64_t x277 = INT64_MAX;
static int32_t t68 = -1;
uint16_t x285 = 9060U;
static uint8_t x296 = 48U;
int32_t t73 = 185572497;
uint32_t x311 = UINT32_MAX;
volatile uint8_t x314 = 25U;
int32_t t79 = -7;
int32_t x334 = -3573330;
volatile int32_t t81 = -45619173;
volatile int16_t x340 = INT16_MIN;
int32_t x341 = 3153;
volatile uint32_t x344 = 884743093U;
volatile int32_t t83 = 107803764;
static volatile int32_t t84 = 0;
static int16_t x354 = 0;
volatile int8_t x355 = INT8_MAX;
volatile uint16_t x362 = 109U;
volatile int16_t x367 = 36;
volatile uint8_t x372 = 2U;
int8_t x378 = 25;
volatile uint32_t x380 = 1002U;
int32_t x391 = INT32_MAX;
static int64_t x392 = INT64_MIN;
volatile int32_t t95 = -459;
int64_t x393 = 2312315853401747682LL;
volatile int32_t t96 = -1005764010;
uint32_t x397 = UINT32_MAX;
volatile uint64_t x408 = 15LLU;


void f0(void) {
	int32_t x1 = -1;
	uint8_t x2 = 17U;
	uint8_t x3 = 11U;
	int8_t x4 = -1;

	t0 = (x1==((x2%x3)^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 1;
	static uint32_t x6 = UINT32_MAX;
	static int8_t x7 = -1;
	volatile int32_t x8 = 892712365;
	int32_t t1 = 1;

	t1 = (x5==((x6%x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static int32_t x10 = 204599891;
	static int32_t x11 = INT32_MIN;
	static int64_t x12 = -1LL;
	volatile int32_t t2 = -29608103;

	t2 = (x9==((x10%x11)^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 1684U;
	int16_t x14 = INT16_MAX;
	static volatile int32_t x15 = INT32_MIN;
	volatile int32_t t3 = 2460;

	t3 = (x13==((x14%x15)^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint64_t x18 = 0LLU;
	uint16_t x19 = 2035U;
	int16_t x20 = -1;
	int32_t t4 = -2;

	t4 = (x17==((x18%x19)^x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	volatile int8_t x22 = -3;
	static volatile uint64_t x24 = UINT64_MAX;

	t5 = (x21==((x22%x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	volatile int32_t x26 = INT32_MAX;
	uint16_t x27 = 1U;
	static uint8_t x28 = UINT8_MAX;
	volatile int32_t t6 = -15132;

	t6 = (x25==((x26%x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	volatile int16_t x30 = 7439;
	volatile int8_t x31 = INT8_MAX;
	int16_t x32 = -1;
	static int32_t t7 = -26034;

	t7 = (x29==((x30%x31)^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 2659U;
	static volatile int32_t x34 = -1;
	int16_t x35 = -1;
	volatile int32_t t8 = -198;

	t8 = (x33==((x34%x35)^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MAX;
	int64_t x39 = INT64_MIN;
	volatile int32_t t9 = -1;

	t9 = (x37==((x38%x39)^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 58155774453412LLU;
	int32_t x42 = 1988831;
	int32_t t10 = 245618;

	t10 = (x41==((x42%x43)^x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 1822093251LLU;
	int16_t x46 = -1;
	uint64_t x47 = 6744109LLU;
	int32_t t11 = -348649;

	t11 = (x45==((x46%x47)^x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = 1;
	volatile int64_t x51 = -1LL;
	volatile uint16_t x52 = 424U;
	static int32_t t12 = 561;

	t12 = (x49==((x50%x51)^x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = -1;
	int64_t x56 = -182676692244921093LL;
	int32_t t13 = -27;

	t13 = (x53==((x54%x55)^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	volatile uint16_t x58 = UINT16_MAX;

	t14 = (x57==((x58%x59)^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	int32_t x62 = 0;
	volatile int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = UINT16_MAX;
	int32_t t15 = -15;

	t15 = (x61==((x62%x63)^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = UINT64_MAX;
	uint8_t x66 = 6U;
	uint8_t x67 = 2U;
	volatile int32_t t16 = -191;

	t16 = (x65==((x66%x67)^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x74 = 87U;
	int16_t x75 = INT16_MAX;
	int32_t x76 = INT32_MIN;

	t17 = (x73==((x74%x75)^x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 5456099LL;
	volatile int8_t x78 = INT8_MAX;
	int32_t x79 = -1;
	uint8_t x80 = 13U;
	volatile int32_t t18 = -10252;

	t18 = (x77==((x78%x79)^x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = UINT8_MAX;
	int8_t x82 = -1;
	uint16_t x83 = 11U;
	volatile int8_t x84 = INT8_MIN;
	static int32_t t19 = -123806312;

	t19 = (x81==((x82%x83)^x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 116U;
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = INT16_MIN;
	static int8_t x88 = INT8_MIN;
	int32_t t20 = -3964098;

	t20 = (x85==((x86%x87)^x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	volatile uint8_t x90 = 11U;
	int64_t x91 = -1LL;
	int32_t x92 = INT32_MIN;
	static int32_t t21 = -630974;

	t21 = (x89==((x90%x91)^x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 6U;
	int16_t x94 = INT16_MAX;
	static volatile int16_t x96 = INT16_MIN;
	volatile int32_t t22 = 1973227;

	t22 = (x93==((x94%x95)^x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -1;
	int16_t x98 = INT16_MIN;
	int64_t x100 = -6467LL;
	volatile int32_t t23 = 17473;

	t23 = (x97==((x98%x99)^x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x101 = 1233111LLU;
	static uint64_t x102 = 11223783762010907LLU;
	volatile int64_t x103 = -120LL;
	int32_t t24 = 6032;

	t24 = (x101==((x102%x103)^x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int8_t x106 = -1;
	int8_t x107 = -1;
	volatile int64_t x108 = INT64_MAX;

	t25 = (x105==((x106%x107)^x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x109 = 5U;
	volatile int32_t t26 = -7942341;

	t26 = (x109==((x110%x111)^x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 38308102692LLU;
	static uint64_t x114 = 138805095784168LLU;
	static uint32_t x115 = UINT32_MAX;
	uint16_t x116 = 1359U;
	volatile int32_t t27 = 504526;

	t27 = (x113==((x114%x115)^x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MIN;
	volatile int32_t x118 = INT32_MIN;
	uint32_t x119 = 841100U;
	int32_t x120 = INT32_MAX;
	volatile int32_t t28 = -3703384;

	t28 = (x117==((x118%x119)^x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x121 = 2162931;
	static uint32_t x123 = UINT32_MAX;
	uint32_t x124 = 222727923U;
	int32_t t29 = 3;

	t29 = (x121==((x122%x123)^x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -1215109892265486LL;
	int8_t x126 = INT8_MIN;
	static volatile uint32_t x127 = 44U;
	uint16_t x128 = 23239U;

	t30 = (x125==((x126%x127)^x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x129 = 227519855U;
	volatile uint16_t x130 = UINT16_MAX;
	static volatile int16_t x132 = INT16_MAX;
	volatile int32_t t31 = -1;

	t31 = (x129==((x130%x131)^x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = INT64_MIN;
	volatile uint16_t x134 = 1851U;
	static volatile int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	int32_t t32 = 66791172;

	t32 = (x133==((x134%x135)^x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x137 = 5;
	int8_t x139 = INT8_MAX;
	int32_t t33 = -1285;

	t33 = (x137==((x138%x139)^x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = 41;
	volatile int64_t x142 = -1LL;
	uint32_t x143 = UINT32_MAX;
	uint32_t x144 = 827861U;
	int32_t t34 = 233565;

	t34 = (x141==((x142%x143)^x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	static int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;

	t35 = (x145==((x146%x147)^x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MIN;
	static uint16_t x152 = 2U;
	volatile int32_t t36 = -24;

	t36 = (x149==((x150%x151)^x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = UINT8_MAX;
	volatile uint8_t x154 = UINT8_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t37 = 52707;

	t37 = (x153==((x154%x155)^x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x157 = -74749389;
	static int16_t x159 = -1;
	uint16_t x160 = 2U;
	volatile int32_t t38 = -1;

	t38 = (x157==((x158%x159)^x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x161 = INT64_MIN;
	static uint32_t x162 = 34415U;
	uint16_t x163 = 521U;
	static int32_t t39 = -9;

	t39 = (x161==((x162%x163)^x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x166 = 55U;
	uint16_t x167 = 1517U;
	int32_t x168 = INT32_MAX;
	int32_t t40 = -695991;

	t40 = (x165==((x166%x167)^x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x169 = INT16_MAX;
	int32_t x170 = INT32_MIN;
	volatile uint8_t x171 = UINT8_MAX;
	volatile int8_t x172 = -1;
	int32_t t41 = -1;

	t41 = (x169==((x170%x171)^x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	int32_t x174 = INT32_MIN;
	volatile int64_t x176 = -1LL;
	int32_t t42 = -20;

	t42 = (x173==((x174%x175)^x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 1560755185898620LLU;
	int32_t x178 = INT32_MIN;
	uint8_t x179 = UINT8_MAX;
	int64_t x180 = -1LL;
	int32_t t43 = 109;

	t43 = (x177==((x178%x179)^x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int64_t x182 = -2296174993319975LL;
	int32_t x183 = INT32_MAX;
	static uint64_t x184 = UINT64_MAX;

	t44 = (x181==((x182%x183)^x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x185 = 66838U;
	volatile uint8_t x186 = 3U;
	int8_t x187 = -1;
	int16_t x188 = -1;

	t45 = (x185==((x186%x187)^x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x190 = -1;
	static uint64_t x191 = UINT64_MAX;
	volatile int32_t t46 = 555068564;

	t46 = (x189==((x190%x191)^x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x193 = -6401;
	static int64_t x194 = INT64_MIN;
	uint8_t x195 = UINT8_MAX;
	uint8_t x196 = UINT8_MAX;
	int32_t t47 = -2;

	t47 = (x193==((x194%x195)^x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = -1;
	static int64_t x198 = -1LL;
	int16_t x199 = 1;
	uint32_t x200 = 43U;
	int32_t t48 = -23028;

	t48 = (x197==((x198%x199)^x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	static volatile int32_t x202 = -245333122;
	int32_t x203 = -1;
	int32_t x204 = INT32_MIN;
	int32_t t49 = -50167;

	t49 = (x201==((x202%x203)^x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = INT32_MIN;
	int16_t x206 = INT16_MAX;
	static uint16_t x207 = 100U;
	int8_t x208 = 0;
	int32_t t50 = 176;

	t50 = (x205==((x206%x207)^x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	int32_t x210 = -130150747;
	int64_t x211 = -1LL;
	uint8_t x212 = 2U;
	volatile int32_t t51 = -348282;

	t51 = (x209==((x210%x211)^x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MAX;
	uint16_t x214 = 4040U;
	int32_t x215 = -1;
	volatile int64_t x216 = INT64_MIN;
	static int32_t t52 = -92141;

	t52 = (x213==((x214%x215)^x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = INT32_MIN;
	int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	static int8_t x220 = -1;
	volatile int32_t t53 = -1;

	t53 = (x217==((x218%x219)^x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -1;
	static volatile int16_t x223 = INT16_MIN;
	int8_t x224 = INT8_MIN;

	t54 = (x221==((x222%x223)^x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -34;
	static int64_t x226 = -43150028LL;
	volatile int64_t x227 = -538771429749558LL;
	int32_t t55 = 7166217;

	t55 = (x225==((x226%x227)^x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t56 = -7;

	t56 = (x229==((x230%x231)^x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x235 = 41U;
	static int16_t x236 = -1;
	static int32_t t57 = 155;

	t57 = (x233==((x234%x235)^x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = INT16_MIN;
	uint16_t x239 = 2U;
	int64_t x240 = INT64_MIN;
	int32_t t58 = 971;

	t58 = (x237==((x238%x239)^x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x241 = 7U;
	uint16_t x242 = 45U;
	volatile int8_t x243 = INT8_MIN;
	uint64_t x244 = UINT64_MAX;
	int32_t t59 = -2;

	t59 = (x241==((x242%x243)^x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	uint16_t x246 = 0U;
	uint8_t x247 = 8U;
	uint64_t x248 = 13025591538110546LLU;
	int32_t t60 = 348894588;

	t60 = (x245==((x246%x247)^x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x249 = INT32_MIN;
	static uint32_t x250 = 3494615U;
	volatile int8_t x251 = -9;
	uint16_t x252 = UINT16_MAX;

	t61 = (x249==((x250%x251)^x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x253 = 842U;
	static int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	volatile int32_t x256 = -1;
	int32_t t62 = 11;

	t62 = (x253==((x254%x255)^x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	static int64_t x259 = INT64_MAX;
	int32_t t63 = -49;

	t63 = (x257==((x258%x259)^x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = UINT32_MAX;
	int8_t x262 = INT8_MIN;
	int8_t x263 = -1;
	static volatile int32_t t64 = 8;

	t64 = (x261==((x262%x263)^x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 6U;
	int64_t x266 = -1LL;
	int8_t x267 = INT8_MIN;
	static int32_t x268 = INT32_MAX;
	int32_t t65 = 1496;

	t65 = (x265==((x266%x267)^x268));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x269 = -1;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = 990U;
	volatile int32_t t66 = -159514870;

	t66 = (x269==((x270%x271)^x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = INT64_MIN;
	volatile uint32_t x274 = 1903421905U;
	int64_t x275 = -115597950365LL;
	int16_t x276 = INT16_MIN;
	volatile int32_t t67 = 1535683;

	t67 = (x273==((x274%x275)^x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x278 = INT32_MAX;
	uint32_t x279 = UINT32_MAX;
	uint16_t x280 = 20041U;

	t68 = (x277==((x278%x279)^x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = -1;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = -1;
	int32_t x284 = INT32_MIN;
	volatile int32_t t69 = 4497465;

	t69 = (x281==((x282%x283)^x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x286 = 6U;
	int16_t x287 = INT16_MIN;
	int32_t x288 = -1;
	int32_t t70 = 1;

	t70 = (x285==((x286%x287)^x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x289 = INT64_MAX;
	volatile uint16_t x290 = 48U;
	uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MIN;
	volatile int32_t t71 = -793;

	t71 = (x289==((x290%x291)^x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x293 = 0;
	static uint32_t x294 = 14U;
	int32_t x295 = INT32_MAX;
	volatile int32_t t72 = -209926;

	t72 = (x293==((x294%x295)^x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MIN;
	int64_t x300 = -1LL;

	t73 = (x297==((x298%x299)^x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MAX;
	int64_t x302 = -234741LL;
	int8_t x303 = INT8_MAX;
	static int64_t x304 = INT64_MIN;
	volatile int32_t t74 = -794;

	t74 = (x301==((x302%x303)^x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x305 = INT64_MIN;
	int8_t x306 = -3;
	int16_t x307 = INT16_MAX;
	int16_t x308 = 12597;
	volatile int32_t t75 = -1;

	t75 = (x305==((x306%x307)^x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = UINT64_MAX;
	uint64_t x310 = 0LLU;
	int32_t x312 = INT32_MAX;
	int32_t t76 = -388148486;

	t76 = (x309==((x310%x311)^x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x313 = 63U;
	int64_t x315 = INT64_MAX;
	uint64_t x316 = 21456372LLU;
	volatile int32_t t77 = -147;

	t77 = (x313==((x314%x315)^x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = UINT16_MAX;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MAX;
	volatile int32_t t78 = 43;

	t78 = (x317==((x318%x319)^x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MIN;
	int16_t x322 = -1;
	int32_t x323 = 20226774;
	volatile uint8_t x324 = 0U;

	t79 = (x321==((x322%x323)^x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = INT32_MIN;
	int16_t x326 = INT16_MAX;
	int16_t x327 = -13498;
	uint8_t x328 = UINT8_MAX;
	int32_t t80 = 1100;

	t80 = (x325==((x326%x327)^x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	uint64_t x335 = UINT64_MAX;
	uint16_t x336 = 85U;

	t81 = (x333==((x334%x335)^x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -4161360;
	int32_t x338 = -36160706;
	int16_t x339 = -12008;
	static volatile int32_t t82 = -2;

	t82 = (x337==((x338%x339)^x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x342 = UINT8_MAX;
	uint8_t x343 = UINT8_MAX;

	t83 = (x341==((x342%x343)^x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MAX;
	int8_t x346 = -1;
	volatile uint16_t x347 = UINT16_MAX;
	int32_t x348 = -355622642;

	t84 = (x345==((x346%x347)^x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x349 = 2U;
	int32_t x350 = INT32_MAX;
	uint8_t x351 = 10U;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t85 = -1;

	t85 = (x349==((x350%x351)^x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = INT8_MIN;
	uint16_t x356 = 10U;
	volatile int32_t t86 = 30;

	t86 = (x353==((x354%x355)^x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x357 = -1;
	int64_t x358 = -15608514LL;
	uint8_t x359 = 1U;
	static volatile int64_t x360 = 1854972960LL;
	static int32_t t87 = -763053;

	t87 = (x357==((x358%x359)^x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x363 = UINT32_MAX;
	uint8_t x364 = 5U;
	int32_t t88 = 825944489;

	t88 = (x361==((x362%x363)^x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	static int64_t x366 = 6969600984LL;
	int16_t x368 = 1;
	int32_t t89 = -3161;

	t89 = (x365==((x366%x367)^x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = -1;
	static int8_t x371 = -54;
	volatile int32_t t90 = 0;

	t90 = (x369==((x370%x371)^x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = UINT32_MAX;
	uint16_t x375 = UINT16_MAX;
	uint32_t x376 = 3475U;
	volatile int32_t t91 = -745999;

	t91 = (x373==((x374%x375)^x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x377 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int32_t t92 = -655753;

	t92 = (x377==((x378%x379)^x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x381 = INT32_MIN;
	static int16_t x382 = -1;
	static int16_t x383 = INT16_MIN;
	int16_t x384 = -1;
	volatile int32_t t93 = 57;

	t93 = (x381==((x382%x383)^x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x385 = UINT32_MAX;
	uint8_t x386 = UINT8_MAX;
	int8_t x387 = INT8_MAX;
	static uint32_t x388 = 962585833U;
	int32_t t94 = 79097620;

	t94 = (x385==((x386%x387)^x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x389 = INT32_MIN;
	volatile uint16_t x390 = 12U;

	t95 = (x389==((x390%x391)^x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x394 = INT8_MIN;
	uint8_t x395 = 6U;
	uint16_t x396 = 1511U;

	t96 = (x393==((x394%x395)^x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MAX;
	uint16_t x400 = 21U;
	int32_t t97 = 2;

	t97 = (x397==((x398%x399)^x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x401 = 16801U;
	static int16_t x402 = -211;
	volatile uint16_t x403 = 25U;
	uint64_t x404 = UINT64_MAX;
	int32_t t98 = -32;

	t98 = (x401==((x402%x403)^x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MIN;
	uint64_t x406 = UINT64_MAX;
	int16_t x407 = 15;
	static volatile int32_t t99 = 2371672;

	t99 = (x405==((x406%x407)^x408));

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

