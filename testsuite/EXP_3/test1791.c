#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 6U;
volatile int16_t x2 = -1;
int32_t t0 = -658313;
uint32_t x11 = UINT32_MAX;
uint32_t x15 = 19161U;
int32_t x16 = INT32_MIN;
volatile int32_t t3 = -40988;
int16_t x17 = INT16_MIN;
uint8_t x30 = UINT8_MAX;
int64_t x45 = INT64_MAX;
volatile int32_t t11 = 878150;
int16_t x49 = INT16_MIN;
uint32_t x50 = UINT32_MAX;
int16_t x54 = -1;
static int8_t x57 = INT8_MIN;
int16_t x58 = INT16_MIN;
static volatile uint8_t x60 = 0U;
int32_t t14 = 7;
static uint16_t x62 = 102U;
static int64_t x66 = -1LL;
uint8_t x68 = UINT8_MAX;
int32_t x70 = INT32_MAX;
volatile int32_t t21 = -55789849;
volatile int64_t x97 = INT64_MAX;
int16_t x105 = INT16_MAX;
int8_t x108 = -1;
volatile int32_t t26 = -258858401;
volatile int32_t t27 = 1;
volatile int32_t x113 = -1;
int16_t x116 = -1;
int64_t x124 = -33299684080LL;
int64_t x125 = INT64_MIN;
volatile int16_t x126 = INT16_MIN;
uint16_t x127 = 549U;
int8_t x128 = -1;
int32_t t31 = 1;
int32_t x131 = INT32_MIN;
int32_t t33 = -116848;
int64_t x142 = INT64_MIN;
uint64_t x150 = 104LLU;
volatile int8_t x167 = INT8_MIN;
int32_t t41 = 140904048;
int16_t x169 = 629;
int32_t x173 = INT32_MIN;
int32_t t43 = 426561550;
int32_t t44 = -21;
int16_t x184 = INT16_MAX;
volatile uint64_t x187 = 197372455432579983LLU;
uint16_t x188 = 6U;
static int32_t t48 = 14910956;
volatile int32_t t49 = -58;
static int64_t x207 = INT64_MAX;
static uint64_t x208 = UINT64_MAX;
volatile int32_t t51 = 238;
uint16_t x210 = 0U;
uint64_t x211 = 51380LLU;
int8_t x212 = 8;
int32_t x219 = -4;
int64_t x220 = INT64_MAX;
int32_t x222 = -1;
volatile int16_t x223 = INT16_MIN;
int64_t x226 = INT64_MIN;
uint32_t x229 = 181942927U;
volatile int8_t x231 = INT8_MIN;
int64_t x233 = INT64_MAX;
int8_t x243 = INT8_MIN;
int32_t x244 = INT32_MAX;
int64_t x250 = 193646993655853724LL;
static int32_t t63 = 542698476;
static volatile int64_t x258 = INT64_MIN;
int32_t t64 = -4122;
uint8_t x262 = 53U;
uint16_t x267 = 1U;
int16_t x272 = -27;
static volatile int8_t x274 = INT8_MAX;
int8_t x275 = -1;
uint8_t x289 = UINT8_MAX;
int32_t x292 = INT32_MAX;
int16_t x293 = -1;
uint64_t x296 = UINT64_MAX;
int64_t x309 = INT64_MIN;
int16_t x311 = INT16_MIN;
volatile int8_t x312 = -1;
int8_t x321 = -1;
volatile int32_t x331 = INT32_MAX;
static int32_t t82 = 8;
static uint32_t x337 = 37865U;
int16_t x343 = INT16_MIN;
int32_t t88 = 2;
static int64_t x364 = 1425LL;
static volatile int32_t t91 = 15;
volatile int64_t x374 = -1LL;
int32_t x380 = -224988;
volatile int32_t t94 = -1;
static volatile uint64_t x382 = UINT64_MAX;
volatile int64_t x387 = INT64_MIN;
static uint8_t x389 = 9U;
int8_t x398 = 1;
int64_t x399 = INT64_MIN;
volatile int16_t x400 = 1775;


