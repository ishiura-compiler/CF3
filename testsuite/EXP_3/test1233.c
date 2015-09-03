#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 1105;
volatile int16_t x7 = INT16_MAX;
uint8_t x11 = 102U;
uint16_t x13 = 778U;
static uint32_t x14 = 5U;
int16_t x18 = -3;
static uint32_t t4 = 180304U;
uint16_t x25 = UINT16_MAX;
int32_t x27 = INT32_MIN;
int32_t x30 = 2691;
volatile uint16_t x32 = 7U;
volatile uint64_t t7 = 768082226152944LLU;
volatile uint8_t x33 = UINT8_MAX;
static uint8_t x35 = 9U;
static uint8_t x37 = UINT8_MAX;
volatile int32_t t9 = -16079675;
int16_t x47 = 119;
volatile int32_t x51 = -222216;
int64_t t12 = 6965130LL;
int16_t x66 = INT16_MIN;
volatile int64_t x73 = INT64_MIN;
uint8_t x76 = 19U;
volatile int8_t x89 = INT8_MAX;
int64_t x90 = INT64_MIN;
int64_t t22 = -1461LL;
int64_t t24 = 54112619508258080LL;
static int64_t x106 = 1544508732716232LL;
int16_t x110 = INT16_MIN;
static volatile int8_t x113 = -1;
int64_t x115 = INT64_MIN;
volatile int32_t t28 = -102;
int16_t x122 = INT16_MIN;
volatile int32_t x124 = -259;
int8_t x125 = INT8_MAX;
int16_t x132 = -1;
int8_t x136 = -1;
static volatile int16_t x146 = -727;
int16_t x149 = -3234;
uint64_t x151 = 5110LLU;
uint64_t t38 = 20874622575874LLU;
uint16_t x162 = UINT16_MAX;
volatile uint16_t x167 = 1U;
volatile int32_t x168 = -1;
int32_t x169 = INT32_MIN;
volatile int64_t x175 = -30LL;
uint64_t t45 = 7406251003479844155LLU;
static volatile uint8_t x191 = 2U;
uint16_t x200 = 8803U;
volatile int64_t x206 = 195LL;
static int8_t x208 = INT8_MIN;
uint32_t x213 = 1369806593U;
int64_t x214 = -1LL;
static int64_t x215 = INT64_MIN;
volatile int32_t x216 = INT32_MIN;
int64_t t52 = 7551816106971556LL;
volatile uint64_t x220 = UINT64_MAX;
volatile uint8_t x222 = 30U;
int64_t x224 = 1645LL;
int32_t t54 = -18;
int64_t x243 = -233505195826259LL;
volatile uint64_t x258 = UINT64_MAX;
int32_t x261 = 3753542;
int16_t x267 = -289;
int16_t x269 = INT16_MIN;
uint64_t x272 = UINT64_MAX;
int32_t t65 = -16737001;
int64_t x278 = -1LL;
int32_t x281 = INT32_MAX;
int64_t x285 = INT64_MIN;
int64_t x288 = INT64_MAX;
static uint32_t x289 = 6354308U;
int64_t x296 = INT64_MIN;
int64_t t71 = 482832LL;
int32_t x301 = INT32_MIN;
uint8_t x304 = 1U;
uint16_t x314 = 1479U;
int16_t x315 = INT16_MIN;
int8_t x318 = -33;
int32_t x319 = INT32_MAX;
int8_t x323 = 0;
int32_t t77 = -204;
static volatile int64_t x326 = INT64_MIN;
uint32_t x329 = 17U;
uint32_t x331 = 15855U;
volatile uint32_t t79 = 47995852U;
uint32_t x336 = 1305374U;
int16_t x341 = 428;
volatile int32_t x343 = 1422;
uint16_t x347 = UINT16_MAX;
int32_t x348 = -1;
static volatile int64_t t83 = -117181953LL;
int64_t x354 = INT64_MIN;
int16_t x358 = INT16_MIN;
int16_t x359 = INT16_MAX;
static volatile int8_t x363 = INT8_MIN;
int16_t x368 = INT16_MIN;
uint16_t x372 = UINT16_MAX;
int64_t x378 = 4292545LL;
static int32_t t94 = 326;
volatile int16_t x401 = 12163;
int64_t x403 = 1929278289552LL;
uint32_t x404 = UINT32_MAX;
int8_t x407 = INT8_MAX;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	static volatile int16_t x2 = -1;
	int8_t x3 = -1;
	int8_t x4 = -1;

	t0 = ((x1/x2)&(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -100414534;
	int64_t x6 = INT64_MIN;
	int8_t x8 = -1;
	volatile int64_t t1 = 129777041338LL;

	t1 = ((x5/x6)&(x7==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 517464401043082LLU;
	uint8_t x10 = UINT8_MAX;
	volatile uint16_t x12 = UINT16_MAX;
	volatile uint64_t t2 = 193LLU;

	t2 = ((x9/x10)&(x11==x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x15 = -27936471;
	volatile int64_t x16 = INT64_MIN;
	static uint32_t t3 = 0U;

	t3 = ((x13/x14)&(x15==x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 64U;
	int8_t x19 = -20;
	int16_t x20 = 571;

	t4 = ((x17/x18)&(x19==x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 1077LL;
	int8_t x22 = -1;
	int64_t x23 = -1289LL;
	int32_t x24 = INT32_MIN;
	int64_t t5 = -29215519274345705LL;

	t5 = ((x21/x22)&(x23==x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 416U;
	int32_t x28 = -1;
	int32_t t6 = 658002;

	t6 = ((x25/x26)&(x27==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = UINT64_MAX;
	int64_t x31 = INT64_MIN;

	t7 = ((x29/x30)&(x31==x32));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x34 = -1LL;
	uint64_t x36 = UINT64_MAX;
	int64_t t8 = 269758278029372642LL;

	t8 = ((x33/x34)&(x35==x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = 19U;
	int8_t x39 = 20;
	static volatile uint8_t x40 = 23U;

	t9 = ((x37/x38)&(x39==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 2197U;
	volatile uint64_t x42 = 285008006669LLU;
	static int16_t x43 = INT16_MIN;
	static int32_t x44 = INT32_MIN;
	uint64_t t10 = 1811261437863361LLU;

	t10 = ((x41/x42)&(x43==x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int8_t x46 = INT8_MAX;
	uint32_t x48 = 3U;
	int32_t t11 = 52518;

	t11 = ((x45/x46)&(x47==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MAX;
	int64_t x50 = INT64_MIN;
	int64_t x52 = -1LL;

	t12 = ((x49/x50)&(x51==x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int8_t x54 = 59;
	int16_t x55 = INT16_MIN;
	uint8_t x56 = 37U;
	int32_t t13 = 3339;

	t13 = ((x53/x54)&(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	volatile int64_t x58 = INT64_MAX;
	static volatile int32_t x59 = -26239;
	volatile int16_t x60 = INT16_MIN;
	int64_t t14 = 9991966476011035LL;

	t14 = ((x57/x58)&(x59==x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	uint8_t x62 = UINT8_MAX;
	int8_t x63 = 1;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t15 = 554;

	t15 = ((x61/x62)&(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 11U;
	int32_t x67 = INT32_MAX;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t16 = 6799416;

	t16 = ((x65/x66)&(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x74 = INT32_MIN;
	static uint8_t x75 = 32U;
	volatile int64_t t17 = -1637LL;

	t17 = ((x73/x74)&(x75==x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MAX;
	static uint16_t x78 = 6503U;
	uint16_t x79 = 3011U;
	uint32_t x80 = 3U;
	volatile int32_t t18 = -26103452;

	t18 = ((x77/x78)&(x79==x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = 3114432;
	static uint16_t x82 = 3365U;
	static int32_t x83 = INT32_MIN;
	int16_t x84 = -1;
	static int32_t t19 = 68009;

	t19 = ((x81/x82)&(x83==x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MIN;
	volatile int64_t x86 = INT64_MIN;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = -44;
	static volatile int64_t t20 = 782293472LL;

	t20 = ((x85/x86)&(x87==x88));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x91 = 490094341378723LLU;
	int64_t x92 = -1LL;
	int64_t t21 = 2729LL;

	t21 = ((x89/x90)&(x91==x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 2684944LL;
	int32_t x94 = 4932;
	uint16_t x95 = UINT16_MAX;
	static int32_t x96 = 2258072;

	t22 = ((x93/x94)&(x95==x96));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x97 = INT16_MAX;
	uint8_t x98 = UINT8_MAX;
	uint32_t x99 = 4U;
	int8_t x100 = -1;
	int32_t t23 = 21138126;

	t23 = ((x97/x98)&(x99==x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -154917611117378772LL;
	volatile uint32_t x102 = 6536994U;
	uint64_t x103 = UINT64_MAX;
	uint32_t x104 = UINT32_MAX;

	t24 = ((x101/x102)&(x103==x104));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int8_t x107 = 1;
	volatile int8_t x108 = INT8_MIN;
	int64_t t25 = 95572791LL;

	t25 = ((x105/x106)&(x107==x108));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = -1;
	int8_t x111 = -4;
	uint64_t x112 = 51410462LLU;
	int32_t t26 = 195;

	t26 = ((x109/x110)&(x111==x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = -1;
	int16_t x116 = INT16_MAX;
	volatile int32_t t27 = 421764;

	t27 = ((x113/x114)&(x115==x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x117 = -1;
	int8_t x118 = -9;
	volatile int64_t x119 = INT64_MIN;
	int32_t x120 = -1;

	t28 = ((x117/x118)&(x119==x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x121 = -1;
	volatile uint8_t x123 = UINT8_MAX;
	static int32_t t29 = 64;

	t29 = ((x121/x122)&(x123==x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x126 = -98;
	volatile int64_t x127 = -1LL;
	int16_t x128 = -7754;
	volatile int32_t t30 = -336255;

	t30 = ((x125/x126)&(x127==x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x129 = INT32_MIN;
	uint16_t x130 = UINT16_MAX;
	int16_t x131 = -66;
	int32_t t31 = -219579;

	t31 = ((x129/x130)&(x131==x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MAX;
	uint8_t x134 = UINT8_MAX;
	static int32_t x135 = INT32_MIN;
	int32_t t32 = 3284;

	t32 = ((x133/x134)&(x135==x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MAX;
	int16_t x138 = -1;
	uint8_t x139 = UINT8_MAX;
	uint16_t x140 = 53U;
	static volatile int32_t t33 = -887605;

	t33 = ((x137/x138)&(x139==x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -30106LL;
	uint32_t x143 = 43596273U;
	int32_t x144 = INT32_MIN;
	volatile int64_t t34 = -533153700LL;

	t34 = ((x141/x142)&(x143==x144));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x145 = 6;
	int64_t x147 = -1861578468579192002LL;
	volatile uint8_t x148 = 16U;
	int32_t t35 = 1;

	t35 = ((x145/x146)&(x147==x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x150 = -44;
	int8_t x152 = INT8_MAX;
	int32_t t36 = -6248;

	t36 = ((x149/x150)&(x151==x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 667107U;
	uint64_t x154 = 1LLU;
	static int32_t x155 = INT32_MIN;
	int32_t x156 = -1;
	uint64_t t37 = 2046LLU;

	t37 = ((x153/x154)&(x155==x156));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MAX;
	static uint64_t x158 = UINT64_MAX;
	static int64_t x159 = INT64_MIN;
	int8_t x160 = INT8_MAX;

	t38 = ((x157/x158)&(x159==x160));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x161 = 585633336LL;
	uint32_t x163 = UINT32_MAX;
	int64_t x164 = -973564955050956688LL;
	volatile int64_t t39 = -297441304652372869LL;

	t39 = ((x161/x162)&(x163==x164));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x165 = INT32_MIN;
	static int8_t x166 = -4;
	int32_t t40 = -15;

	t40 = ((x165/x166)&(x167==x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x170 = UINT16_MAX;
	int8_t x171 = INT8_MAX;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t41 = 629;

	t41 = ((x169/x170)&(x171==x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = INT16_MIN;
	volatile int64_t x174 = 2128097281957613131LL;
	uint32_t x176 = UINT32_MAX;
	volatile int64_t t42 = 169408021922LL;

	t42 = ((x173/x174)&(x175==x176));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x177 = INT32_MIN;
	int64_t x178 = -67683967742LL;
	volatile int32_t x179 = INT32_MAX;
	volatile int8_t x180 = INT8_MIN;
	volatile int64_t t43 = 0LL;

	t43 = ((x177/x178)&(x179==x180));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	static volatile int16_t x182 = 1;
	int64_t x183 = INT64_MIN;
	volatile uint32_t x184 = UINT32_MAX;
	static volatile int64_t t44 = -642485224364011112LL;

	t44 = ((x181/x182)&(x183==x184));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 20257U;
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = INT8_MIN;
	static uint32_t x188 = UINT32_MAX;

	t45 = ((x185/x186)&(x187==x188));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint8_t x189 = 127U;
	int16_t x190 = -179;
	uint32_t x192 = UINT32_MAX;
	volatile int32_t t46 = -1628;

	t46 = ((x189/x190)&(x191==x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x193 = INT8_MIN;
	int16_t x194 = INT16_MAX;
	int32_t x195 = -2553945;
	volatile int16_t x196 = INT16_MIN;
	int32_t t47 = 1838313;

	t47 = ((x193/x194)&(x195==x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = 66987882352LL;
	uint16_t x198 = 202U;
	uint32_t x199 = 23657633U;
	int64_t t48 = 3245LL;

	t48 = ((x197/x198)&(x199==x200));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x201 = UINT32_MAX;
	int8_t x202 = INT8_MIN;
	static uint16_t x203 = 5265U;
	uint16_t x204 = UINT16_MAX;
	volatile uint32_t t49 = 30936U;

	t49 = ((x201/x202)&(x203==x204));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x205 = 7150U;
	int16_t x207 = INT16_MIN;
	volatile int64_t t50 = 17LL;

	t50 = ((x205/x206)&(x207==x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -1;
	int8_t x210 = -3;
	static int64_t x211 = -1LL;
	int16_t x212 = -1;
	volatile int32_t t51 = -10;

	t51 = ((x209/x210)&(x211==x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {


	t52 = ((x213/x214)&(x215==x216));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = 12945260;
	volatile int64_t x218 = INT64_MAX;
	int8_t x219 = -1;
	volatile int64_t t53 = -388LL;

	t53 = ((x217/x218)&(x219==x220));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x221 = INT16_MAX;
	int32_t x223 = INT32_MIN;

	t54 = ((x221/x222)&(x223==x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = 3664;
	int8_t x226 = INT8_MAX;
	uint64_t x227 = 524196231334804LLU;
	int32_t x228 = -85225138;
	volatile int32_t t55 = 29159357;

	t55 = ((x225/x226)&(x227==x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x229 = INT64_MIN;
	volatile uint16_t x230 = 33U;
	static int64_t x231 = -1LL;
	static int16_t x232 = -39;
	static int64_t t56 = -166159830445728LL;

	t56 = ((x229/x230)&(x231==x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -1LL;
	int8_t x234 = INT8_MIN;
	volatile int8_t x235 = INT8_MIN;
	uint32_t x236 = 5263U;
	int64_t t57 = 17780423LL;

	t57 = ((x233/x234)&(x235==x236));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	int64_t x238 = INT64_MIN;
	int32_t x239 = INT32_MIN;
	int32_t x240 = -113357546;
	volatile int64_t t58 = -80444LL;

	t58 = ((x237/x238)&(x239==x240));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	uint32_t x242 = 124U;
	int32_t x244 = INT32_MIN;
	static volatile uint32_t t59 = 38786U;

	t59 = ((x241/x242)&(x243==x244));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x245 = 103U;
	uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MAX;
	int32_t t60 = -93647347;

	t60 = ((x245/x246)&(x247==x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 154475400673LLU;
	int32_t x254 = -1;
	volatile uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 3058U;
	volatile uint64_t t61 = 233027LLU;

	t61 = ((x253/x254)&(x255==x256));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = UINT16_MAX;
	static int64_t x259 = INT64_MAX;
	volatile int64_t x260 = INT64_MIN;
	volatile uint64_t t62 = 1179759020LLU;

	t62 = ((x257/x258)&(x259==x260));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x262 = INT64_MIN;
	int32_t x263 = -1;
	uint64_t x264 = UINT64_MAX;
	volatile int64_t t63 = 239428777LL;

	t63 = ((x261/x262)&(x263==x264));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x265 = INT64_MIN;
	uint64_t x266 = UINT64_MAX;
	volatile uint32_t x268 = 63U;
	volatile uint64_t t64 = 124965157227008918LLU;

	t64 = ((x265/x266)&(x267==x268));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x270 = 7U;
	static int16_t x271 = INT16_MAX;

	t65 = ((x269/x270)&(x271==x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = UINT8_MAX;
	int16_t x274 = INT16_MIN;
	volatile int8_t x275 = 7;
	volatile int64_t x276 = -31628087LL;
	volatile int32_t t66 = -7136;

	t66 = ((x273/x274)&(x275==x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x277 = -1;
	uint8_t x279 = 14U;
	static uint32_t x280 = UINT32_MAX;
	static int64_t t67 = 2861353305993715LL;

	t67 = ((x277/x278)&(x279==x280));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x282 = -1;
	static int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MIN;
	int32_t t68 = 767;

	t68 = ((x281/x282)&(x283==x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x286 = INT32_MIN;
	int16_t x287 = 0;
	int64_t t69 = 66528056LL;

	t69 = ((x285/x286)&(x287==x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MAX;
	int8_t x292 = 57;
	volatile uint32_t t70 = 6U;

	t70 = ((x289/x290)&(x291==x292));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = 208835737697609LL;
	int32_t x294 = INT32_MIN;
	int64_t x295 = -1LL;

	t71 = ((x293/x294)&(x295==x296));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x302 = UINT16_MAX;
	int8_t x303 = -31;
	int32_t t72 = -796369;

	t72 = ((x301/x302)&(x303==x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x305 = 70;
	static volatile uint64_t x306 = 6748732563433LLU;
	volatile uint16_t x307 = 226U;
	volatile int32_t x308 = -324;
	volatile uint64_t t73 = 4919237334636723LLU;

	t73 = ((x305/x306)&(x307==x308));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x309 = 0U;
	uint8_t x310 = UINT8_MAX;
	volatile int16_t x311 = 699;
	int32_t x312 = -506510;
	volatile int32_t t74 = -3527782;

	t74 = ((x309/x310)&(x311==x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x316 = UINT8_MAX;
	volatile int32_t t75 = -9504;

	t75 = ((x313/x314)&(x315==x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x317 = 1;
	static uint64_t x320 = UINT64_MAX;
	static int32_t t76 = 57;

	t76 = ((x317/x318)&(x319==x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x321 = 6584U;
	int32_t x322 = INT32_MIN;
	uint16_t x324 = 4691U;

	t77 = ((x321/x322)&(x323==x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 77107898U;
	int16_t x327 = -1;
	int16_t x328 = 1073;
	int64_t t78 = 171442524049998LL;

	t78 = ((x325/x326)&(x327==x328));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x330 = 1U;
	uint32_t x332 = 0U;

	t79 = ((x329/x330)&(x331==x332));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = INT16_MAX;
	static int16_t x334 = -1;
	int8_t x335 = 42;
	static volatile int32_t t80 = 31242;

	t80 = ((x333/x334)&(x335==x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x337 = 39051189052845LLU;
	static int32_t x338 = INT32_MAX;
	uint8_t x339 = 11U;
	volatile uint32_t x340 = UINT32_MAX;
	volatile uint64_t t81 = 12290008618LLU;

	t81 = ((x337/x338)&(x339==x340));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x342 = 1U;
	uint32_t x344 = UINT32_MAX;
	int32_t t82 = -1;

	t82 = ((x341/x342)&(x343==x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -165451790160323LL;
	int8_t x346 = 4;

	t83 = ((x345/x346)&(x347==x348));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x349 = INT8_MIN;
	static int8_t x350 = INT8_MAX;
	int32_t x351 = -1;
	volatile int16_t x352 = INT16_MIN;
	volatile int32_t t84 = 50135523;

	t84 = ((x349/x350)&(x351==x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x353 = 9;
	int16_t x355 = INT16_MIN;
	int64_t x356 = INT64_MAX;
	volatile int64_t t85 = 5LL;

	t85 = ((x353/x354)&(x355==x356));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x357 = INT16_MIN;
	int32_t x360 = -1;
	volatile int32_t t86 = 12;

	t86 = ((x357/x358)&(x359==x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = -36;
	int16_t x362 = INT16_MIN;
	int8_t x364 = -1;
	static volatile int32_t t87 = 461894219;

	t87 = ((x361/x362)&(x363==x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = UINT32_MAX;
	int8_t x366 = -1;
	uint8_t x367 = UINT8_MAX;
	uint32_t t88 = 335U;

	t88 = ((x365/x366)&(x367==x368));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x369 = 20;
	static uint16_t x370 = 2U;
	volatile uint64_t x371 = 516771509LLU;
	volatile int32_t t89 = -396;

	t89 = ((x369/x370)&(x371==x372));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x373 = INT8_MIN;
	int8_t x374 = -1;
	volatile int64_t x375 = -1LL;
	int16_t x376 = INT16_MIN;
	static int32_t t90 = 22;

	t90 = ((x373/x374)&(x375==x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x377 = -1LL;
	int32_t x379 = 3480;
	int16_t x380 = INT16_MIN;
	int64_t t91 = 1LL;

	t91 = ((x377/x378)&(x379==x380));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x385 = 1655570985821LL;
	uint32_t x386 = 78048U;
	int32_t x387 = INT32_MAX;
	int64_t x388 = INT64_MIN;
	int64_t t92 = -193447LL;

	t92 = ((x385/x386)&(x387==x388));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	static volatile int8_t x391 = INT8_MIN;
	int32_t x392 = INT32_MAX;
	int64_t t93 = 0LL;

	t93 = ((x389/x390)&(x391==x392));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = INT8_MAX;
	volatile int32_t x398 = -10952;
	uint32_t x399 = 121305U;
	int64_t x400 = -1753268744914LL;

	t94 = ((x397/x398)&(x399==x400));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x402 = INT64_MIN;
	int64_t t95 = -6381LL;

	t95 = ((x401/x402)&(x403==x404));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x405 = INT32_MIN;
	volatile uint32_t x406 = 47935157U;
	int16_t x408 = -166;
	volatile uint32_t t96 = 250719U;

	t96 = ((x405/x406)&(x407==x408));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x409 = INT64_MIN;
	volatile int64_t x410 = -96810936LL;
	int8_t x411 = INT8_MAX;
	int8_t x412 = INT8_MAX;
	int64_t t97 = 5478060947351LL;

	t97 = ((x409/x410)&(x411==x412));

	if (t97 != 1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x413 = 1U;
	uint64_t x414 = 17275487743LLU;
	int64_t x415 = INT64_MIN;
	uint8_t x416 = UINT8_MAX;
	uint64_t t98 = 5LLU;

	t98 = ((x413/x414)&(x415==x416));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x417 = -2324LL;
	int32_t x418 = INT32_MIN;
	int32_t x419 = 124710;
	int32_t x420 = INT32_MIN;
	int64_t t99 = 326514770109311LL;

	t99 = ((x417/x418)&(x419==x420));

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

