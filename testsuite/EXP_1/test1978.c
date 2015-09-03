#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 0;
volatile int32_t x13 = INT32_MIN;
int64_t x23 = -1065177790750661LL;
int16_t x24 = -1966;
static int32_t t4 = -35089;
uint8_t x27 = UINT8_MAX;
int32_t t5 = 602073896;
int8_t x31 = -3;
int32_t t7 = -1;
volatile int32_t x40 = INT32_MAX;
static int32_t x44 = -750944;
int32_t x48 = 431;
int32_t t11 = -31;
static uint32_t x62 = UINT32_MAX;
int8_t x64 = -7;
uint8_t x67 = UINT8_MAX;
int64_t x72 = -1LL;
int64_t t16 = -13236051761729LL;
uint64_t t17 = 11484890LLU;
int32_t x93 = 102;
int16_t x95 = INT16_MIN;
static int8_t x96 = -6;
uint64_t t21 = 111LLU;
static volatile int32_t t22 = -426;
int64_t x109 = -2404869887787LL;
static uint16_t x111 = UINT16_MAX;
static int8_t x119 = INT8_MIN;
volatile int8_t x120 = INT8_MIN;
volatile int32_t t26 = 347690;
int32_t x126 = -1;
uint32_t x129 = UINT32_MAX;
volatile uint64_t x135 = 214863558596072LLU;
uint64_t t29 = 303154034LLU;
int64_t x149 = -1LL;
uint8_t x157 = 17U;
static int32_t x166 = -1;
volatile uint32_t x179 = UINT32_MAX;
int32_t t38 = -11344045;
uint8_t x187 = 1U;
static uint16_t x188 = UINT16_MAX;
volatile int32_t x190 = INT32_MIN;
int32_t x194 = -1;
volatile int8_t x196 = 1;
uint8_t x199 = 8U;
int32_t t42 = -6277;
int8_t x203 = -1;
volatile uint32_t t45 = 185088U;
int32_t x215 = INT32_MIN;
volatile int32_t t46 = 1626624;
volatile uint16_t x220 = 489U;
static int32_t x229 = INT32_MIN;
volatile int64_t x234 = -1LL;
int16_t x235 = INT16_MIN;
int16_t x236 = -172;
int64_t x249 = INT64_MAX;
uint64_t x250 = UINT64_MAX;
volatile uint16_t x252 = 0U;
int32_t t55 = 1435269;
int64_t x257 = -92031235LL;
int64_t x261 = INT64_MIN;
uint32_t t58 = 88761400U;
int32_t x265 = INT32_MIN;
int16_t x268 = -7;
static volatile int16_t x272 = -31;
int16_t x274 = 16252;
volatile int64_t t65 = -2197471944182642LL;
static int8_t x297 = INT8_MIN;
int8_t x298 = -1;
int16_t x312 = INT16_MAX;
int32_t x313 = -1;
static int16_t x318 = INT16_MAX;
static int64_t x322 = -1LL;
int32_t x326 = -840208;
volatile int32_t t73 = 4876;
int8_t x331 = -1;
volatile int8_t x333 = 28;
static int32_t x359 = INT32_MIN;
volatile int32_t t83 = -79114766;
int64_t t85 = 10444173LL;
uint32_t x391 = UINT32_MAX;
int32_t t86 = -14255566;
int32_t x395 = -1;
int8_t x399 = INT8_MIN;
uint16_t x406 = UINT16_MAX;
static volatile int16_t x415 = INT16_MIN;
int8_t x416 = 0;
int32_t x421 = INT32_MIN;
volatile uint32_t x423 = 0U;
int16_t x424 = INT16_MIN;
volatile int32_t t94 = -17005;
int16_t x428 = INT16_MIN;
int32_t x429 = INT32_MAX;
static int8_t x432 = INT8_MAX;
int8_t x439 = INT8_MIN;
volatile int8_t x440 = -1;


