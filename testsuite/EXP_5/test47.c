#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = UINT32_MAX;
int8_t x7 = -1;
volatile int32_t t1 = -1;
int16_t x23 = -1;
volatile uint8_t x34 = 1U;
static volatile uint16_t x36 = 21U;
static volatile int64_t x42 = INT64_MIN;
static volatile int64_t x43 = 2588246061352446793LL;
int8_t x51 = INT8_MIN;
int16_t x59 = 0;
int64_t x65 = -91536711298662LL;
static int64_t x72 = -1LL;
volatile int32_t t14 = -4;
uint64_t x76 = 27723538752405LLU;
volatile int32_t t15 = -9608;
uint64_t x78 = 6077LLU;
static int32_t t16 = -38584270;
volatile int32_t t17 = -14113;
uint64_t x92 = UINT64_MAX;
uint8_t x105 = 88U;
static uint16_t x106 = UINT16_MAX;
uint64_t x108 = 94294LLU;
volatile int32_t t23 = 11700666;
uint16_t x118 = 1U;
int64_t x119 = INT64_MIN;
volatile int8_t x125 = 6;
int8_t x129 = -62;
volatile int32_t t30 = 5201;
static int32_t x145 = -1;
int32_t t31 = 18;
static int32_t x153 = INT32_MAX;
int32_t x158 = -1;
uint16_t x159 = 8U;
int32_t x160 = -1091362;
int32_t x161 = 1046;
int8_t x162 = INT8_MAX;
static int16_t x171 = -1;
volatile int32_t t37 = 6493478;
int64_t x182 = -1LL;
static volatile uint64_t x183 = UINT64_MAX;
int64_t x184 = INT64_MIN;
volatile int32_t t39 = -610113;
int16_t x186 = -224;
int16_t x196 = -1;
volatile int32_t x207 = -1;
volatile int32_t t44 = -9;
int64_t x214 = -14LL;
int8_t x216 = INT8_MIN;
volatile int32_t t45 = 2815672;
int16_t x219 = -175;
int32_t x222 = -1;
uint8_t x223 = 0U;
volatile int64_t x229 = INT64_MAX;
uint32_t x243 = 2186U;
static volatile int8_t x244 = 12;
int32_t x245 = INT32_MAX;
volatile int16_t x249 = INT16_MIN;
int16_t x252 = -42;
int32_t x255 = -1;
uint64_t x256 = 101611578128LLU;
int32_t x257 = 201695;
volatile int8_t x258 = -1;
static int32_t t55 = -6689770;
int64_t x261 = -1LL;
int32_t x262 = 696564809;
volatile int32_t t57 = 148;
volatile uint64_t x274 = 62070LLU;
volatile uint64_t x275 = UINT64_MAX;
static int32_t t59 = -7;
int16_t x279 = -1;
int32_t t61 = -6402833;
int32_t t62 = 58891932;
int16_t x302 = 0;
uint8_t x305 = UINT8_MAX;
int16_t x308 = INT16_MIN;
static int64_t x309 = 10LL;
static int8_t x314 = -17;
volatile int8_t x316 = INT8_MIN;
uint32_t x319 = 28199U;
int32_t t69 = 150276508;
uint32_t x338 = UINT32_MAX;
int16_t x339 = -1;
volatile uint64_t x341 = UINT64_MAX;
static volatile int32_t t73 = 2664;
int32_t t74 = 12152918;
uint8_t x353 = 0U;
static int8_t x368 = INT8_MIN;
static volatile uint8_t x387 = 14U;
int32_t t83 = -511471005;
static int32_t x397 = INT32_MAX;
static int32_t x398 = -1;
int8_t x403 = INT8_MIN;
int64_t x404 = 64258809LL;
int8_t x407 = INT8_MAX;
int32_t t87 = 161724170;
static volatile int32_t x412 = INT32_MIN;
volatile uint8_t x416 = 16U;
int64_t x420 = -742977LL;
static int8_t x422 = INT8_MAX;
int8_t x427 = -1;
int8_t x438 = INT8_MAX;
uint16_t x442 = 0U;
volatile int32_t x444 = INT32_MIN;
int32_t t97 = 1746;


