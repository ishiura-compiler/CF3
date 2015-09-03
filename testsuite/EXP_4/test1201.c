#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 44572998U;
volatile int32_t t0 = -29941055;
uint8_t x5 = 1U;
int16_t x6 = INT16_MAX;
uint64_t x11 = 3LLU;
int64_t x12 = INT64_MAX;
int8_t x14 = INT8_MAX;
static int8_t x21 = INT8_MAX;
int32_t t7 = -240;
volatile int32_t x34 = -1;
int32_t x40 = INT32_MAX;
volatile int32_t x41 = INT32_MAX;
static int16_t x44 = INT16_MIN;
uint64_t x47 = 2227554441180893487LLU;
volatile uint32_t x49 = UINT32_MAX;
volatile int8_t x58 = INT8_MIN;
int32_t x60 = -2;
volatile int64_t t14 = -55179096LL;
int64_t x62 = INT64_MIN;
volatile int64_t t15 = -561LL;
volatile int64_t x69 = 1983959681LL;
int64_t t17 = 36LL;
int64_t x88 = 529762190091879105LL;
static volatile int32_t t21 = -508083668;
static int64_t x92 = -238729LL;
int8_t x95 = 56;
int32_t x107 = INT32_MIN;
volatile int64_t x118 = INT64_MIN;
uint8_t x119 = UINT8_MAX;
int16_t x122 = INT16_MIN;
static uint64_t x123 = UINT64_MAX;
int32_t x130 = INT32_MIN;
uint16_t x137 = UINT16_MAX;
int8_t x139 = 62;
volatile int64_t x143 = 1842845680832435LL;
int64_t x148 = INT64_MIN;
int32_t t35 = 807;
uint8_t x149 = UINT8_MAX;
static int32_t x152 = INT32_MIN;
static int32_t t36 = -260835;
int64_t x154 = INT64_MIN;
int16_t x156 = INT16_MAX;
int64_t t37 = 255LL;
static int8_t x158 = INT8_MIN;
int32_t x159 = -1;
volatile int32_t t39 = 2;
uint64_t x166 = 6LLU;
uint64_t x171 = 205067048291561LLU;
int8_t x173 = INT8_MAX;
int64_t t42 = -16368534198049285LL;
uint8_t x191 = 97U;
uint32_t x203 = 114949U;
static uint32_t t50 = 4991U;
int32_t x210 = INT32_MAX;
int16_t x211 = INT16_MIN;
volatile uint64_t t51 = 7722483132LLU;
uint32_t x215 = UINT32_MAX;
static uint8_t x220 = 64U;
int8_t x229 = INT8_MIN;
int64_t x233 = 6172049LL;
static uint16_t x236 = UINT16_MAX;
int64_t x237 = -654104539169LL;
int64_t x244 = INT64_MIN;
volatile int64_t t60 = -45818029138835746LL;
static int8_t x253 = INT8_MIN;
volatile uint8_t x262 = 13U;
int16_t x264 = -12167;
int8_t x268 = INT8_MIN;
int32_t x277 = 1;
volatile int32_t t67 = -45;
uint32_t x288 = UINT32_MAX;
uint16_t x290 = UINT16_MAX;
volatile int32_t t70 = 626980;
uint32_t x296 = 7U;
uint16_t x304 = UINT16_MAX;
int16_t x309 = INT16_MIN;
volatile int32_t t75 = 3194;
static uint16_t x314 = 3U;
int64_t x315 = 426543777104811LL;
uint64_t x321 = 39641LLU;
uint64_t x325 = 962302995086319579LLU;
uint64_t x326 = 275LLU;
uint16_t x338 = 1U;
static uint64_t x342 = 4LLU;
int64_t x345 = INT64_MAX;
int32_t x346 = INT32_MIN;
int64_t t88 = -682LL;
int64_t x366 = INT64_MIN;
int16_t x367 = 1;
int64_t t89 = 16687427LL;
static volatile uint32_t x369 = 39142U;
int8_t x377 = INT8_MIN;
int8_t x387 = INT8_MIN;
int32_t t94 = 315320;
static volatile int32_t t95 = -121681172;
int16_t x394 = INT16_MIN;
int8_t x395 = INT8_MAX;
volatile int32_t t96 = -3146535;
uint64_t x400 = UINT64_MAX;
static volatile int32_t t97 = 61290142;
int32_t x408 = INT32_MAX;


