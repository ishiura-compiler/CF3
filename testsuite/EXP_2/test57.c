#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = 1535LL;
uint64_t t1 = 888LLU;
static uint64_t t3 = 5147977609224LLU;
volatile int8_t x24 = INT8_MIN;
volatile int16_t x30 = -1;
volatile int8_t x31 = 0;
int8_t x32 = -1;
uint16_t x61 = UINT16_MAX;
static uint32_t x63 = UINT32_MAX;
int32_t t12 = -1776;
int64_t x69 = INT64_MIN;
int64_t t13 = 2495060524715572224LL;
int16_t x73 = 95;
int64_t x75 = INT64_MAX;
volatile int32_t x81 = INT32_MIN;
int8_t x83 = INT8_MIN;
uint8_t x85 = 64U;
int32_t x90 = INT32_MAX;
int8_t x91 = -7;
int16_t x92 = INT16_MAX;
int16_t x95 = -1;
static volatile int16_t x98 = INT16_MAX;
int64_t x99 = 6384091LL;
uint8_t x100 = UINT8_MAX;
int8_t x102 = INT8_MIN;
static int64_t t21 = 2979966970830LL;
int8_t x106 = INT8_MIN;
int64_t x109 = INT64_MIN;
int8_t x110 = 2;
volatile int64_t t23 = 270102673383390249LL;
int32_t x137 = INT32_MIN;
int16_t x139 = 12;
volatile uint8_t x140 = 2U;
static uint8_t x141 = 6U;
int64_t x142 = -1LL;
int32_t x144 = INT32_MAX;
volatile int64_t t30 = -11682889244406LL;
int8_t x154 = INT8_MIN;
int16_t x165 = -10;
static uint16_t x168 = UINT16_MAX;
uint16_t x186 = 0U;
uint8_t x187 = UINT8_MAX;
volatile int32_t t37 = 60944;
uint8_t x194 = UINT8_MAX;
static uint32_t t39 = 2342U;
volatile uint16_t x207 = 1766U;
volatile uint64_t x217 = UINT64_MAX;
uint64_t t43 = 3429705373491809LLU;
volatile uint32_t x235 = 1698687440U;
volatile int32_t x236 = INT32_MAX;
volatile uint32_t t47 = 257309U;
int8_t x239 = -1;
int8_t x242 = INT8_MAX;
volatile int64_t t49 = 3LL;
uint16_t x247 = 0U;
int8_t x254 = INT8_MIN;
static uint16_t x255 = UINT16_MAX;
volatile int32_t x259 = -1;
volatile int16_t x261 = 1012;
int64_t x270 = INT64_MIN;
volatile int16_t x276 = INT16_MAX;
static volatile int64_t x296 = 162294430062LL;
volatile int64_t x298 = -30991487081784567LL;
int64_t t62 = 57328852464LL;
volatile int64_t x303 = 5436LL;
volatile uint16_t x307 = 7789U;
volatile uint64_t x312 = 451LLU;
static uint64_t t65 = 5307996077032098LLU;
int8_t x316 = INT8_MIN;
static volatile int32_t t66 = 0;
volatile int64_t t68 = -165LL;
uint32_t x327 = 15U;
int8_t x328 = INT8_MAX;
volatile uint32_t t69 = 879U;
uint64_t x345 = UINT64_MAX;
volatile int32_t x352 = -3173;
uint32_t x354 = 28U;
volatile int16_t x362 = 19;
int64_t x364 = INT64_MIN;
static int16_t x365 = 12715;
volatile uint8_t x380 = UINT8_MAX;
static uint8_t x381 = 124U;
int16_t x387 = INT16_MIN;
static int64_t t85 = 214576866LL;
int64_t x408 = 45472353424950LL;
static volatile int32_t t87 = 7176;
int16_t x413 = 1216;
volatile int16_t x423 = -3586;
int16_t x443 = INT16_MIN;
static int64_t x447 = INT64_MIN;
volatile uint64_t x448 = 1LLU;
int32_t x449 = INT32_MIN;
static int32_t x452 = -338198224;
uint64_t t97 = 640LLU;
int64_t x460 = -79463738358667641LL;