void f0(void) {
	uint64_t x5 = 55534145278LLU;
	static uint16_t x8 = 148U;
	volatile int32_t t0 = 1748;

	t0 = (x5==((x6+x7)/x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	static int32_t x14 = -959449944;
	volatile int16_t x15 = INT16_MIN;
	volatile int32_t x16 = INT32_MIN;

	t1 = (x13==((x14+x15)/x16));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = 10388LLU;
	int64_t x19 = -1LL;
	int8_t x20 = -1;
	static int32_t t2 = -131523128;

	t2 = (x17==((x18+x19)/x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -1LL;
	int16_t x22 = -1;
	static uint64_t x24 = 12LLU;
	volatile int32_t t3 = -31481771;

	t3 = (x21==((x22+x23)/x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 107LLU;
	int16_t x26 = 1;
	volatile int8_t x27 = -1;
	int16_t x28 = 201;
	volatile int32_t t4 = 57343369;

	t4 = (x25==((x26+x27)/x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	int64_t x35 = 7014LL;
	int32_t t5 = 1131236;

	t5 = (x33==((x34+x35)/x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = 21U;
	int8_t x38 = 27;
	int32_t x39 = -14;
	static uint16_t x40 = UINT16_MAX;
	int32_t t6 = -2499095;

	t6 = (x37==((x38+x39)/x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x41 = 17276612751LLU;
	uint64_t x44 = 73828248955450LLU;
	int32_t t7 = -1;

	t7 = (x41==((x42+x43)/x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x45 = -1LL;
	uint8_t x46 = UINT8_MAX;
	static uint8_t x47 = 40U;
	volatile uint64_t x48 = 850707535886321LLU;
	static int32_t t8 = -58378394;

	t8 = (x45==((x46+x47)/x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = 3077;
	uint64_t x52 = 230657217202832447LLU;
	volatile int32_t t9 = -54224;

	t9 = (x49==((x50+x51)/x52));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x53 = UINT64_MAX;
	static int32_t x54 = -7228427;
	volatile uint32_t x55 = 982U;
	int16_t x56 = INT16_MIN;
	static int32_t t10 = 161024286;

	t10 = (x53==((x54+x55)/x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x57 = INT64_MIN;
	uint16_t x58 = 60U;
	int8_t x60 = -7;
	int32_t t11 = -26;

	t11 = (x57==((x58+x59)/x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1LL;
	static int8_t x62 = INT8_MIN;
	uint32_t x63 = 1U;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t12 = 3215;

	t12 = (x61==((x62+x63)/x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x66 = UINT32_MAX;
	uint16_t x67 = UINT16_MAX;
	uint8_t x68 = UINT8_MAX;
	int32_t t13 = -9547;

	t13 = (x65==((x66+x67)/x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	int16_t x71 = 3;

	t14 = (x69==((x70+x71)/x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = -1;
	volatile uint8_t x74 = 0U;
	volatile uint16_t x75 = 101U;

	t15 = (x73==((x74+x75)/x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x77 = UINT32_MAX;
	uint32_t x79 = UINT32_MAX;
	static int32_t x80 = INT32_MIN;

	t16 = (x77==((x78+x79)/x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x81 = INT32_MAX;
	uint64_t x82 = UINT64_MAX;
	uint64_t x83 = 58110LLU;
	volatile uint16_t x84 = UINT16_MAX;

	t17 = (x81==((x82+x83)/x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x89 = -1;
	int64_t x90 = INT64_MAX;
	volatile int16_t x91 = INT16_MIN;
	int32_t t18 = 424;

	t18 = (x89==((x90+x91)/x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x93 = INT8_MAX;
	int16_t x94 = -1;
	static volatile uint32_t x95 = UINT32_MAX;
	volatile int8_t x96 = INT8_MIN;
	int32_t t19 = -904;

	t19 = (x93==((x94+x95)/x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = -1LL;
	int32_t x98 = -84582398;
	static uint32_t x99 = 284598667U;
	int8_t x100 = 10;
	volatile int32_t t20 = 18096271;

	t20 = (x97==((x98+x99)/x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 14U;
	int16_t x102 = 309;
	int32_t x103 = -1;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t21 = -6153;

	t21 = (x101==((x102+x103)/x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x107 = UINT16_MAX;
	volatile int32_t t22 = 4803255;

	t22 = (x105==((x106+x107)/x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	static uint64_t x111 = UINT64_MAX;
	int8_t x112 = -23;

	t23 = (x109==((x110+x111)/x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = -1;
	int8_t x114 = INT8_MIN;
	uint64_t x115 = 1LLU;
	static int8_t x116 = INT8_MIN;
	int32_t t24 = -19;

	t24 = (x113==((x114+x115)/x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 473;
	volatile int32_t x120 = 4703862;
	int32_t t25 = 18592;

	t25 = (x117==((x118+x119)/x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x126 = -673106173LL;
	int16_t x127 = INT16_MIN;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t26 = 3747340;

	t26 = (x125==((x126+x127)/x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x130 = -1LL;
	static uint16_t x131 = UINT16_MAX;
	volatile int64_t x132 = INT64_MAX;
	volatile int32_t t27 = 223383;

	t27 = (x129==((x130+x131)/x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = 711;
	uint32_t x134 = 11341U;
	int32_t x135 = INT32_MIN;
	volatile int64_t x136 = INT64_MAX;
	int32_t t28 = -11925;

	t28 = (x133==((x134+x135)/x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x137 = UINT16_MAX;
	static volatile int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MIN;
	int64_t x140 = 375892790645LL;
	int32_t t29 = -1550;

	t29 = (x137==((x138+x139)/x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -15;
	uint64_t x142 = 181880364082564432LLU;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = UINT8_MAX;

	t30 = (x141==((x142+x143)/x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x146 = INT32_MIN;
	int8_t x147 = INT8_MAX;
	int16_t x148 = -1;

	t31 = (x145==((x146+x147)/x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x154 = INT32_MIN;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = 14;
	static volatile int32_t t32 = -115905;

	t32 = (x153==((x154+x155)/x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MAX;
	static volatile int32_t t33 = 7;

	t33 = (x157==((x158+x159)/x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x163 = UINT32_MAX;
	volatile int8_t x164 = INT8_MIN;
	static int32_t t34 = -31;

	t34 = (x161==((x162+x163)/x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MIN;
	volatile uint32_t x166 = UINT32_MAX;
	volatile int32_t x167 = INT32_MIN;
	static int64_t x168 = INT64_MIN;
	int32_t t35 = 5844;

	t35 = (x165==((x166+x167)/x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x169 = INT64_MAX;
	volatile uint8_t x170 = UINT8_MAX;
	int32_t x172 = 11529323;
	int32_t t36 = 44295431;

	t36 = (x169==((x170+x171)/x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x173 = 5U;
	int64_t x174 = INT64_MIN;
	int64_t x175 = INT64_MAX;
	static volatile int16_t x176 = 3;

	t37 = (x173==((x174+x175)/x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = 210U;
	uint32_t x178 = 808515U;
	static uint8_t x179 = 105U;
	uint16_t x180 = UINT16_MAX;
	int32_t t38 = -1804;

	t38 = (x177==((x178+x179)/x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x181 = -1232;

	t39 = (x181==((x182+x183)/x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x185 = INT64_MIN;
	volatile uint64_t x187 = 134119409367794LLU;
	uint64_t x188 = 88844843861LLU;
	static volatile int32_t t40 = -228633;

	t40 = (x185==((x186+x187)/x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x193 = -1;
	uint32_t x194 = 44U;
	int64_t x195 = -1LL;
	int32_t t41 = -12;

	t41 = (x193==((x194+x195)/x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = -243;
	uint64_t x198 = 8713895791394LLU;
	uint64_t x199 = 52119827LLU;
	int16_t x200 = 1;
	int32_t t42 = -42244;

	t42 = (x197==((x198+x199)/x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x205 = UINT16_MAX;
	uint8_t x206 = 59U;
	static uint64_t x208 = 27443105821LLU;
	volatile int32_t t43 = -44;

	t43 = (x205==((x206+x207)/x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x209 = INT32_MAX;
	uint32_t x210 = 3486263U;
	volatile uint16_t x211 = UINT16_MAX;
	static int64_t x212 = -2462763985426522LL;

	t44 = (x209==((x210+x211)/x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 141466U;
	int32_t x215 = 10151791;

	t45 = (x213==((x214+x215)/x216));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x217 = 497434567120084LLU;
	volatile int8_t x218 = 1;
	int8_t x220 = INT8_MIN;
	int32_t t46 = -27150;

	t46 = (x217==((x218+x219)/x220));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -1;
	int16_t x224 = 5;
	int32_t t47 = 66170545;

	t47 = (x221==((x222+x223)/x224));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x225 = INT16_MIN;
	uint32_t x226 = 58057190U;
	int8_t x227 = -1;
	int16_t x228 = INT16_MIN;
	int32_t t48 = 7505;

	t48 = (x225==((x226+x227)/x228));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x230 = -5;
	static int64_t x231 = -1LL;
	volatile uint8_t x232 = 6U;
	int32_t t49 = 250781;

	t49 = (x229==((x230+x231)/x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x233 = 0;
	volatile uint8_t x234 = 2U;
	int16_t x235 = -8;
	int8_t x236 = INT8_MIN;
	volatile int32_t t50 = -42215;

	t50 = (x233==((x234+x235)/x236));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x241 = 248U;
	int64_t x242 = INT64_MIN;
	volatile int32_t t51 = -1;

	t51 = (x241==((x242+x243)/x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 3778409U;
	static volatile uint16_t x248 = 13216U;
	int32_t t52 = -7637;

	t52 = (x245==((x246+x247)/x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x250 = INT64_MAX;
	volatile uint64_t x251 = UINT64_MAX;
	volatile int32_t t53 = 1;

	t53 = (x249==((x250+x251)/x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x253 = INT16_MIN;
	static int16_t x254 = INT16_MIN;
	volatile int32_t t54 = -87107;

	t54 = (x253==((x254+x255)/x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x259 = 9227;
	int64_t x260 = INT64_MAX;

	t55 = (x257==((x258+x259)/x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = INT8_MAX;
	volatile int32_t t56 = 1067;

	t56 = (x261==((x262+x263)/x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = 8U;
	int8_t x266 = -1;
	static int32_t x267 = -1;
	uint16_t x268 = UINT16_MAX;

	t57 = (x265==((x266+x267)/x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x269 = -1LL;
	volatile uint8_t x270 = 1U;
	volatile uint32_t x271 = 388465U;
	uint64_t x272 = UINT64_MAX;
	int32_t t58 = 17240131;

	t58 = (x269==((x270+x271)/x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = INT8_MIN;
	static uint16_t x276 = 524U;

	t59 = (x273==((x274+x275)/x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = 19;
	int8_t x280 = INT8_MAX;
	static volatile int32_t t60 = -4486;

	t60 = (x277==((x278+x279)/x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x285 = -1LL;
	uint64_t x286 = 460923599LLU;
	int8_t x287 = INT8_MIN;
	int8_t x288 = INT8_MIN;

	t61 = (x285==((x286+x287)/x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x289 = UINT64_MAX;
	static int32_t x290 = INT32_MIN;
	uint32_t x291 = 3U;
	int16_t x292 = -15144;

	t62 = (x289==((x290+x291)/x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x293 = 132490582581498LLU;
	volatile uint16_t x294 = UINT16_MAX;
	volatile int8_t x295 = -1;
	int64_t x296 = -1LL;
	int32_t t63 = 1473994;

	t63 = (x293==((x294+x295)/x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x301 = 0U;
	volatile int32_t x303 = -165;
	int64_t x304 = INT64_MIN;
	int32_t t64 = 20391762;

	t64 = (x301==((x302+x303)/x304));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x306 = 1U;
	uint8_t x307 = UINT8_MAX;
	int32_t t65 = 115891;

	t65 = (x305==((x306+x307)/x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x310 = 1U;
	volatile int32_t x311 = 10265480;
	int16_t x312 = -354;
	volatile int32_t t66 = 15;

	t66 = (x309==((x310+x311)/x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x313 = 19U;
	volatile uint32_t x315 = UINT32_MAX;
	static volatile int32_t t67 = 130468675;

	t67 = (x313==((x314+x315)/x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x317 = INT32_MAX;
	int16_t x318 = INT16_MAX;
	static uint16_t x320 = UINT16_MAX;
	static int32_t t68 = -1425298;

	t68 = (x317==((x318+x319)/x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x321 = INT64_MIN;
	static int8_t x322 = 48;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = 19190U;

	t69 = (x321==((x322+x323)/x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x325 = INT64_MIN;
	int64_t x326 = 1522218016748LL;
	uint16_t x327 = 6U;
	volatile uint64_t x328 = UINT64_MAX;
	static volatile int32_t t70 = 7582727;

	t70 = (x325==((x326+x327)/x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x329 = 1956U;
	volatile uint16_t x330 = 82U;
	volatile int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MAX;
	volatile int32_t t71 = -250285;

	t71 = (x329==((x330+x331)/x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x337 = 6U;
	int16_t x340 = -1;
	int32_t t72 = 0;

	t72 = (x337==((x338+x339)/x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x342 = 60753665771285143LLU;
	int8_t x343 = 5;
	uint64_t x344 = 53927119986917LLU;

	t73 = (x341==((x342+x343)/x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x345 = INT8_MAX;
	int64_t x346 = 47LL;
	static int16_t x347 = -1;
	static int8_t x348 = INT8_MAX;

	t74 = (x345==((x346+x347)/x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x349 = 4259U;
	uint32_t x350 = 29789U;
	int8_t x351 = INT8_MIN;
	int8_t x352 = -1;
	volatile int32_t t75 = 4;

	t75 = (x349==((x350+x351)/x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x354 = INT64_MIN;
	int16_t x355 = 1;
	static int32_t x356 = -1;
	volatile int32_t t76 = 63;

	t76 = (x353==((x354+x355)/x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = INT8_MAX;
	uint64_t x358 = UINT64_MAX;
	int32_t x359 = INT32_MIN;
	int64_t x360 = INT64_MIN;
	static volatile int32_t t77 = -14871130;

	t77 = (x357==((x358+x359)/x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x365 = 1LL;
	uint8_t x366 = 21U;
	volatile uint16_t x367 = 79U;
	static int32_t t78 = 429551;

	t78 = (x365==((x366+x367)/x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x373 = -25;
	int8_t x374 = INT8_MAX;
	volatile uint32_t x375 = 773782U;
	uint32_t x376 = 724060U;
	volatile int32_t t79 = -201191;

	t79 = (x373==((x374+x375)/x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x377 = UINT8_MAX;
	uint16_t x378 = 6977U;
	static int32_t x379 = INT32_MIN;
	int32_t x380 = 3776;
	volatile int32_t t80 = 161;

	t80 = (x377==((x378+x379)/x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x381 = INT8_MIN;
	volatile uint32_t x382 = 1U;
	int64_t x383 = INT64_MIN;
	int64_t x384 = INT64_MAX;
	int32_t t81 = 1553130;

	t81 = (x381==((x382+x383)/x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x385 = 29U;
	int32_t x386 = INT32_MIN;
	int8_t x388 = INT8_MIN;
	volatile int32_t t82 = -48208;

	t82 = (x385==((x386+x387)/x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x389 = INT16_MAX;
	volatile uint32_t x390 = 925U;
	static uint32_t x391 = 112052U;
	int8_t x392 = INT8_MIN;

	t83 = (x389==((x390+x391)/x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x393 = 1;
	int16_t x394 = INT16_MAX;
	int32_t x395 = -2058044;
	volatile uint32_t x396 = 1325164773U;
	volatile int32_t t84 = -307753;

	t84 = (x393==((x394+x395)/x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x399 = 103175945U;
	volatile uint16_t x400 = 251U;
	volatile int32_t t85 = 1;

	t85 = (x397==((x398+x399)/x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x401 = INT32_MIN;
	volatile int16_t x402 = -291;
	static volatile int32_t t86 = -1174634;

	t86 = (x401==((x402+x403)/x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x405 = 1;
	int8_t x406 = 3;
	static volatile int8_t x408 = -3;

	t87 = (x405==((x406+x407)/x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x409 = UINT8_MAX;
	int16_t x410 = 1562;
	int16_t x411 = INT16_MIN;
	static int32_t t88 = -12825702;

	t88 = (x409==((x410+x411)/x412));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x413 = 4;
	int16_t x414 = INT16_MIN;
	int16_t x415 = INT16_MIN;
	int32_t t89 = -1;

	t89 = (x413==((x414+x415)/x416));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x417 = -1;
	static volatile int16_t x418 = -1;
	volatile uint8_t x419 = UINT8_MAX;
	volatile int32_t t90 = 7557821;

	t90 = (x417==((x418+x419)/x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = -6;
	int8_t x423 = -1;
	static int64_t x424 = -37945473LL;
	volatile int32_t t91 = 878;

	t91 = (x421==((x422+x423)/x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = -1;
	uint8_t x428 = 100U;
	static int32_t t92 = 4884031;

	t92 = (x425==((x426+x427)/x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x429 = -1;
	int32_t x430 = -26;
	int64_t x431 = INT64_MAX;
	static int8_t x432 = INT8_MAX;
	int32_t t93 = -64374663;

	t93 = (x429==((x430+x431)/x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = -1;
	static uint32_t x434 = 1719U;
	int16_t x435 = INT16_MAX;
	volatile int32_t x436 = INT32_MIN;
	int32_t t94 = 770266268;

	t94 = (x433==((x434+x435)/x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x437 = 55U;
	int16_t x439 = -1;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t95 = -95;

	t95 = (x437==((x438+x439)/x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x441 = INT16_MIN;
	uint64_t x443 = UINT64_MAX;
	volatile int32_t t96 = -43211;

	t96 = (x441==((x442+x443)/x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x445 = UINT32_MAX;
	int16_t x446 = -343;
	int64_t x447 = 880LL;
	static int64_t x448 = INT64_MIN;

	t97 = (x445==((x446+x447)/x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x449 = -1;
	volatile int64_t x450 = INT64_MIN;
	uint8_t x451 = UINT8_MAX;
	uint64_t x452 = 804863763786LLU;
	int32_t t98 = 506046;

	t98 = (x449==((x450+x451)/x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x457 = INT16_MIN;
	static int32_t x458 = INT32_MIN;
	uint8_t x459 = UINT8_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t99 = -101796;

	t99 = (x457==((x458+x459)/x460));

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