void f0(void) {
	volatile uint16_t x3 = 34U;
	int8_t x4 = INT8_MIN;

	t0 = ((x1==x2)<=(x3&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int64_t x6 = INT64_MAX;
	volatile uint8_t x7 = UINT8_MAX;
	volatile int16_t x8 = -1;
	int32_t t1 = -4;

	t1 = ((x5==x6)<=(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = -1;
	uint64_t x12 = 22548579257371LLU;
	int32_t t2 = 2;

	t2 = ((x9==x10)<=(x11&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = -1;

	t3 = ((x13==x14)<=(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = 267870509U;
	static volatile uint64_t x19 = 31987292783610792LLU;
	int8_t x20 = 54;
	static volatile int32_t t4 = 50;

	t4 = ((x17==x18)<=(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = UINT32_MAX;
	volatile int32_t t5 = -23535;

	t5 = ((x21==x22)<=(x23&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = -43975LL;
	volatile int32_t x26 = INT32_MIN;
	volatile int8_t x27 = 0;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = 1945849;

	t6 = ((x25==x26)<=(x27&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int8_t x31 = -2;
	uint8_t x32 = UINT8_MAX;
	volatile int32_t t7 = 13433;

	t7 = ((x29==x30)<=(x31&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	uint8_t x34 = UINT8_MAX;
	static int8_t x35 = 43;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -126;

	t8 = ((x33==x34)<=(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -359;
	static int32_t x38 = -1;
	int16_t x39 = INT16_MIN;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -1;

	t9 = ((x37==x38)<=(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	uint64_t x42 = 7203887LLU;
	uint8_t x43 = 57U;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = -100975;

	t10 = ((x41==x42)<=(x43&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x46 = 28U;
	int8_t x47 = -1;
	int32_t x48 = 251;

	t11 = ((x45==x46)<=(x47&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x51 = 75950;
	volatile int8_t x52 = INT8_MIN;
	static int32_t t12 = -2;

	t12 = ((x49==x50)<=(x51&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	volatile uint8_t x55 = 3U;
	static uint32_t x56 = 1U;
	int32_t t13 = 942;

	t13 = ((x53==x54)<=(x55&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = -1;

	t14 = ((x57==x58)<=(x59&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = 661611480077LLU;
	volatile int16_t x63 = INT16_MAX;
	volatile int32_t x64 = INT32_MIN;
	volatile int32_t t15 = 333643874;

	t15 = ((x61==x62)<=(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MAX;
	int64_t x67 = INT64_MAX;
	static volatile int32_t t16 = 3874793;

	t16 = ((x65==x66)<=(x67&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MAX;
	int64_t x71 = INT64_MIN;
	volatile int8_t x72 = INT8_MAX;
	volatile int32_t t17 = 126339609;

	t17 = ((x69==x70)<=(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 11532279U;
	uint8_t x74 = 0U;
	volatile uint64_t x75 = UINT64_MAX;
	uint8_t x76 = 3U;
	volatile int32_t t18 = -39625;

	t18 = ((x73==x74)<=(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 22583238LL;
	uint16_t x78 = 1U;
	uint8_t x79 = 3U;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = 15;

	t19 = ((x77==x78)<=(x79&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 53U;
	volatile int8_t x82 = -1;
	int32_t x83 = INT32_MIN;
	static int16_t x84 = 175;
	volatile int32_t t20 = 103382918;

	t20 = ((x81==x82)<=(x83&x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -47248;
	volatile uint16_t x86 = 5U;
	int64_t x87 = 0LL;
	static int32_t x88 = -1;

	t21 = ((x85==x86)<=(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = -12424;
	uint8_t x90 = UINT8_MAX;
	uint64_t x91 = 150376392LLU;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t22 = 5216418;

	t22 = ((x89==x90)<=(x91&x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	int8_t x94 = INT8_MIN;
	int16_t x95 = INT16_MAX;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t23 = 851954310;

	t23 = ((x93==x94)<=(x95&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x98 = 191818220LLU;
	static uint64_t x99 = 5118708454728357LLU;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = -63030;

	t24 = ((x97==x98)<=(x99&x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = 0;
	uint8_t x103 = 11U;
	int32_t x104 = INT32_MAX;
	volatile int32_t t25 = 29123;

	t25 = ((x101==x102)<=(x103&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x106 = INT32_MIN;
	static volatile uint64_t x107 = 4120727393395LLU;

	t26 = ((x105==x106)<=(x107&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 198U;
	int64_t x110 = 10627462654LL;
	int64_t x111 = -1LL;
	int16_t x112 = -1;

	t27 = ((x109==x110)<=(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = INT64_MIN;
	uint32_t x115 = 16U;
	static volatile int32_t t28 = -65882468;

	t28 = ((x113==x114)<=(x115&x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	static uint64_t x118 = 149397809LLU;
	static uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 1;

	t29 = ((x117==x118)<=(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = INT64_MIN;
	int8_t x123 = INT8_MAX;
	int32_t t30 = 44614;

	t30 = ((x121==x122)<=(x123&x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {


	t31 = ((x125==x126)<=(x127&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int16_t x130 = 711;
	volatile int8_t x132 = -1;
	static int32_t t32 = -1;

	t32 = ((x129==x130)<=(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int8_t x134 = -1;
	volatile int64_t x135 = -1LL;
	static int8_t x136 = INT8_MIN;

	t33 = ((x133==x134)<=(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 109838U;
	uint32_t x138 = UINT32_MAX;
	static volatile int8_t x139 = INT8_MAX;
	uint32_t x140 = 4022U;
	volatile int32_t t34 = -3379;

	t34 = ((x137==x138)<=(x139&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	volatile uint32_t x143 = 136897U;
	uint8_t x144 = 0U;
	int32_t t35 = -69990298;

	t35 = ((x141==x142)<=(x143&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MAX;
	static int8_t x146 = -1;
	int64_t x147 = INT64_MAX;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = -6439245;

	t36 = ((x145==x146)<=(x147&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -2737;
	int32_t x151 = -1022;
	static volatile uint8_t x152 = 5U;
	int32_t t37 = -8;

	t37 = ((x149==x150)<=(x151&x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MIN;
	int16_t x154 = INT16_MAX;
	uint32_t x155 = UINT32_MAX;
	static int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 684;

	t38 = ((x153==x154)<=(x155&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 3U;
	int32_t x158 = 27630924;
	uint16_t x159 = UINT16_MAX;
	static int16_t x160 = INT16_MAX;
	int32_t t39 = -58;

	t39 = ((x157==x158)<=(x159&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = -838;
	volatile int16_t x162 = 14;
	uint8_t x163 = 1U;
	int32_t x164 = -1;
	int32_t t40 = 16136606;

	t40 = ((x161==x162)<=(x163&x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = -1;
	volatile int8_t x166 = INT8_MAX;
	static volatile int64_t x168 = -39838562777799LL;

	t41 = ((x165==x166)<=(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x170 = UINT16_MAX;
	uint32_t x171 = UINT32_MAX;
	int32_t x172 = -15;
	static volatile int32_t t42 = 58502051;

	t42 = ((x169==x170)<=(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x174 = INT16_MIN;
	int8_t x175 = 0;
	int32_t x176 = INT32_MIN;

	t43 = ((x173==x174)<=(x175&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	int8_t x178 = INT8_MIN;
	uint32_t x179 = 51U;
	static int8_t x180 = -1;

	t44 = ((x177==x178)<=(x179&x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 741U;
	static int64_t x182 = INT64_MAX;
	int8_t x183 = INT8_MIN;
	int32_t t45 = 7434241;

	t45 = ((x181==x182)<=(x183&x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	volatile uint32_t x186 = UINT32_MAX;
	int32_t t46 = 6583840;

	t46 = ((x185==x186)<=(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = -186108965;
	uint8_t x190 = 93U;
	int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t47 = -228;

	t47 = ((x189==x190)<=(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -4148;
	uint8_t x194 = 7U;
	int64_t x195 = INT64_MIN;
	static int32_t x196 = INT32_MIN;

	t48 = ((x193==x194)<=(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 97;
	int64_t x198 = INT64_MIN;
	uint8_t x199 = UINT8_MAX;
	int8_t x200 = INT8_MAX;

	t49 = ((x197==x198)<=(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -1LL;
	int64_t x202 = 7245LL;
	int32_t x203 = 47;
	static int8_t x204 = INT8_MIN;
	int32_t t50 = 555074;

	t50 = ((x201==x202)<=(x203&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = 76659;

	t51 = ((x205==x206)<=(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = -1;
	static int32_t t52 = 5;

	t52 = ((x209==x210)<=(x211&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	int8_t x214 = -3;
	int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MAX;
	volatile int32_t t53 = -1162947;

	t53 = ((x213==x214)<=(x215&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x217 = 135U;
	uint32_t x218 = 1537374U;
	int32_t t54 = -41;

	t54 = ((x217==x218)<=(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	uint16_t x224 = 0U;
	volatile int32_t t55 = 6339194;

	t55 = ((x221==x222)<=(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x225 = INT16_MAX;
	uint64_t x227 = 326913LLU;
	volatile int8_t x228 = 1;
	volatile int32_t t56 = 105379461;

	t56 = ((x225==x226)<=(x227&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x230 = INT8_MIN;
	volatile int16_t x232 = INT16_MIN;
	static volatile int32_t t57 = 0;

	t57 = ((x229==x230)<=(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x234 = 11LLU;
	volatile uint8_t x235 = 1U;
	volatile int8_t x236 = INT8_MIN;
	volatile int32_t t58 = -15;

	t58 = ((x233==x234)<=(x235&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1LL;
	volatile int8_t x238 = INT8_MIN;
	volatile int64_t x239 = INT64_MIN;
	int8_t x240 = INT8_MAX;
	volatile int32_t t59 = -47135;

	t59 = ((x237==x238)<=(x239&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -14472966543813LL;
	volatile int8_t x242 = -2;
	int32_t t60 = 6550;

	t60 = ((x241==x242)<=(x243&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	static int16_t x247 = INT16_MAX;
	int32_t x248 = -1;
	int32_t t61 = -12790;

	t61 = ((x245==x246)<=(x247&x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x249 = -1LL;
	uint8_t x251 = 65U;
	uint16_t x252 = UINT16_MAX;
	int32_t t62 = 156453;

	t62 = ((x249==x250)<=(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 54U;
	int32_t x254 = INT32_MAX;
	volatile int8_t x255 = INT8_MIN;
	int8_t x256 = -32;

	t63 = ((x253==x254)<=(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = -262592;
	uint8_t x259 = 9U;
	int32_t x260 = 1;

	t64 = ((x257==x258)<=(x259&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x261 = 20;
	uint16_t x263 = 647U;
	volatile int8_t x264 = -27;
	volatile int32_t t65 = -3;

	t65 = ((x261==x262)<=(x263&x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int32_t x266 = INT32_MAX;
	static int32_t x268 = -172606747;
	volatile int32_t t66 = 0;

	t66 = ((x265==x266)<=(x267&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x269 = 3U;
	volatile uint16_t x270 = 304U;
	uint64_t x271 = UINT64_MAX;
	int32_t t67 = 87991830;

	t67 = ((x269==x270)<=(x271&x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -3851;
	int8_t x276 = -1;
	static volatile int32_t t68 = -3;

	t68 = ((x273==x274)<=(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	volatile uint8_t x278 = 8U;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -1;
	static int32_t t69 = -61727361;

	t69 = ((x277==x278)<=(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x281 = -276179277LL;
	int64_t x282 = -1LL;
	uint8_t x283 = UINT8_MAX;
	volatile int8_t x284 = INT8_MAX;
	int32_t t70 = -6031301;

	t70 = ((x281==x282)<=(x283&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -1;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MIN;
	int32_t x288 = INT32_MIN;
	int32_t t71 = -14;

	t71 = ((x285==x286)<=(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x290 = INT8_MIN;
	int16_t x291 = INT16_MAX;
	volatile int32_t t72 = -3;

	t72 = ((x289==x290)<=(x291&x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x294 = -1;
	volatile uint8_t x295 = 0U;
	int32_t t73 = 7;

	t73 = ((x293==x294)<=(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = 16998008917LLU;
	static volatile uint64_t x298 = UINT64_MAX;
	static uint32_t x299 = 154U;
	static volatile int32_t x300 = 10866;
	volatile int32_t t74 = 396734849;

	t74 = ((x297==x298)<=(x299&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 8;
	int64_t x302 = INT64_MIN;
	uint16_t x303 = 1771U;
	volatile uint8_t x304 = 10U;
	static int32_t t75 = -60138604;

	t75 = ((x301==x302)<=(x303&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 47LLU;
	int32_t x306 = INT32_MIN;
	int16_t x307 = 85;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = 19714577;

	t76 = ((x305==x306)<=(x307&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x310 = UINT16_MAX;
	static int32_t t77 = 86140606;

	t77 = ((x309==x310)<=(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 0;
	int64_t x314 = 1087942557338738761LL;
	int64_t x315 = INT64_MIN;
	int16_t x316 = 19;
	volatile int32_t t78 = -198;

	t78 = ((x313==x314)<=(x315&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -1;
	int8_t x318 = -30;
	uint64_t x319 = 9LLU;
	volatile int16_t x320 = INT16_MAX;
	volatile int32_t t79 = 320;

	t79 = ((x317==x318)<=(x319&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x322 = INT16_MIN;
	int8_t x323 = -7;
	int64_t x324 = 6563521187504LL;
	int32_t t80 = 1054899917;

	t80 = ((x321==x322)<=(x323&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MIN;
	volatile int64_t x327 = -95154167046191LL;
	int64_t x328 = -1LL;
	int32_t t81 = -233;

	t81 = ((x325==x326)<=(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int64_t x330 = INT64_MIN;
	int16_t x332 = -137;

	t82 = ((x329==x330)<=(x331&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = -79;
	int64_t x334 = INT64_MAX;
	volatile int64_t x335 = -54LL;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = 1461;

	t83 = ((x333==x334)<=(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x338 = INT16_MIN;
	int32_t x339 = -1612;
	uint8_t x340 = 3U;
	int32_t t84 = 1;

	t84 = ((x337==x338)<=(x339&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 4U;
	int32_t x342 = 42989719;
	volatile uint32_t x344 = 1U;
	volatile int32_t t85 = 41077;

	t85 = ((x341==x342)<=(x343&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	volatile int16_t x346 = INT16_MAX;
	static uint64_t x347 = UINT64_MAX;
	volatile int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -369;

	t86 = ((x345==x346)<=(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MAX;
	uint16_t x350 = 7771U;
	static int64_t x351 = INT64_MIN;
	static volatile uint8_t x352 = 9U;
	int32_t t87 = -1;

	t87 = ((x349==x350)<=(x351&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 8U;
	static volatile int16_t x354 = INT16_MIN;
	int8_t x355 = INT8_MAX;
	uint32_t x356 = 2843203U;

	t88 = ((x353==x354)<=(x355&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x357 = 112U;
	int32_t x358 = INT32_MAX;
	int8_t x359 = -1;
	volatile int32_t x360 = 37351;
	volatile int32_t t89 = 22;

	t89 = ((x357==x358)<=(x359&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = INT8_MIN;
	volatile int8_t x362 = INT8_MIN;
	static int64_t x363 = -60LL;
	static int32_t t90 = 32013;

	t90 = ((x361==x362)<=(x363&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = 59996LL;
	volatile int32_t x366 = 127;
	int64_t x367 = 35295990361332337LL;
	int8_t x368 = INT8_MIN;

	t91 = ((x365==x366)<=(x367&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	static uint64_t x370 = UINT64_MAX;
	int16_t x371 = -1;
	static int16_t x372 = -108;
	int32_t t92 = -77297;

	t92 = ((x369==x370)<=(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int64_t x375 = INT64_MIN;
	int8_t x376 = -1;
	int32_t t93 = 0;

	t93 = ((x373==x374)<=(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	static int32_t x379 = INT32_MIN;

	t94 = ((x377==x378)<=(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 3U;
	int32_t x383 = INT32_MIN;
	static volatile int64_t x384 = INT64_MAX;
	static int32_t t95 = 93080;

	t95 = ((x381==x382)<=(x383&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MAX;
	int8_t x388 = INT8_MIN;
	volatile int32_t t96 = -455741;

	t96 = ((x385==x386)<=(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x390 = INT16_MIN;
	static int16_t x391 = -1;
	volatile uint8_t x392 = 26U;
	volatile int32_t t97 = -15;

	t97 = ((x389==x390)<=(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x393 = 13U;
	volatile uint8_t x394 = 21U;
	static uint64_t x395 = 350950374928LLU;
	volatile int64_t x396 = INT64_MIN;
	volatile int32_t t98 = -3026;

	t98 = ((x393==x394)<=(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int32_t t99 = -2;

	t99 = ((x397==x398)<=(x399&x400));

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