void f0(void) {
	int32_t x2 = INT32_MIN;
	uint32_t x3 = UINT32_MAX;
	uint8_t x4 = 57U;
	int64_t t0 = -9792598098600374LL;

	t0 = ((x1%(x2+x3))%x4);

	if (t0 != 53LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MIN;
	volatile int32_t x7 = 2250;
	static uint64_t x8 = 30568848292LLU;

	t1 = ((x5%(x6+x7))%x8);

	if (t1 != 22727917282LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = 6437995789794513LL;
	int8_t x14 = -1;
	static volatile int16_t x15 = 0;
	int64_t x16 = -6312752982LL;
	int64_t t2 = -15150LL;

	t2 = ((x13%(x14+x15))%x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	uint64_t x18 = 282LLU;
	int32_t x19 = 18529732;
	static volatile uint64_t x20 = UINT64_MAX;

	t3 = ((x17%(x18+x19))%x20);

	if (t3 != 4312265LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = 31717U;
	volatile uint8_t x22 = 3U;
	int8_t x23 = INT8_MIN;
	static uint32_t t4 = 280534239U;

	t4 = ((x21%(x22+x23))%x24);

	if (t4 != 31717U) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = UINT64_MAX;
	static uint64_t t5 = 2910LLU;

	t5 = ((x29%(x30+x31))%x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x33 = -1164;
	int32_t x34 = -1;
	int32_t x35 = -1;
	uint8_t x36 = 126U;
	volatile int32_t t6 = 1035898290;

	t6 = ((x33%(x34+x35))%x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = INT32_MIN;
	uint32_t x42 = UINT32_MAX;
	volatile uint8_t x43 = 0U;
	int8_t x44 = 6;
	static volatile uint32_t t7 = 114610U;

	t7 = ((x41%(x42+x43))%x44);

	if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MAX;
	static int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MIN;
	static volatile int32_t t8 = 306825879;

	t8 = ((x45%(x46+x47))%x48);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MAX;
	volatile int32_t x50 = -459822;
	int8_t x51 = INT8_MIN;
	int64_t x52 = -1897LL;
	volatile int64_t t9 = 11565535975LL;

	t9 = ((x49%(x50+x51))%x52);

	if (t9 != 737LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = -729;
	volatile int16_t x58 = INT16_MAX;
	uint64_t x59 = 2LLU;
	static uint64_t x60 = UINT64_MAX;
	uint64_t t10 = 1340663647439LLU;

	t10 = ((x57%(x58+x59))%x60);

	if (t10 != 32056LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x62 = -55504763506118302LL;
	uint32_t x64 = 54U;
	int64_t t11 = 149125662LL;

	t11 = ((x61%(x62+x63))%x64);

	if (t11 != 33LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 10U;
	uint8_t x66 = 9U;
	uint8_t x67 = UINT8_MAX;
	int32_t x68 = -325095829;

	t12 = ((x65%(x66+x67))%x68);

	if (t12 != 10) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x70 = 128052743LL;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t x72 = -1;

	t13 = ((x69%(x70+x71))%x72);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x74 = INT32_MIN;
	int64_t x76 = INT64_MIN;
	int64_t t14 = 836675436168LL;

	t14 = ((x73%(x74+x75))%x76);

	if (t14 != 95LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = 282568690;
	int64_t x78 = INT64_MIN;
	int16_t x79 = 2;
	volatile int16_t x80 = 3;
	volatile int64_t t15 = -2LL;

	t15 = ((x77%(x78+x79))%x80);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x82 = INT8_MAX;
	static volatile int64_t x84 = INT64_MIN;
	volatile int64_t t16 = 22LL;

	t16 = ((x81%(x82+x83))%x84);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x86 = UINT8_MAX;
	int16_t x87 = INT16_MIN;
	static uint32_t x88 = UINT32_MAX;
	uint32_t t17 = 0U;

	t17 = ((x85%(x86+x87))%x88);

	if (t17 != 64U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	volatile int32_t t18 = 1356799;

	t18 = ((x89%(x90+x91))%x92);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = -1;
	static int64_t x94 = -1LL;
	uint16_t x96 = 12563U;
	static int64_t t19 = 11253536179LL;

	t19 = ((x93%(x94+x95))%x96);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	volatile int64_t t20 = 34125535132678LL;

	t20 = ((x97%(x98+x99))%x100);

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = 487082026336LL;
	volatile int16_t x103 = INT16_MIN;
	volatile uint32_t x104 = 27658016U;

	t21 = ((x101%(x102+x103))%x104);

	if (t21 != 736LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = INT64_MAX;
	uint16_t x107 = 28U;
	int8_t x108 = -1;
	static int64_t t22 = -4384389955077146LL;

	t22 = ((x105%(x106+x107))%x108);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x111 = INT16_MAX;
	volatile int64_t x112 = -74961320085742LL;

	t23 = ((x109%(x110+x111))%x112);

	if (t23 != -8LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x113 = 1075U;
	static uint16_t x114 = 2279U;
	uint16_t x115 = 10917U;
	uint64_t x116 = UINT64_MAX;
	uint64_t t24 = 1LLU;

	t24 = ((x113%(x114+x115))%x116);

	if (t24 != 1075LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 1035U;
	int32_t x118 = -11891693;
	int16_t x119 = 69;
	uint8_t x120 = 51U;
	volatile uint32_t t25 = 28U;

	t25 = ((x117%(x118+x119))%x120);

	if (t25 != 15U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x121 = 1435701585589045797LLU;
	int64_t x122 = -1762258314725209LL;
	int32_t x123 = INT32_MAX;
	uint64_t x124 = 31686324931LLU;
	uint64_t t26 = 6025179080725214106LLU;

	t26 = ((x121%(x122+x123))%x124);

	if (t26 != 1562898170LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = -1076;
	static int8_t x130 = INT8_MIN;
	static volatile int16_t x131 = 1;
	static int16_t x132 = INT16_MIN;
	volatile int32_t t27 = 16992545;

	t27 = ((x129%(x130+x131))%x132);

	if (t27 != -60) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = 2552U;
	int8_t x134 = -1;
	int32_t x135 = INT32_MAX;
	static uint16_t x136 = 60U;
	volatile int32_t t28 = -125888;

	t28 = ((x133%(x134+x135))%x136);

	if (t28 != 32) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x138 = 9U;
	uint32_t t29 = 1U;

	t29 = ((x137%(x138+x139))%x140);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x143 = INT16_MIN;

	t30 = ((x141%(x142+x143))%x144);

	if (t30 != 6LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = -1;
	static volatile int64_t x155 = INT64_MAX;
	int64_t x156 = INT64_MIN;
	int64_t t31 = -3898LL;

	t31 = ((x153%(x154+x155))%x156);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x166 = 46339522987LLU;
	int64_t x167 = INT64_MIN;
	volatile uint64_t t32 = 32777859518LLU;

	t32 = ((x165%(x166+x167))%x168);

	if (t32 != 46131LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x169 = 2419607U;
	int32_t x170 = INT32_MIN;
	static uint64_t x171 = UINT64_MAX;
	int32_t x172 = 4956095;
	volatile uint64_t t33 = 3101698LLU;

	t33 = ((x169%(x170+x171))%x172);

	if (t33 != 2419607LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x173 = 2057;
	int16_t x174 = 7611;
	static int32_t x175 = INT32_MIN;
	uint64_t x176 = 1LLU;
	volatile uint64_t t34 = 331LLU;

	t34 = ((x173%(x174+x175))%x176);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x177 = -1LL;
	int8_t x178 = INT8_MIN;
	int16_t x179 = INT16_MAX;
	static uint32_t x180 = 34597U;
	static volatile int64_t t35 = -25LL;

	t35 = ((x177%(x178+x179))%x180);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = 1;
	int64_t x182 = -20892289364LL;
	static int32_t x183 = 30316460;
	int32_t x184 = INT32_MIN;
	int64_t t36 = -887356007LL;

	t36 = ((x181%(x182+x183))%x184);

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x185 = 0U;
	int32_t x188 = INT32_MIN;

	t37 = ((x185%(x186+x187))%x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x189 = 56U;
	static volatile int8_t x190 = INT8_MIN;
	uint32_t x191 = UINT32_MAX;
	int32_t x192 = -36;
	uint32_t t38 = 79825978U;

	t38 = ((x189%(x190+x191))%x192);

	if (t38 != 56U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = INT16_MIN;
	uint32_t x195 = UINT32_MAX;
	volatile int8_t x196 = -1;

	t39 = ((x193%(x194+x195))%x196);

	if (t39 != 14U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x205 = 28U;
	static uint16_t x206 = 24520U;
	int32_t x208 = INT32_MIN;
	int32_t t40 = 13115;

	t40 = ((x205%(x206+x207))%x208);

	if (t40 != 28) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x209 = 37587346780LLU;
	int64_t x210 = -28566008LL;
	int32_t x211 = -928864;
	static int64_t x212 = 1LL;
	volatile uint64_t t41 = 82877012LLU;

	t41 = ((x209%(x210+x211))%x212);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = UINT8_MAX;
	static int8_t x214 = INT8_MAX;
	static volatile int16_t x215 = INT16_MIN;
	volatile uint16_t x216 = 54U;
	volatile int32_t t42 = -17255;

	t42 = ((x213%(x214+x215))%x216);

	if (t42 != 39) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x218 = 64675123524080280LLU;
	int32_t x219 = INT32_MIN;
	uint64_t x220 = 139175225249544LLU;

	t43 = ((x217%(x218+x219))%x220);

	if (t43 != 138608404058007LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x221 = 5U;
	static int32_t x222 = -1;
	uint64_t x223 = 44793LLU;
	static int32_t x224 = INT32_MAX;
	volatile uint64_t t44 = 1165744704LLU;

	t44 = ((x221%(x222+x223))%x224);

	if (t44 != 5LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x225 = INT32_MAX;
	uint8_t x226 = UINT8_MAX;
	int64_t x227 = INT64_MIN;
	volatile uint64_t x228 = UINT64_MAX;
	static uint64_t t45 = 5773LLU;

	t45 = ((x225%(x226+x227))%x228);

	if (t45 != 2147483647LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = -1;
	static uint16_t x230 = UINT16_MAX;
	int32_t x231 = -1;
	int32_t x232 = 2;
	static volatile int32_t t46 = -763380;

	t46 = ((x229%(x230+x231))%x232);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x233 = UINT32_MAX;
	volatile int8_t x234 = INT8_MIN;

	t47 = ((x233%(x234+x235))%x236);

	if (t47 != 897592671U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x237 = -1;
	volatile int16_t x238 = INT16_MIN;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t48 = 2;

	t48 = ((x237%(x238+x239))%x240);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = INT64_MIN;
	uint32_t x243 = 1U;
	int64_t x244 = -1LL;

	t49 = ((x241%(x242+x243))%x244);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	int8_t x248 = INT8_MIN;
	int64_t t50 = 1543104969388506443LL;

	t50 = ((x245%(x246+x247))%x248);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x249 = -1;
	uint8_t x250 = 0U;
	int16_t x251 = INT16_MAX;
	static uint16_t x252 = 2772U;
	volatile int32_t t51 = -596749317;

	t51 = ((x249%(x250+x251))%x252);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = 62880U;
	int32_t x256 = INT32_MIN;
	uint32_t t52 = 38340U;

	t52 = ((x253%(x254+x255))%x256);

	if (t52 != 62880U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MAX;
	int16_t x258 = INT16_MAX;
	uint16_t x260 = 1521U;
	volatile int64_t t53 = -752289363533LL;

	t53 = ((x257%(x258+x259))%x260);

	if (t53 != 127LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x262 = INT32_MAX;
	volatile int32_t x263 = -4220934;
	int64_t x264 = INT64_MIN;
	volatile int64_t t54 = -3699372LL;

	t54 = ((x261%(x262+x263))%x264);

	if (t54 != 1012LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x265 = 15758LLU;
	int16_t x266 = INT16_MIN;
	uint64_t x267 = UINT64_MAX;
	static int16_t x268 = INT16_MIN;
	uint64_t t55 = 2LLU;

	t55 = ((x265%(x266+x267))%x268);

	if (t55 != 15758LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x269 = INT16_MAX;
	int8_t x271 = 1;
	volatile uint32_t x272 = 41978U;
	int64_t t56 = -1958991294359016LL;

	t56 = ((x269%(x270+x271))%x272);

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x273 = UINT8_MAX;
	int32_t x274 = INT32_MIN;
	volatile int64_t x275 = -1LL;
	int64_t t57 = 29LL;

	t57 = ((x273%(x274+x275))%x276);

	if (t57 != 255LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x281 = 2970237902878224674LLU;
	static int16_t x282 = -44;
	int32_t x283 = -1;
	volatile int32_t x284 = INT32_MIN;
	uint64_t t58 = 352LLU;

	t58 = ((x281%(x282+x283))%x284);

	if (t58 != 2970237902878224674LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x285 = 102744LL;
	volatile int64_t x286 = 1878420789LL;
	int8_t x287 = INT8_MIN;
	int64_t x288 = INT64_MAX;
	static volatile int64_t t59 = 31007481277200091LL;

	t59 = ((x285%(x286+x287))%x288);

	if (t59 != 102744LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x289 = 33;
	int32_t x290 = INT32_MAX;
	uint32_t x291 = 5775U;
	uint64_t x292 = 107977LLU;
	static volatile uint64_t t60 = 5325792713189LLU;

	t60 = ((x289%(x290+x291))%x292);

	if (t60 != 33LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x293 = INT64_MIN;
	static int16_t x294 = INT16_MIN;
	static uint32_t x295 = UINT32_MAX;
	int64_t t61 = -78LL;

	t61 = ((x293%(x294+x295))%x296);

	if (t61 != -2684370944LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x297 = INT64_MAX;
	uint8_t x299 = 62U;
	int32_t x300 = INT32_MIN;

	t62 = ((x297%(x298+x299))%x300);

	if (t62 != 611542366LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x301 = INT8_MIN;
	int32_t x302 = INT32_MIN;
	int8_t x304 = INT8_MAX;
	int64_t t63 = 27LL;

	t63 = ((x301%(x302+x303))%x304);

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x305 = 130740821U;
	int16_t x306 = -1;
	int16_t x308 = INT16_MAX;
	static uint32_t t64 = 0U;

	t64 = ((x305%(x306+x307))%x308);

	if (t64 != 3665U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = INT32_MIN;
	uint8_t x310 = UINT8_MAX;
	uint64_t x311 = 28334LLU;

	t65 = ((x309%(x310+x311))%x312);

	if (t65 != 256LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = -1;
	static int32_t x314 = INT32_MIN;
	int32_t x315 = 17;

	t66 = ((x313%(x314+x315))%x316);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = INT32_MAX;
	uint32_t x318 = 2128983312U;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	int64_t t67 = 6666178729LL;

	t67 = ((x317%(x318+x319))%x320);

	if (t67 != 2147483647LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x321 = 1U;
	volatile int64_t x322 = INT64_MIN;
	static int8_t x323 = 1;
	int64_t x324 = -113575949195084LL;

	t68 = ((x321%(x322+x323))%x324);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = INT8_MIN;
	static uint16_t x326 = 56U;

	t69 = ((x325%(x326+x327))%x328);

	if (t69 != 23U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x329 = 7828233102LLU;
	static uint32_t x330 = 0U;
	int16_t x331 = -1;
	int16_t x332 = INT16_MAX;
	uint64_t t70 = 5977245682828311LLU;

	t70 = ((x329%(x330+x331))%x332);

	if (t70 != 197LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = INT16_MAX;
	volatile uint64_t x334 = UINT64_MAX;
	volatile uint64_t x335 = 3749LLU;
	int16_t x336 = 49;
	volatile uint64_t t71 = 2608236619212LLU;

	t71 = ((x333%(x334+x335))%x336);

	if (t71 != 39LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	uint8_t x338 = 74U;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = INT64_MIN;
	int64_t t72 = -1LL;

	t72 = ((x337%(x338+x339))%x340);

	if (t72 != -74LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x346 = INT32_MAX;
	int32_t x347 = INT32_MIN;
	int64_t x348 = 1781LL;
	volatile uint64_t t73 = 20774LLU;

	t73 = ((x345%(x346+x347))%x348);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x349 = INT32_MAX;
	uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MIN;
	volatile uint64_t t74 = 209079764431423723LLU;

	t74 = ((x349%(x350+x351))%x352);

	if (t74 != 2147483647LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	int64_t x356 = -13578856LL;
	volatile int64_t t75 = -27333542LL;

	t75 = ((x353%(x354+x355))%x356);

	if (t75 != 2024400LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x357 = 1;
	int16_t x358 = -1;
	static uint32_t x359 = 115381U;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t76 = 481U;

	t76 = ((x357%(x358+x359))%x360);

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = INT16_MIN;
	int8_t x363 = -2;
	static volatile int64_t t77 = 3LL;

	t77 = ((x361%(x362+x363))%x364);

	if (t77 != -9LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x366 = INT32_MAX;
	int32_t x367 = -183804;
	int64_t x368 = -1LL;
	volatile int64_t t78 = -205363306LL;

	t78 = ((x365%(x366+x367))%x368);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x373 = -48;
	uint8_t x374 = 3U;
	uint64_t x375 = 1695878205LLU;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t79 = 14633469504605LLU;

	t79 = ((x373%(x374+x375))%x376);

	if (t79 != 651277264LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x377 = -11;
	uint32_t x378 = 32U;
	uint32_t x379 = 15U;
	uint32_t t80 = 94U;

	t80 = ((x377%(x378+x379))%x380);

	if (t80 != 31U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x382 = -125;
	int16_t x383 = 7100;
	volatile uint16_t x384 = 116U;
	volatile int32_t t81 = 944;

	t81 = ((x381%(x382+x383))%x384);

	if (t81 != 8) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x385 = INT8_MIN;
	int8_t x386 = -1;
	static int64_t x388 = INT64_MIN;
	int64_t t82 = 259792754669816227LL;

	t82 = ((x385%(x386+x387))%x388);

	if (t82 != -128LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x389 = 72691U;
	int8_t x390 = -1;
	static int64_t x391 = -763510LL;
	volatile uint32_t x392 = UINT32_MAX;
	volatile int64_t t83 = -912355110LL;

	t83 = ((x389%(x390+x391))%x392);

	if (t83 != 72691LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x393 = 814LLU;
	volatile int64_t x394 = INT64_MIN;
	uint8_t x395 = 42U;
	static int16_t x396 = INT16_MAX;
	volatile uint64_t t84 = 760780060LLU;

	t84 = ((x393%(x394+x395))%x396);

	if (t84 != 814LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x397 = INT8_MAX;
	uint16_t x398 = UINT16_MAX;
	int64_t x399 = 2996642838LL;
	uint16_t x400 = 1U;

	t85 = ((x397%(x398+x399))%x400);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x405 = 58U;
	int64_t x406 = -17220357587712LL;
	uint64_t x407 = 1466727917464850LLU;
	volatile uint64_t t86 = 1524024685485109020LLU;

	t86 = ((x405%(x406+x407))%x408);

	if (t86 != 58LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int8_t x410 = 1;
	volatile uint8_t x411 = 2U;
	uint16_t x412 = 430U;

	t87 = ((x409%(x410+x411))%x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x414 = 2098600;
	static uint64_t x415 = UINT64_MAX;
	int32_t x416 = -1;
	volatile uint64_t t88 = 1411973LLU;

	t88 = ((x413%(x414+x415))%x416);

	if (t88 != 1216LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x417 = -1LL;
	static volatile uint8_t x418 = UINT8_MAX;
	uint8_t x419 = 26U;
	volatile int8_t x420 = -1;
	int64_t t89 = 79032378LL;

	t89 = ((x417%(x418+x419))%x420);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x421 = INT16_MIN;
	volatile int64_t x422 = -1LL;
	int16_t x424 = INT16_MIN;
	int64_t t90 = 28678809LL;

	t90 = ((x421%(x422+x423))%x424);

	if (t90 != -485LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x425 = -1;
	int8_t x426 = -46;
	volatile uint64_t x427 = 10818420035614LLU;
	int64_t x428 = -1LL;
	volatile uint64_t t91 = 84218230164LLU;

	t91 = ((x425%(x426+x427))%x428);

	if (t91 != 7247401736751LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x429 = INT8_MIN;
	int32_t x430 = -1;
	volatile int8_t x431 = INT8_MIN;
	volatile int8_t x432 = -1;
	int32_t t92 = -119241516;

	t92 = ((x429%(x430+x431))%x432);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x437 = 34484159U;
	uint16_t x438 = 986U;
	volatile uint16_t x439 = 200U;
	int32_t x440 = -1;
	volatile uint32_t t93 = 2U;

	t93 = ((x437%(x438+x439))%x440);

	if (t93 != 23U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x441 = INT16_MIN;
	int8_t x442 = INT8_MAX;
	uint16_t x444 = 5U;
	int32_t t94 = -2;

	t94 = ((x441%(x442+x443))%x444);

	if (t94 != -2) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x445 = -1;
	static int64_t x446 = INT64_MAX;
	volatile uint64_t t95 = 30LLU;

	t95 = ((x445%(x446+x447))%x448);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x450 = -1LL;
	int32_t x451 = INT32_MIN;
	int64_t t96 = -515032LL;

	t96 = ((x449%(x450+x451))%x452);

	if (t96 != -118294304LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x453 = 66LLU;
	int8_t x454 = -1;
	int32_t x455 = INT32_MAX;
	int16_t x456 = INT16_MIN;

	t97 = ((x453%(x454+x455))%x456);

	if (t97 != 66LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x457 = INT16_MIN;
	uint32_t x458 = 0U;
	volatile uint16_t x459 = UINT16_MAX;
	volatile int64_t t98 = -6579210567982LL;

	t98 = ((x457%(x458+x459))%x460);

	if (t98 != 32768LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x461 = 11U;
	int32_t x462 = INT32_MAX;
	int64_t x463 = -4333573797LL;
	static volatile int32_t x464 = INT32_MAX;
	int64_t t99 = -15541905LL;

	t99 = ((x461%(x462+x463))%x464);

	if (t99 != 11LL) { NG(); } else { ; }
	
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