void f0(void) {
	volatile int32_t x1 = 274;
	int16_t x2 = INT16_MIN;
	static int64_t x3 = -1LL;
	static int8_t x4 = INT8_MIN;

	t0 = (((x1|x2)<=x3)-x4);

	if (t0 != 129) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 22U;
	static volatile int16_t x6 = INT16_MIN;
	uint16_t x7 = 1U;
	int8_t x8 = -1;
	int32_t t1 = 2106;

	t1 = (((x5|x6)<=x7)-x8);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = -1;
	volatile int32_t x15 = 494260;
	int16_t x16 = INT16_MIN;
	volatile int32_t t2 = -5656266;

	t2 = (((x13|x14)<=x15)-x16);

	if (t2 != 32769) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	static int32_t x18 = 63;
	volatile int32_t x19 = INT32_MIN;
	int16_t x20 = -39;
	int32_t t3 = -987860981;

	t3 = (((x17|x18)<=x19)-x20);

	if (t3 != 39) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MAX;
	static int64_t x22 = INT64_MAX;

	t4 = (((x21|x22)<=x23)-x24);

	if (t4 != 1966) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -1;
	volatile int16_t x26 = -7930;
	int8_t x28 = INT8_MIN;

	t5 = (((x25|x26)<=x27)-x28);

	if (t5 != 129) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = INT32_MIN;
	volatile int32_t x30 = INT32_MIN;
	int64_t x32 = 34687LL;
	int64_t t6 = -3797822504636621334LL;

	t6 = (((x29|x30)<=x31)-x32);

	if (t6 != -34686LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = 53721;
	int16_t x34 = INT16_MIN;
	volatile uint64_t x35 = 1018027815LLU;
	uint8_t x36 = 106U;

	t7 = (((x33|x34)<=x35)-x36);

	if (t7 != -106) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 2552199U;
	int32_t x38 = -7967675;
	uint64_t x39 = 12422074LLU;
	static int32_t t8 = 75092;

	t8 = (((x37|x38)<=x39)-x40);

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int64_t x42 = INT64_MAX;
	volatile uint64_t x43 = UINT64_MAX;
	int32_t t9 = -85402;

	t9 = (((x41|x42)<=x43)-x44);

	if (t9 != 750945) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 1;
	static int8_t x46 = -12;
	volatile uint32_t x47 = UINT32_MAX;
	int32_t t10 = 3449126;

	t10 = (((x45|x46)<=x47)-x48);

	if (t10 != -430) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x49 = -1;
	int16_t x50 = -5;
	uint16_t x51 = 1U;
	int16_t x52 = INT16_MAX;

	t11 = (((x49|x50)<=x51)-x52);

	if (t11 != -32766) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 735807643U;
	int64_t x54 = -12231938711121LL;
	static volatile int8_t x55 = INT8_MIN;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t12 = 490798831;

	t12 = (((x53|x54)<=x55)-x56);

	if (t12 != -254) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 92U;
	static int32_t x58 = 3070391;
	static volatile int8_t x59 = INT8_MIN;
	uint16_t x60 = 2676U;
	volatile int32_t t13 = 104331124;

	t13 = (((x57|x58)<=x59)-x60);

	if (t13 != -2676) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	uint8_t x63 = UINT8_MAX;
	static int32_t t14 = 7889746;

	t14 = (((x61|x62)<=x63)-x64);

	if (t14 != 7) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 6619722145888LL;
	int32_t x66 = INT32_MIN;
	volatile uint32_t x68 = 853573U;
	volatile uint32_t t15 = 1U;

	t15 = (((x65|x66)<=x67)-x68);

	if (t15 != 4294113724U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = UINT16_MAX;
	volatile uint32_t x70 = 315862847U;
	uint8_t x71 = 3U;

	t16 = (((x69|x70)<=x71)-x72);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = 164354445842316784LLU;
	volatile int32_t x82 = -1;
	volatile uint16_t x83 = 1792U;
	uint64_t x84 = UINT64_MAX;

	t17 = (((x81|x82)<=x83)-x84);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = INT8_MAX;
	int8_t x90 = INT8_MIN;
	static int32_t x91 = 118906683;
	int16_t x92 = INT16_MIN;
	volatile int32_t t18 = 19;

	t18 = (((x89|x90)<=x91)-x92);

	if (t18 != 32769) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x94 = -3651737001292381LL;
	int32_t t19 = -108598;

	t19 = (((x93|x94)<=x95)-x96);

	if (t19 != 7) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x97 = INT8_MIN;
	int8_t x98 = INT8_MIN;
	static int32_t x99 = INT32_MIN;
	volatile int8_t x100 = -1;
	static volatile int32_t t20 = 1;

	t20 = (((x97|x98)<=x99)-x100);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x101 = INT8_MIN;
	volatile int32_t x102 = -339;
	int64_t x103 = 36498211LL;
	uint64_t x104 = 2904674187326481017LLU;

	t21 = (((x101|x102)<=x103)-x104);

	if (t21 != 15542069886383070600LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = 29125LLU;
	int64_t x106 = -1LL;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;

	t22 = (((x105|x106)<=x107)-x108);

	if (t22 != 128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x110 = -1;
	int16_t x112 = -1;
	volatile int32_t t23 = -1031794;

	t23 = (((x109|x110)<=x111)-x112);

	if (t23 != 2) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x113 = INT32_MIN;
	static int64_t x114 = -1LL;
	int32_t x115 = -14;
	static volatile int32_t x116 = INT32_MAX;
	static int32_t t24 = -81576;

	t24 = (((x113|x114)<=x115)-x116);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int32_t x118 = -579;
	volatile int32_t t25 = -44614;

	t25 = (((x117|x118)<=x119)-x120);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int64_t x122 = INT64_MIN;
	int16_t x123 = 720;
	static int16_t x124 = INT16_MIN;

	t26 = (((x121|x122)<=x123)-x124);

	if (t26 != 32769) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x125 = 12935624;
	int16_t x127 = INT16_MAX;
	int32_t x128 = 5975383;
	static volatile int32_t t27 = 65944;

	t27 = (((x125|x126)<=x127)-x128);

	if (t27 != -5975382) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = -1;
	int64_t x131 = INT64_MIN;
	static uint16_t x132 = UINT16_MAX;
	static volatile int32_t t28 = 10387;

	t28 = (((x129|x130)<=x131)-x132);

	if (t28 != -65535) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x133 = UINT16_MAX;
	static int16_t x134 = 4;
	volatile uint64_t x136 = 540138293532LLU;

	t29 = (((x133|x134)<=x135)-x136);

	if (t29 != 18446743533571258085LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 51LLU;
	uint16_t x138 = 1U;
	uint8_t x139 = 2U;
	int64_t x140 = -2902098LL;
	volatile int64_t t30 = -18078191LL;

	t30 = (((x137|x138)<=x139)-x140);

	if (t30 != 2902098LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = 19;
	volatile int64_t x142 = -1LL;
	int16_t x143 = INT16_MIN;
	volatile uint32_t x144 = 2752U;
	volatile uint32_t t31 = 887154032U;

	t31 = (((x141|x142)<=x143)-x144);

	if (t31 != 4294964544U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x150 = INT64_MIN;
	volatile int64_t x151 = INT64_MAX;
	uint8_t x152 = 4U;
	static volatile int32_t t32 = -17854627;

	t32 = (((x149|x150)<=x151)-x152);

	if (t32 != -3) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = INT32_MIN;
	int32_t x154 = -702239223;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = 61;
	static volatile int32_t t33 = 9647;

	t33 = (((x153|x154)<=x155)-x156);

	if (t33 != -60) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x158 = 5167700411471LL;
	int8_t x159 = -1;
	uint16_t x160 = 11U;
	static int32_t t34 = 572191065;

	t34 = (((x157|x158)<=x159)-x160);

	if (t34 != -11) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x165 = INT32_MAX;
	int32_t x167 = INT32_MIN;
	static uint16_t x168 = 3U;
	volatile int32_t t35 = 93;

	t35 = (((x165|x166)<=x167)-x168);

	if (t35 != -3) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = -1;
	volatile int16_t x174 = INT16_MIN;
	int16_t x175 = -18;
	int8_t x176 = -1;
	int32_t t36 = 4916;

	t36 = (((x173|x174)<=x175)-x176);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x177 = INT8_MAX;
	volatile uint64_t x178 = 449933LLU;
	static uint32_t x180 = 166U;
	uint32_t t37 = 202U;

	t37 = (((x177|x178)<=x179)-x180);

	if (t37 != 4294967131U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x181 = 10U;
	volatile int32_t x182 = -91609274;
	uint8_t x183 = UINT8_MAX;
	static int16_t x184 = INT16_MAX;

	t38 = (((x181|x182)<=x183)-x184);

	if (t38 != -32766) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x185 = INT32_MIN;
	uint8_t x186 = 12U;
	volatile int32_t t39 = -136;

	t39 = (((x185|x186)<=x187)-x188);

	if (t39 != -65534) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x189 = INT32_MAX;
	static volatile int32_t x191 = INT32_MIN;
	int32_t x192 = 36621073;
	volatile int32_t t40 = 13150904;

	t40 = (((x189|x190)<=x191)-x192);

	if (t40 != -36621073) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = -1;
	volatile int32_t x195 = -2170;
	static volatile int32_t t41 = 8;

	t41 = (((x193|x194)<=x195)-x196);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = 8871;
	volatile int16_t x198 = -1;
	static int32_t x200 = INT32_MAX;

	t42 = (((x197|x198)<=x199)-x200);

	if (t42 != -2147483646) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = -1;
	int32_t x204 = -1;
	volatile int32_t t43 = 1;

	t43 = (((x201|x202)<=x203)-x204);

	if (t43 != 2) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = 12U;
	int32_t x206 = -1;
	int32_t x207 = INT32_MIN;
	static int64_t x208 = -1LL;
	int64_t t44 = 1237LL;

	t44 = (((x205|x206)<=x207)-x208);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x209 = 1U;
	int16_t x210 = 63;
	volatile int32_t x211 = INT32_MAX;
	uint32_t x212 = 116900U;

	t45 = (((x209|x210)<=x211)-x212);

	if (t45 != 4294850397U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MIN;
	volatile int8_t x214 = -1;
	int32_t x216 = -1;

	t46 = (((x213|x214)<=x215)-x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = 3003152;
	int8_t x218 = INT8_MIN;
	volatile int32_t x219 = 25848214;
	int32_t t47 = 18265;

	t47 = (((x217|x218)<=x219)-x220);

	if (t47 != -488) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x221 = 14057444255069922LLU;
	volatile uint32_t x222 = 66718430U;
	volatile int16_t x223 = INT16_MAX;
	static uint64_t x224 = 330908514042LLU;
	volatile uint64_t t48 = 37LLU;

	t48 = (((x221|x222)<=x223)-x224);

	if (t48 != 18446743742801037574LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = 16614979U;
	int32_t x227 = INT32_MIN;
	static uint32_t x228 = 225221462U;
	volatile uint32_t t49 = 1U;

	t49 = (((x225|x226)<=x227)-x228);

	if (t49 != 4069745834U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x230 = INT8_MIN;
	int16_t x231 = -1;
	int32_t x232 = -1;
	volatile int32_t t50 = -858049088;

	t50 = (((x229|x230)<=x231)-x232);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = -1;
	int32_t t51 = 751386;

	t51 = (((x233|x234)<=x235)-x236);

	if (t51 != 172) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	volatile int16_t x239 = INT16_MIN;
	static uint64_t x240 = 996254326LLU;
	static volatile uint64_t t52 = 2LLU;

	t52 = (((x237|x238)<=x239)-x240);

	if (t52 != 18446744072713297291LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = 681;
	static uint64_t x242 = 1822920750151417599LLU;
	volatile int32_t x243 = -1;
	static int32_t x244 = -1;
	volatile int32_t t53 = 9;

	t53 = (((x241|x242)<=x243)-x244);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x245 = INT16_MAX;
	int32_t x246 = INT32_MAX;
	uint64_t x247 = 123530LLU;
	volatile int64_t x248 = INT64_MAX;
	int64_t t54 = 215661600813589706LL;

	t54 = (((x245|x246)<=x247)-x248);

	if (t54 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x251 = INT16_MIN;

	t55 = (((x249|x250)<=x251)-x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x253 = INT8_MIN;
	static uint32_t x254 = UINT32_MAX;
	int8_t x255 = 22;
	int64_t x256 = 28259124811193LL;
	int64_t t56 = -10198216307305373LL;

	t56 = (((x253|x254)<=x255)-x256);

	if (t56 != -28259124811193LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x258 = -220;
	static int32_t x259 = -1;
	int16_t x260 = INT16_MAX;
	int32_t t57 = 227;

	t57 = (((x257|x258)<=x259)-x260);

	if (t57 != -32766) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x262 = INT8_MIN;
	int32_t x263 = -1;
	uint32_t x264 = 1007U;

	t58 = (((x261|x262)<=x263)-x264);

	if (t58 != 4294966290U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x266 = -1;
	int8_t x267 = -1;
	static volatile int32_t t59 = -5;

	t59 = (((x265|x266)<=x267)-x268);

	if (t59 != 8) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = INT16_MIN;
	static int8_t x270 = INT8_MAX;
	int64_t x271 = -3003662276LL;
	volatile int32_t t60 = 20452;

	t60 = (((x269|x270)<=x271)-x272);

	if (t60 != 31) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x273 = 1979U;
	volatile int16_t x275 = -13496;
	int16_t x276 = INT16_MAX;
	int32_t t61 = 930;

	t61 = (((x273|x274)<=x275)-x276);

	if (t61 != -32766) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MAX;
	static int8_t x282 = INT8_MIN;
	volatile uint16_t x283 = UINT16_MAX;
	uint16_t x284 = 61U;
	int32_t t62 = 3320104;

	t62 = (((x281|x282)<=x283)-x284);

	if (t62 != -60) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x285 = 0;
	uint8_t x286 = 28U;
	int32_t x287 = 0;
	volatile uint8_t x288 = 82U;
	int32_t t63 = 905635745;

	t63 = (((x285|x286)<=x287)-x288);

	if (t63 != -82) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int32_t x289 = 84447;
	uint8_t x290 = UINT8_MAX;
	int32_t x291 = -1;
	static int16_t x292 = INT16_MAX;
	int32_t t64 = 0;

	t64 = (((x289|x290)<=x291)-x292);

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x293 = 1;
	static int64_t x294 = 18064387LL;
	int32_t x295 = INT32_MIN;
	int64_t x296 = -1LL;

	t65 = (((x293|x294)<=x295)-x296);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x299 = 1LLU;
	int16_t x300 = 200;
	volatile int32_t t66 = -16;

	t66 = (((x297|x298)<=x299)-x300);

	if (t66 != -200) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x301 = 29U;
	int32_t x302 = -1;
	int16_t x303 = INT16_MIN;
	int64_t x304 = -1LL;
	int64_t t67 = 3919399411LL;

	t67 = (((x301|x302)<=x303)-x304);

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x305 = UINT32_MAX;
	static int64_t x306 = -4744907171764921LL;
	static uint64_t x307 = 3120LLU;
	static int8_t x308 = 1;
	volatile int32_t t68 = 13735;

	t68 = (((x305|x306)<=x307)-x308);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x309 = UINT16_MAX;
	uint16_t x310 = 32602U;
	static uint64_t x311 = 24089685LLU;
	static volatile int32_t t69 = 20008402;

	t69 = (((x309|x310)<=x311)-x312);

	if (t69 != -32766) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x314 = INT16_MIN;
	int64_t x315 = INT64_MIN;
	int32_t x316 = 0;
	int32_t t70 = -1082714;

	t70 = (((x313|x314)<=x315)-x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x319 = 1955;
	static volatile uint32_t x320 = 1U;
	uint32_t t71 = UINT32_MAX;

	t71 = (((x317|x318)<=x319)-x320);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x321 = -63677291405LL;
	uint8_t x323 = 8U;
	volatile int16_t x324 = INT16_MIN;
	volatile int32_t t72 = 3905;

	t72 = (((x321|x322)<=x323)-x324);

	if (t72 != 32769) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x325 = INT32_MAX;
	int16_t x327 = INT16_MIN;
	int8_t x328 = -3;

	t73 = (((x325|x326)<=x327)-x328);

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	int8_t x332 = INT8_MIN;
	volatile int32_t t74 = -135;

	t74 = (((x329|x330)<=x331)-x332);

	if (t74 != 129) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x334 = INT32_MAX;
	int64_t x335 = INT64_MAX;
	volatile int8_t x336 = -27;
	int32_t t75 = 213359;

	t75 = (((x333|x334)<=x335)-x336);

	if (t75 != 28) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x337 = -1;
	uint32_t x338 = 3934U;
	uint16_t x339 = 2U;
	int16_t x340 = INT16_MIN;
	static int32_t t76 = -220835328;

	t76 = (((x337|x338)<=x339)-x340);

	if (t76 != 32768) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x345 = INT64_MIN;
	uint8_t x346 = 2U;
	int8_t x347 = INT8_MIN;
	static int64_t x348 = -1LL;
	volatile int64_t t77 = 17723931261906945LL;

	t77 = (((x345|x346)<=x347)-x348);

	if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MIN;
	int8_t x351 = INT8_MIN;
	int32_t x352 = INT32_MAX;
	int32_t t78 = -28;

	t78 = (((x349|x350)<=x351)-x352);

	if (t78 != -2147483646) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x353 = 148U;
	int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MAX;
	uint64_t x356 = 3875184LLU;
	volatile uint64_t t79 = 368120771911535LLU;

	t79 = (((x353|x354)<=x355)-x356);

	if (t79 != 18446744073705676433LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = 4;
	volatile uint16_t x358 = 12944U;
	int32_t x360 = -1;
	volatile int32_t t80 = 1;

	t80 = (((x357|x358)<=x359)-x360);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	volatile int64_t x366 = 268737LL;
	uint8_t x367 = UINT8_MAX;
	int16_t x368 = -1;
	volatile int32_t t81 = -25994053;

	t81 = (((x365|x366)<=x367)-x368);

	if (t81 != 2) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x369 = UINT8_MAX;
	uint64_t x370 = 746820225341543LLU;
	static int64_t x371 = 16451728757LL;
	int8_t x372 = 3;
	volatile int32_t t82 = 5049;

	t82 = (((x369|x370)<=x371)-x372);

	if (t82 != -3) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x373 = UINT8_MAX;
	int8_t x374 = -1;
	int16_t x375 = INT16_MIN;
	int8_t x376 = 1;

	t83 = (((x373|x374)<=x375)-x376);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x377 = UINT16_MAX;
	volatile int64_t x378 = INT64_MIN;
	int64_t x379 = INT64_MAX;
	static volatile int32_t x380 = INT32_MAX;
	int32_t t84 = -6707416;

	t84 = (((x377|x378)<=x379)-x380);

	if (t84 != -2147483646) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x381 = 35U;
	uint8_t x382 = UINT8_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -125494041LL;

	t85 = (((x381|x382)<=x383)-x384);

	if (t85 != 125494041LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x389 = 2637052LLU;
	int8_t x390 = INT8_MAX;
	static int32_t x392 = -1;

	t86 = (((x389|x390)<=x391)-x392);

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int32_t x393 = INT32_MIN;
	uint8_t x394 = 0U;
	int64_t x396 = 33447702177LL;
	int64_t t87 = 27644155075LL;

	t87 = (((x393|x394)<=x395)-x396);

	if (t87 != -33447702176LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int8_t x398 = -1;
	int8_t x400 = 1;
	volatile int32_t t88 = -9341873;

	t88 = (((x397|x398)<=x399)-x400);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x401 = INT64_MIN;
	int64_t x402 = -2475975LL;
	int16_t x403 = INT16_MIN;
	static int16_t x404 = INT16_MIN;
	volatile int32_t t89 = 45214;

	t89 = (((x401|x402)<=x403)-x404);

	if (t89 != 32769) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = -1LL;
	int8_t x407 = INT8_MAX;
	uint64_t x408 = 158327763825LLU;
	static volatile uint64_t t90 = 29545947LLU;

	t90 = (((x405|x406)<=x407)-x408);

	if (t90 != 18446743915381787792LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = 413LL;
	int8_t x410 = 1;
	uint8_t x411 = 1U;
	uint16_t x412 = 8U;
	volatile int32_t t91 = 2223428;

	t91 = (((x409|x410)<=x411)-x412);

	if (t91 != -8) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = 0U;
	int16_t x414 = -1;
	int32_t t92 = 26413;

	t92 = (((x413|x414)<=x415)-x416);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x417 = 33431608U;
	static volatile int16_t x418 = -9;
	int64_t x419 = INT64_MIN;
	volatile uint64_t x420 = UINT64_MAX;
	volatile uint64_t t93 = 1519386035LLU;

	t93 = (((x417|x418)<=x419)-x420);

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x422 = INT32_MIN;

	t94 = (((x421|x422)<=x423)-x424);

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = INT8_MIN;
	volatile int8_t x426 = 13;
	uint32_t x427 = 1074216544U;
	volatile int32_t t95 = -3918;

	t95 = (((x425|x426)<=x427)-x428);

	if (t95 != 32768) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x430 = INT64_MIN;
	int32_t x431 = -3;
	volatile int32_t t96 = 24850430;

	t96 = (((x429|x430)<=x431)-x432);

	if (t96 != -126) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x433 = 290531294966794LLU;
	volatile uint8_t x434 = 19U;
	volatile int8_t x435 = -1;
	uint64_t x436 = UINT64_MAX;
	uint64_t t97 = 2777144471670913LLU;

	t97 = (((x433|x434)<=x435)-x436);

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x437 = 23556U;
	int8_t x438 = INT8_MIN;
	int32_t t98 = -115418697;

	t98 = (((x437|x438)<=x439)-x440);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x441 = UINT64_MAX;
	int64_t x442 = 20650353838386LL;
	volatile int32_t x443 = INT32_MIN;
	int32_t x444 = INT32_MAX;
	volatile int32_t t99 = -84876192;

	t99 = (((x441|x442)<=x443)-x444);

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