void f0(void) {
	uint8_t x1 = 4U;
	int32_t x2 = INT32_MIN;
	static int64_t x3 = INT64_MIN;

	t0 = (x1%(x2-(x3==x4)));

	if (t0 != 4) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = 165343463LL;
	volatile int16_t x8 = -1;
	int32_t t1 = -5185418;

	t1 = (x5%(x6-(x7==x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 13U;
	uint8_t x10 = UINT8_MAX;
	volatile int32_t t2 = 7092;

	t2 = (x9%(x10-(x11==x12)));

	if (t2 != 13) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int16_t x15 = INT16_MIN;
	int16_t x16 = INT16_MAX;
	uint32_t t3 = 108U;

	t3 = (x13%(x14-(x15==x16)));

	if (t3 != 15U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	volatile int32_t x18 = INT32_MIN;
	int16_t x19 = 1;
	int16_t x20 = INT16_MIN;
	static int32_t t4 = 11;

	t4 = (x17%(x18-(x19==x20)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = 10042832864803LL;
	int16_t x23 = 660;
	uint64_t x24 = UINT64_MAX;
	int64_t t5 = 30830344LL;

	t5 = (x21%(x22-(x23==x24)));

	if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 4330424657LL;
	static int8_t x26 = INT8_MIN;
	static uint32_t x27 = 3722004U;
	uint64_t x28 = 1682156560075LLU;
	int64_t t6 = -181866254LL;

	t6 = (x25%(x26-(x27==x28)));

	if (t6 != 81LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint8_t x30 = 46U;
	volatile uint16_t x31 = 7U;
	static uint64_t x32 = 7716759190426LLU;

	t7 = (x29%(x30-(x31==x32)));

	if (t7 != -36) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 20559347;
	int16_t x35 = INT16_MIN;
	volatile int8_t x36 = INT8_MAX;
	int32_t t8 = -1261982;

	t8 = (x33%(x34-(x35==x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1420010814744247LL;
	uint16_t x38 = 412U;
	static int64_t x39 = INT64_MIN;
	int64_t t9 = -70670916743017LL;

	t9 = (x37%(x38-(x39==x40)));

	if (t9 != -335LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = 255;
	volatile int8_t x43 = -1;
	static int32_t t10 = -1241321;

	t10 = (x41%(x42-(x43==x44)));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint8_t x46 = UINT8_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t11 = 1992U;

	t11 = (x45%(x46-(x47==x48)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x50 = 633U;
	int8_t x51 = 6;
	int32_t x52 = INT32_MAX;
	uint32_t t12 = 3572456U;

	t12 = (x49%(x50-(x51==x52)));

	if (t12 != 261U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int32_t x54 = INT32_MAX;
	static volatile int64_t x55 = 265LL;
	int8_t x56 = 11;
	uint32_t t13 = 265953U;

	t13 = (x53%(x54-(x55==x56)));

	if (t13 != 1U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = INT64_MAX;
	static int64_t x59 = -1LL;

	t14 = (x57%(x58-(x59==x60)));

	if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	volatile int16_t x63 = 10;
	uint64_t x64 = 315708LLU;

	t15 = (x61%(x62-(x63==x64)));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	static int16_t x66 = 4;
	int64_t x67 = INT64_MAX;
	int32_t x68 = INT32_MAX;
	int32_t t16 = 62136;

	t16 = (x65%(x66-(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MAX;
	int16_t x71 = -1;
	int16_t x72 = INT16_MIN;

	t17 = (x69%(x70-(x71==x72)));

	if (t17 != 98LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	volatile int32_t x74 = INT32_MIN;
	volatile int8_t x75 = -1;
	uint64_t x76 = 4012945008LLU;
	volatile int32_t t18 = 644;

	t18 = (x73%(x74-(x75==x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint8_t x78 = 3U;
	uint64_t x79 = UINT64_MAX;
	volatile int32_t x80 = -2365;
	int32_t t19 = -91808;

	t19 = (x77%(x78-(x79==x80)));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	volatile int64_t x82 = 74556497LL;
	int8_t x83 = INT8_MIN;
	volatile uint8_t x84 = UINT8_MAX;
	volatile uint64_t t20 = 23501LLU;

	t20 = (x81%(x82-(x83==x84)));

	if (t20 != 16389744LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	uint16_t x86 = 5U;
	static int32_t x87 = -1;

	t21 = (x85%(x86-(x87==x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x90 = INT64_MAX;
	int64_t x91 = -1LL;
	int64_t t22 = 5376336430LL;

	t22 = (x89%(x90-(x91==x92)));

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = UINT32_MAX;
	uint64_t x94 = 366802276016530LLU;
	uint16_t x96 = UINT16_MAX;
	uint64_t t23 = 452251878812748753LLU;

	t23 = (x93%(x94-(x95==x96)));

	if (t23 != 4294967295LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MAX;
	volatile uint32_t x98 = 1424806U;
	int64_t x99 = INT64_MIN;
	volatile uint8_t x100 = 2U;
	volatile uint32_t t24 = 30U;

	t24 = (x97%(x98-(x99==x100)));

	if (t24 != 301005U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = INT16_MAX;
	int64_t x106 = INT64_MAX;
	int8_t x108 = INT8_MAX;
	int64_t t25 = 16058347720LL;

	t25 = (x105%(x106-(x107==x108)));

	if (t25 != 32767LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x109 = 14257LLU;
	int16_t x110 = INT16_MAX;
	volatile int16_t x111 = -1;
	int64_t x112 = -1LL;
	static volatile uint64_t t26 = 118510223904766LLU;

	t26 = (x109%(x110-(x111==x112)));

	if (t26 != 14257LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x113 = -1;
	int32_t x114 = INT32_MAX;
	int64_t x115 = INT64_MIN;
	uint64_t x116 = UINT64_MAX;
	volatile int32_t t27 = 59509809;

	t27 = (x113%(x114-(x115==x116)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 3U;
	volatile uint16_t x120 = 27548U;
	volatile int64_t t28 = -683170758822LL;

	t28 = (x117%(x118-(x119==x120)));

	if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 196567158LLU;
	uint32_t x124 = 72U;
	static uint64_t t29 = 331892LLU;

	t29 = (x121%(x122-(x123==x124)));

	if (t29 != 196567158LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = INT8_MAX;
	int64_t x126 = -1LL;
	volatile uint8_t x127 = 8U;
	int8_t x128 = INT8_MAX;
	int64_t t30 = 972289151730LL;

	t30 = (x125%(x126-(x127==x128)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MAX;
	int32_t t31 = -90167;

	t31 = (x129%(x130-(x131==x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x133 = INT64_MAX;
	static int32_t x134 = -7;
	int8_t x135 = -1;
	int32_t x136 = INT32_MIN;
	int64_t t32 = -78LL;

	t32 = (x133%(x134-(x135==x136)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x138 = INT32_MAX;
	int64_t x140 = INT64_MIN;
	volatile int32_t t33 = 3542;

	t33 = (x137%(x138-(x139==x140)));

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = 3;
	int8_t x142 = -1;
	volatile uint32_t x144 = UINT32_MAX;
	int32_t t34 = 126199916;

	t34 = (x141%(x142-(x143==x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MIN;

	t35 = (x145%(x146-(x147==x148)));

	if (t35 != 32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MAX;

	t36 = (x149%(x150-(x151==x152)));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x153 = -14;
	uint16_t x155 = UINT16_MAX;

	t37 = (x153%(x154-(x155==x156)));

	if (t37 != -14LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x157 = UINT16_MAX;
	static uint8_t x160 = 30U;
	int32_t t38 = 471;

	t38 = (x157%(x158-(x159==x160)));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -1;
	int32_t x162 = -5;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = INT8_MIN;

	t39 = (x161%(x162-(x163==x164)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	int8_t x168 = -1;
	volatile uint64_t t40 = 59820665829LLU;

	t40 = (x165%(x166-(x167==x168)));

	if (t40 != 2LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = -1;
	uint16_t x170 = 2U;
	volatile int32_t x172 = 1700;
	volatile int32_t t41 = -29;

	t41 = (x169%(x170-(x171==x172)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x174 = INT64_MIN;
	uint16_t x175 = 623U;
	static uint8_t x176 = 80U;

	t42 = (x173%(x174-(x175==x176)));

	if (t42 != 127LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = -1;
	uint32_t x178 = 91U;
	uint64_t x179 = 612024LLU;
	static uint8_t x180 = UINT8_MAX;
	volatile uint32_t t43 = 218U;

	t43 = (x177%(x178-(x179==x180)));

	if (t43 != 73U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = 63U;
	uint32_t x182 = 1U;
	uint16_t x183 = 0U;
	static uint8_t x184 = UINT8_MAX;
	static uint32_t t44 = 30U;

	t44 = (x181%(x182-(x183==x184)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x185 = INT16_MAX;
	uint32_t x186 = UINT32_MAX;
	static volatile int16_t x187 = 9;
	static uint8_t x188 = UINT8_MAX;
	uint32_t t45 = 3600U;

	t45 = (x185%(x186-(x187==x188)));

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x189 = -1LL;
	int16_t x190 = 197;
	int16_t x192 = INT16_MIN;
	static volatile int64_t t46 = 361779627050670LL;

	t46 = (x189%(x190-(x191==x192)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x193 = 117U;
	volatile int8_t x194 = INT8_MIN;
	static int32_t x195 = INT32_MIN;
	int16_t x196 = -1;
	int32_t t47 = 2824;

	t47 = (x193%(x194-(x195==x196)));

	if (t47 != 117) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MIN;
	volatile int64_t x198 = INT64_MAX;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 71485282001537LLU;
	int64_t t48 = -293024LL;

	t48 = (x197%(x198-(x199==x200)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x201 = INT8_MIN;
	volatile int16_t x202 = INT16_MIN;
	uint16_t x204 = 3141U;
	int32_t t49 = -158;

	t49 = (x201%(x202-(x203==x204)));

	if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = 372828472;
	static uint32_t x206 = 1955260655U;
	static int8_t x207 = 10;
	int8_t x208 = -1;

	t50 = (x205%(x206-(x207==x208)));

	if (t50 != 372828472U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 363418500942LLU;
	static volatile int64_t x212 = -278452620915161525LL;

	t51 = (x209%(x210-(x211==x212)));

	if (t51 != 493764599LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -9121288793160384LL;
	volatile int16_t x214 = -1;
	static int32_t x216 = INT32_MIN;
	volatile int64_t t52 = 114899173LL;

	t52 = (x213%(x214-(x215==x216)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x217 = 21LLU;
	static int64_t x218 = -1LL;
	volatile int16_t x219 = -1;
	static uint64_t t53 = 5745937154175804LLU;

	t53 = (x217%(x218-(x219==x220)));

	if (t53 != 21LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	int32_t x222 = -1;
	int32_t x223 = 451296;
	uint8_t x224 = 1U;
	volatile int32_t t54 = -59949;

	t54 = (x221%(x222-(x223==x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = 3662586400LL;
	uint8_t x227 = 52U;
	uint8_t x228 = 0U;
	int64_t t55 = -110LL;

	t55 = (x225%(x226-(x227==x228)));

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x230 = INT8_MIN;
	int64_t x231 = 31312LL;
	uint16_t x232 = 1U;
	volatile int32_t t56 = 1;

	t56 = (x229%(x230-(x231==x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x234 = INT8_MIN;
	uint32_t x235 = 88U;
	static int64_t t57 = -6749568514LL;

	t57 = (x233%(x234-(x235==x236)));

	if (t57 != 17LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x238 = 14U;
	uint32_t x239 = UINT32_MAX;
	uint64_t x240 = 27312233174LLU;
	int64_t t58 = -17LL;

	t58 = (x237%(x238-(x239==x240)));

	if (t58 != -11LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -74;
	int16_t x242 = INT16_MAX;
	volatile int64_t x243 = -1LL;
	volatile int32_t t59 = 4683;

	t59 = (x241%(x242-(x243==x244)));

	if (t59 != -74) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = -1LL;
	int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	volatile int16_t x248 = -1;

	t60 = (x245%(x246-(x247==x248)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x249 = -1;
	volatile uint16_t x250 = UINT16_MAX;
	int8_t x251 = INT8_MAX;
	static int64_t x252 = 2392666536552721503LL;
	int32_t t61 = -54;

	t61 = (x249%(x250-(x251==x252)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x254 = 84959U;
	static int64_t x255 = INT64_MIN;
	int64_t x256 = -1508349228572533999LL;
	static uint32_t t62 = 227348U;

	t62 = (x253%(x254-(x255==x256)));

	if (t62 != 34841U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = 15976;
	uint32_t x263 = 182U;
	int32_t t63 = -3;

	t63 = (x261%(x262-(x263==x264)));

	if (t63 != 12) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x265 = 46U;
	int64_t x266 = INT64_MIN;
	volatile int64_t x267 = INT64_MIN;
	int64_t t64 = 71939648LL;

	t64 = (x265%(x266-(x267==x268)));

	if (t64 != 46LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = -6741;
	uint16_t x270 = UINT16_MAX;
	static int64_t x271 = 12654897240LL;
	int8_t x272 = INT8_MAX;
	int32_t t65 = 1;

	t65 = (x269%(x270-(x271==x272)));

	if (t65 != -6741) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = INT8_MIN;
	static volatile int32_t x274 = INT32_MIN;
	int16_t x275 = -38;
	static int64_t x276 = -1LL;
	volatile int32_t t66 = 31845;

	t66 = (x273%(x274-(x275==x276)));

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x278 = INT32_MIN;
	int8_t x279 = 60;
	int8_t x280 = INT8_MAX;

	t67 = (x277%(x278-(x279==x280)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = UINT8_MAX;
	volatile uint16_t x282 = UINT16_MAX;
	uint64_t x283 = 2236927246LLU;
	int16_t x284 = -1;
	int32_t t68 = -49;

	t68 = (x281%(x282-(x283==x284)));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	uint32_t x287 = 6U;
	volatile int32_t t69 = -711348;

	t69 = (x285%(x286-(x287==x288)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x289 = -3;
	int32_t x291 = 3;
	int16_t x292 = INT16_MAX;

	t70 = (x289%(x290-(x291==x292)));

	if (t70 != -3) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x293 = 8983LL;
	static int64_t x294 = INT64_MAX;
	uint32_t x295 = 295483U;
	static volatile int64_t t71 = -21605692LL;

	t71 = (x293%(x294-(x295==x296)));

	if (t71 != 8983LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = 595700U;
	int8_t x300 = INT8_MIN;
	volatile int32_t t72 = 22500568;

	t72 = (x297%(x298-(x299==x300)));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x301 = 2U;
	int64_t x302 = -1724379952193751008LL;
	static int16_t x303 = INT16_MIN;
	int64_t t73 = -4001826LL;

	t73 = (x301%(x302-(x303==x304)));

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x305 = INT32_MIN;
	volatile int8_t x306 = INT8_MIN;
	int8_t x307 = -1;
	uint32_t x308 = 875215U;
	volatile int32_t t74 = -10760;

	t74 = (x305%(x306-(x307==x308)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x310 = 20U;
	uint16_t x311 = 52U;
	volatile int64_t x312 = INT64_MIN;

	t75 = (x309%(x310-(x311==x312)));

	if (t75 != -8) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x313 = -1;
	int16_t x316 = -1;
	int32_t t76 = -858109;

	t76 = (x313%(x314-(x315==x316)));

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 1175010921120750LLU;
	uint32_t x318 = UINT32_MAX;
	int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	volatile uint64_t t77 = 80648024450855805LLU;

	t77 = (x317%(x318-(x319==x320)));

	if (t77 != 2358489240LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x322 = 100LLU;
	int16_t x323 = 9;
	int32_t x324 = INT32_MIN;
	static uint64_t t78 = 1595630618LLU;

	t78 = (x321%(x322-(x323==x324)));

	if (t78 != 41LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x327 = 1036LL;
	int64_t x328 = INT64_MIN;
	uint64_t t79 = 58045LLU;

	t79 = (x325%(x326-(x327==x328)));

	if (t79 != 154LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = INT8_MAX;
	uint8_t x330 = UINT8_MAX;
	int8_t x331 = INT8_MIN;
	static volatile uint16_t x332 = UINT16_MAX;
	volatile int32_t t80 = 28;

	t80 = (x329%(x330-(x331==x332)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x333 = INT16_MIN;
	int32_t x334 = -1;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MAX;
	static volatile int32_t t81 = -1;

	t81 = (x333%(x334-(x335==x336)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = UINT8_MAX;
	int8_t x339 = -3;
	int16_t x340 = 2;
	int32_t t82 = 4927430;

	t82 = (x337%(x338-(x339==x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x341 = -1;
	static uint64_t x343 = 1117208726839817LLU;
	uint64_t x344 = UINT64_MAX;
	volatile uint64_t t83 = 3LLU;

	t83 = (x341%(x342-(x343==x344)));

	if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x347 = UINT8_MAX;
	int64_t x348 = INT64_MIN;
	volatile int64_t t84 = -517196495LL;

	t84 = (x345%(x346-(x347==x348)));

	if (t84 != 2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 15U;
	static int32_t x350 = INT32_MAX;
	static uint8_t x351 = UINT8_MAX;
	int32_t x352 = 34298027;
	uint32_t t85 = 906459U;

	t85 = (x349%(x350-(x351==x352)));

	if (t85 != 15U) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x353 = 0U;
	int8_t x354 = -29;
	static uint16_t x355 = 896U;
	int16_t x356 = INT16_MIN;
	volatile int32_t t86 = -144197;

	t86 = (x353%(x354-(x355==x356)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = -1;
	volatile int8_t x358 = 21;
	int32_t x359 = -523;
	int32_t x360 = -1;
	volatile int32_t t87 = 3492527;

	t87 = (x357%(x358-(x359==x360)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = 657LL;
	static int32_t x363 = INT32_MIN;
	static int32_t x364 = -10126260;

	t88 = (x361%(x362-(x363==x364)));

	if (t88 != -512LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = 27531LL;
	int8_t x368 = INT8_MIN;

	t89 = (x365%(x366-(x367==x368)));

	if (t89 != 27531LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x370 = 15U;
	int16_t x371 = 59;
	int16_t x372 = INT16_MAX;
	volatile uint32_t t90 = 501U;

	t90 = (x369%(x370-(x371==x372)));

	if (t90 != 7U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MAX;
	static uint32_t x374 = UINT32_MAX;
	int8_t x375 = INT8_MIN;
	int8_t x376 = -1;
	static volatile uint32_t t91 = 106U;

	t91 = (x373%(x374-(x375==x376)));

	if (t91 != 32767U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x378 = 7394LLU;
	volatile int16_t x379 = 7301;
	static volatile int8_t x380 = INT8_MIN;
	uint64_t t92 = 12801LLU;

	t92 = (x377%(x378-(x379==x380)));

	if (t92 != 7310LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x381 = INT16_MIN;
	volatile int8_t x382 = 1;
	volatile uint16_t x383 = 53U;
	uint64_t x384 = 175118451146LLU;
	static volatile int32_t t93 = -94785;

	t93 = (x381%(x382-(x383==x384)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x385 = UINT16_MAX;
	int16_t x386 = -1;
	int16_t x388 = INT16_MIN;

	t94 = (x385%(x386-(x387==x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x389 = UINT8_MAX;
	static volatile uint16_t x390 = 8U;
	uint16_t x391 = UINT16_MAX;
	uint64_t x392 = 60674509439LLU;

	t95 = (x389%(x390-(x391==x392)));

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x393 = 83U;
	uint32_t x396 = 93U;

	t96 = (x393%(x394-(x395==x396)));

	if (t96 != 83) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = 29617797;
	uint8_t x398 = 105U;
	volatile int8_t x399 = INT8_MIN;

	t97 = (x397%(x398-(x399==x400)));

	if (t97 != 27) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = 176U;
	static uint64_t x403 = 549178LLU;
	int16_t x404 = INT16_MIN;
	volatile int32_t t98 = -1;

	t98 = (x401%(x402-(x403==x404)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = INT8_MIN;
	int8_t x407 = -3;
	volatile int32_t t99 = -2;

	t99 = (x405%(x406-(x407==x408)));

	if (t99 != 127) { NG(); } else { ; }
	
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

