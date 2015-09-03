#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
volatile int64_t x4 = INT64_MIN;
static int8_t x5 = INT8_MAX;
uint64_t x12 = 57LLU;
int16_t x20 = -1;
static int16_t x21 = 9;
uint64_t x23 = 285598962102576943LLU;
volatile int32_t t5 = -29;
int32_t t6 = 3;
uint32_t x29 = 329861276U;
int32_t x32 = INT32_MAX;
int32_t t7 = -806974072;
volatile int16_t x34 = 12;
static int16_t x40 = INT16_MAX;
int32_t t9 = 1;
volatile uint64_t x47 = UINT64_MAX;
volatile int32_t t11 = 43;
int8_t x49 = -1;
int32_t t12 = -140550520;
int16_t x54 = INT16_MIN;
int8_t x56 = INT8_MAX;
volatile int32_t t13 = 8200208;
static uint32_t x63 = UINT32_MAX;
uint16_t x70 = 14U;
int32_t t18 = 8740991;
int8_t x81 = 54;
uint64_t x82 = 531803777832798745LLU;
static int64_t x85 = 26870907227LL;
volatile int32_t t21 = -2284649;
uint16_t x92 = UINT16_MAX;
int32_t t22 = -14361;
uint32_t x93 = 5U;
uint8_t x98 = 118U;
int16_t x102 = 103;
int16_t x105 = INT16_MIN;
int32_t t26 = -98873231;
static uint8_t x112 = 56U;
int16_t x113 = INT16_MAX;
static volatile int8_t x116 = INT8_MAX;
volatile int32_t t28 = 13606187;
volatile int32_t t29 = 291;
int64_t x125 = INT64_MIN;
volatile int32_t t31 = 6172095;
volatile int32_t x132 = INT32_MIN;
uint64_t x136 = 208809093036690LLU;
static volatile int32_t t33 = 663;
int64_t x142 = -1LL;
static int32_t x143 = INT32_MAX;
volatile int32_t t35 = -127922;
int32_t x160 = 6683;
int16_t x163 = 1;
static int16_t x167 = INT16_MIN;
int64_t x169 = INT64_MIN;
int8_t x175 = -2;
static uint8_t x177 = 4U;
int8_t x178 = 0;
int32_t x180 = INT32_MIN;
volatile int32_t x182 = 429095672;
int32_t t45 = -131256153;
static uint64_t x186 = 868454138LLU;
int16_t x188 = INT16_MIN;
static uint32_t x191 = UINT32_MAX;
static uint32_t x194 = UINT32_MAX;
volatile int32_t x199 = 97;
static volatile int32_t x200 = INT32_MAX;
int16_t x202 = INT16_MAX;
volatile int32_t t50 = 0;
uint8_t x209 = UINT8_MAX;
int32_t x217 = INT32_MAX;
static uint16_t x224 = 11954U;
uint8_t x227 = 0U;
static volatile uint16_t x228 = 4U;
int32_t t56 = -125213328;
int16_t x234 = INT16_MIN;
volatile int32_t t58 = 264;
static uint16_t x237 = 14U;
int8_t x239 = INT8_MIN;
volatile int16_t x241 = 1;
uint32_t x246 = 360986612U;
uint8_t x252 = UINT8_MAX;
int16_t x257 = INT16_MIN;
int32_t t64 = -435594385;
static int64_t x262 = -6707689LL;
int16_t x263 = INT16_MAX;
uint32_t x274 = 2022U;
uint16_t x275 = UINT16_MAX;
int32_t x277 = INT32_MIN;
volatile uint16_t x279 = UINT16_MAX;
uint8_t x280 = 0U;
volatile int32_t t69 = 0;
int64_t x282 = INT64_MAX;
volatile int32_t t70 = 319;
int64_t x291 = 297LL;
static volatile int8_t x292 = INT8_MIN;
int32_t t72 = 108;
int32_t x293 = 1;
static int16_t x295 = 4705;
int32_t x296 = INT32_MAX;
volatile uint32_t x300 = 46U;
int8_t x303 = -56;
int16_t x310 = -1;
uint8_t x311 = 25U;
int64_t x313 = -217020LL;
int8_t x318 = INT8_MIN;
int32_t x319 = INT32_MAX;
static volatile int32_t t79 = -56;
int32_t x336 = 48295;
int32_t x339 = INT32_MIN;
volatile int32_t t84 = -46;
uint64_t x345 = UINT64_MAX;
static int64_t x347 = INT64_MAX;
int64_t x351 = -5980133215474LL;
static uint32_t x353 = 50436754U;
int8_t x366 = INT8_MIN;
int64_t x369 = INT64_MAX;
volatile uint16_t x374 = UINT16_MAX;
static int32_t t93 = -70148;
static volatile int32_t t94 = 1420303;
int64_t x381 = -123LL;


void f0(void) {
	uint16_t x1 = 678U;
	int64_t x3 = INT64_MAX;
	static volatile int32_t t0 = 538313117;

	t0 = (x1<=((x2==x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	volatile uint64_t x7 = 55LLU;
	uint32_t x8 = 2025730U;
	int32_t t1 = 80197;

	t1 = (x5<=((x6==x7)*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	uint32_t x10 = 2U;
	volatile int32_t x11 = 12108;
	static volatile int32_t t2 = 30866359;

	t2 = (x9<=((x10==x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 11U;
	int64_t x14 = -1039LL;
	int64_t x15 = -105248870LL;
	int8_t x16 = -11;
	static int32_t t3 = 30;

	t3 = (x13<=((x14==x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 25859108497487LLU;
	static int64_t x18 = -1LL;
	volatile int32_t x19 = INT32_MIN;
	volatile int32_t t4 = 66127765;

	t4 = (x17<=((x18==x19)*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x22 = INT64_MIN;
	int32_t x24 = 45481327;

	t5 = (x21<=((x22==x23)*x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	uint16_t x28 = 0U;

	t6 = (x25<=((x26==x27)*x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x30 = 2U;
	int64_t x31 = INT64_MIN;

	t7 = (x29<=((x30==x31)*x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MAX;
	volatile int64_t x35 = 2100LL;
	volatile uint32_t x36 = 38603434U;
	int32_t t8 = 1;

	t8 = (x33<=((x34==x35)*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int8_t x38 = INT8_MIN;
	static int32_t x39 = 8090800;

	t9 = (x37<=((x38==x39)*x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	static volatile int64_t x42 = -1LL;
	static volatile int32_t x43 = 1298;
	int16_t x44 = -1;
	volatile int32_t t10 = -1;

	t10 = (x41<=((x42==x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 76U;
	uint16_t x46 = UINT16_MAX;
	int64_t x48 = -25823648LL;

	t11 = (x45<=((x46==x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -1;
	volatile int8_t x51 = 0;
	static int32_t x52 = INT32_MAX;

	t12 = (x49<=((x50==x51)*x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int16_t x55 = -837;

	t13 = (x53<=((x54==x55)*x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x57 = 327428342LLU;
	int32_t x58 = 14;
	static volatile int8_t x59 = -1;
	static int16_t x60 = 1;
	volatile int32_t t14 = 4494;

	t14 = (x57<=((x58==x59)*x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	int8_t x62 = INT8_MIN;
	uint64_t x64 = 222LLU;
	static int32_t t15 = 204;

	t15 = (x61<=((x62==x63)*x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 19401U;
	uint16_t x66 = 18U;
	int8_t x67 = INT8_MIN;
	int64_t x68 = INT64_MAX;
	volatile int32_t t16 = 0;

	t16 = (x65<=((x66==x67)*x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = 13640;

	t17 = (x69<=((x70==x71)*x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int64_t x74 = -1LL;
	int16_t x75 = -1;
	int16_t x76 = INT16_MIN;

	t18 = (x73<=((x74==x75)*x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 7U;
	uint8_t x78 = 3U;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = 0U;
	static int32_t t19 = -379065810;

	t19 = (x77<=((x78==x79)*x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x83 = 86660U;
	int32_t x84 = INT32_MIN;
	int32_t t20 = -2661;

	t20 = (x81<=((x82==x83)*x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = -1;
	uint8_t x87 = 50U;
	static int8_t x88 = INT8_MIN;

	t21 = (x85<=((x86==x87)*x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	int8_t x90 = 0;
	static int8_t x91 = INT8_MAX;

	t22 = (x89<=((x90==x91)*x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = INT8_MIN;
	volatile int8_t x95 = 1;
	uint64_t x96 = UINT64_MAX;
	volatile int32_t t23 = 16;

	t23 = (x93<=((x94==x95)*x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 64615745223LL;
	int16_t x99 = INT16_MIN;
	volatile uint64_t x100 = 1425379318204968LLU;
	int32_t t24 = 82;

	t24 = (x97<=((x98==x99)*x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x101 = -1;
	int64_t x103 = 70834046424732LL;
	int16_t x104 = INT16_MIN;
	int32_t t25 = -325358232;

	t25 = (x101<=((x102==x103)*x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = -13085165LL;
	volatile int64_t x107 = -7LL;
	int16_t x108 = -1;

	t26 = (x105<=((x106==x107)*x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 2U;
	uint32_t x110 = 332215050U;
	int16_t x111 = -4;
	volatile int32_t t27 = 26;

	t27 = (x109<=((x110==x111)*x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 23317179613568625LL;
	uint8_t x115 = 16U;

	t28 = (x113<=((x114==x115)*x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 3U;
	int32_t x118 = INT32_MAX;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MIN;

	t29 = (x117<=((x118==x119)*x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	static int32_t x122 = -1;
	volatile uint16_t x123 = UINT16_MAX;
	uint32_t x124 = 0U;
	volatile int32_t t30 = 1009462479;

	t30 = (x121<=((x122==x123)*x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = -1LL;
	static uint8_t x127 = 17U;
	int64_t x128 = INT64_MIN;

	t31 = (x125<=((x126==x127)*x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x129 = 9U;
	int16_t x130 = 12190;
	volatile int16_t x131 = INT16_MAX;
	int32_t t32 = -254894867;

	t32 = (x129<=((x130==x131)*x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	int64_t x134 = INT64_MAX;
	int32_t x135 = -15300006;

	t33 = (x133<=((x134==x135)*x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 141220LL;
	uint8_t x138 = UINT8_MAX;
	int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -112;

	t34 = (x137<=((x138==x139)*x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = UINT8_MAX;
	int32_t x144 = -1;

	t35 = (x141<=((x142==x143)*x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 12102549;
	static volatile uint64_t x146 = 4425250683LLU;
	static int8_t x147 = INT8_MIN;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t36 = 23;

	t36 = (x145<=((x146==x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MAX;
	int8_t x150 = -1;
	int32_t x151 = INT32_MAX;
	uint32_t x152 = UINT32_MAX;
	int32_t t37 = -599;

	t37 = (x149<=((x150==x151)*x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 4;
	int8_t x154 = INT8_MAX;
	int64_t x155 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	volatile int32_t t38 = 1;

	t38 = (x153<=((x154==x155)*x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	volatile uint64_t x158 = 51816LLU;
	uint64_t x159 = 4215LLU;
	volatile int32_t t39 = 6;

	t39 = (x157<=((x158==x159)*x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 6;
	int32_t x162 = 1921;
	uint64_t x164 = 398296062796348LLU;
	int32_t t40 = -11321;

	t40 = (x161<=((x162==x163)*x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x165 = 28U;
	volatile int32_t x166 = INT32_MIN;
	int8_t x168 = -1;
	volatile int32_t t41 = 84954923;

	t41 = (x165<=((x166==x167)*x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x170 = INT32_MIN;
	int16_t x171 = -51;
	int16_t x172 = INT16_MAX;
	int32_t t42 = -1823115;

	t42 = (x169<=((x170==x171)*x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 13;
	static uint16_t x174 = 1U;
	int64_t x176 = -1LL;
	int32_t t43 = 45457;

	t43 = (x173<=((x174==x175)*x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x179 = INT64_MIN;
	int32_t t44 = 90274021;

	t44 = (x177<=((x178==x179)*x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	int16_t x183 = INT16_MIN;
	int32_t x184 = -1;

	t45 = (x181<=((x182==x183)*x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -241602985;
	uint16_t x187 = 363U;
	volatile int32_t t46 = 4;

	t46 = (x185<=((x186==x187)*x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	volatile int16_t x190 = INT16_MIN;
	static int64_t x192 = -4233071776653LL;
	static volatile int32_t t47 = -364276;

	t47 = (x189<=((x190==x191)*x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x195 = UINT64_MAX;
	static volatile int64_t x196 = 757LL;
	volatile int32_t t48 = 31;

	t48 = (x193<=((x194==x195)*x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x197 = -15;
	int8_t x198 = -63;
	static volatile int32_t t49 = 11151;

	t49 = (x197<=((x198==x199)*x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	int16_t x203 = INT16_MIN;
	int32_t x204 = -1;

	t50 = (x201<=((x202==x203)*x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MIN;
	volatile uint64_t x206 = 71282LLU;
	uint8_t x207 = 0U;
	volatile int16_t x208 = 127;
	static int32_t t51 = -804;

	t51 = (x205<=((x206==x207)*x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x210 = INT64_MAX;
	volatile uint64_t x211 = 3LLU;
	uint64_t x212 = UINT64_MAX;
	int32_t t52 = -1;

	t52 = (x209<=((x210==x211)*x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = -12;
	int8_t x214 = 0;
	uint64_t x215 = 2422146LLU;
	uint32_t x216 = 70U;
	int32_t t53 = -160693627;

	t53 = (x213<=((x214==x215)*x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x218 = 14LL;
	volatile uint16_t x219 = 120U;
	int64_t x220 = -193864074117535146LL;
	static int32_t t54 = -326998980;

	t54 = (x217<=((x218==x219)*x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	int64_t x222 = -1LL;
	int16_t x223 = 0;
	static volatile int32_t t55 = -715128;

	t55 = (x221<=((x222==x223)*x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x226 = 29U;

	t56 = (x225<=((x226==x227)*x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = 1756;
	int32_t x230 = INT32_MIN;
	int16_t x231 = 1;
	int64_t x232 = INT64_MAX;
	static int32_t t57 = 43969744;

	t57 = (x229<=((x230==x231)*x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = INT16_MIN;
	static uint16_t x235 = 28044U;
	volatile int32_t x236 = INT32_MAX;

	t58 = (x233<=((x234==x235)*x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = 49;
	int32_t x240 = -5;
	int32_t t59 = 216;

	t59 = (x237<=((x238==x239)*x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x242 = 34840;
	int16_t x243 = INT16_MIN;
	static uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 31087319;

	t60 = (x241<=((x242==x243)*x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x245 = INT8_MAX;
	static int64_t x247 = INT64_MIN;
	volatile int32_t x248 = INT32_MAX;
	static volatile int32_t t61 = -7603;

	t61 = (x245<=((x246==x247)*x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int32_t x250 = -1;
	volatile uint64_t x251 = 32288400511LLU;
	int32_t t62 = 888;

	t62 = (x249<=((x250==x251)*x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 5668U;
	int32_t x254 = -2912180;
	static uint32_t x255 = UINT32_MAX;
	static int16_t x256 = -241;
	int32_t t63 = 18;

	t63 = (x253<=((x254==x255)*x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x258 = 3500804416161LL;
	static int64_t x259 = -1LL;
	uint32_t x260 = 9821U;

	t64 = (x257<=((x258==x259)*x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	int16_t x264 = 3716;
	static volatile int32_t t65 = -60609;

	t65 = (x261<=((x262==x263)*x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = 1040558;
	int64_t x266 = -1LL;
	int64_t x267 = INT64_MIN;
	static volatile uint64_t x268 = UINT64_MAX;
	int32_t t66 = -1947;

	t66 = (x265<=((x266==x267)*x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	uint32_t x270 = UINT32_MAX;
	int16_t x271 = -4;
	volatile int16_t x272 = -1;
	int32_t t67 = 6364;

	t67 = (x269<=((x270==x271)*x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	int16_t x276 = -3753;
	volatile int32_t t68 = -170889;

	t68 = (x273<=((x274==x275)*x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -1;

	t69 = (x277<=((x278==x279)*x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 279873415497126201LLU;
	int64_t x283 = INT64_MIN;
	static volatile int64_t x284 = INT64_MIN;

	t70 = (x281<=((x282==x283)*x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	static uint8_t x286 = UINT8_MAX;
	int32_t x287 = 208;
	int8_t x288 = INT8_MAX;
	volatile int32_t t71 = -1;

	t71 = (x285<=((x286==x287)*x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = UINT32_MAX;
	uint16_t x290 = UINT16_MAX;

	t72 = (x289<=((x290==x291)*x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = -45064631;
	int32_t t73 = -24061;

	t73 = (x293<=((x294==x295)*x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x297 = UINT32_MAX;
	int64_t x298 = -3972031454664655965LL;
	int32_t x299 = -1;
	static int32_t t74 = -2181118;

	t74 = (x297<=((x298==x299)*x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 5926;
	static int32_t x302 = -318;
	int64_t x304 = -411183547LL;
	static volatile int32_t t75 = 33;

	t75 = (x301<=((x302==x303)*x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = -1LL;
	int32_t x306 = INT32_MIN;
	uint16_t x307 = 132U;
	int64_t x308 = -1LL;
	volatile int32_t t76 = -324305257;

	t76 = (x305<=((x306==x307)*x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 22920U;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = 15055223;

	t77 = (x309<=((x310==x311)*x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x314 = 39995;
	volatile int8_t x315 = INT8_MAX;
	uint32_t x316 = 124294U;
	int32_t t78 = 1;

	t78 = (x313<=((x314==x315)*x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = 7692503;
	static volatile int8_t x320 = INT8_MIN;

	t79 = (x317<=((x318==x319)*x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MAX;
	int32_t x322 = INT32_MIN;
	volatile uint32_t x323 = UINT32_MAX;
	static uint16_t x324 = UINT16_MAX;
	static int32_t t80 = 879;

	t80 = (x321<=((x322==x323)*x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 1342857457U;
	static volatile int32_t x326 = INT32_MAX;
	static uint16_t x327 = 120U;
	uint8_t x328 = 9U;
	volatile int32_t t81 = -75501724;

	t81 = (x325<=((x326==x327)*x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x329 = 7714022;
	static int64_t x330 = INT64_MIN;
	int32_t x331 = -1;
	static uint32_t x332 = UINT32_MAX;
	volatile int32_t t82 = -1123414;

	t82 = (x329<=((x330==x331)*x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int64_t x334 = -1LL;
	volatile int64_t x335 = -1LL;
	int32_t t83 = -11;

	t83 = (x333<=((x334==x335)*x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = 1530;
	volatile uint32_t x338 = 5481381U;
	static int8_t x340 = INT8_MIN;

	t84 = (x337<=((x338==x339)*x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	int16_t x342 = -124;
	int32_t x343 = INT32_MIN;
	int64_t x344 = -1LL;
	volatile int32_t t85 = -56195744;

	t85 = (x341<=((x342==x343)*x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 2703LLU;
	static volatile int8_t x348 = INT8_MIN;
	volatile int32_t t86 = 2;

	t86 = (x345<=((x346==x347)*x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = 1863810082486023893LL;
	uint64_t x350 = UINT64_MAX;
	uint32_t x352 = 2307244U;
	int32_t t87 = -625305907;

	t87 = (x349<=((x350==x351)*x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = 238296U;
	int16_t x355 = INT16_MIN;
	volatile uint16_t x356 = 3933U;
	static int32_t t88 = 3;

	t88 = (x353<=((x354==x355)*x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 346535157U;
	uint8_t x358 = UINT8_MAX;
	uint32_t x359 = 64898U;
	volatile int16_t x360 = 125;
	static int32_t t89 = 92;

	t89 = (x357<=((x358==x359)*x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	static volatile int64_t x363 = -1LL;
	volatile int32_t x364 = INT32_MIN;
	int32_t t90 = -9934;

	t90 = (x361<=((x362==x363)*x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 9U;
	volatile int8_t x367 = INT8_MIN;
	int16_t x368 = INT16_MIN;
	int32_t t91 = 50890127;

	t91 = (x365<=((x366==x367)*x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x370 = INT32_MIN;
	int8_t x371 = -30;
	uint64_t x372 = UINT64_MAX;
	int32_t t92 = -37275;

	t92 = (x369<=((x370==x371)*x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x373 = UINT8_MAX;
	volatile int32_t x375 = INT32_MAX;
	int32_t x376 = INT32_MIN;

	t93 = (x373<=((x374==x375)*x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MIN;
	uint64_t x379 = UINT64_MAX;
	static int8_t x380 = INT8_MAX;

	t94 = (x377<=((x378==x379)*x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x382 = 1U;
	int8_t x383 = INT8_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t95 = -388816019;

	t95 = (x381<=((x382==x383)*x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = UINT16_MAX;
	uint16_t x386 = UINT16_MAX;
	int8_t x387 = INT8_MIN;
	int64_t x388 = INT64_MIN;
	static volatile int32_t t96 = 195614671;

	t96 = (x385<=((x386==x387)*x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	static int64_t x390 = -1LL;
	int16_t x391 = 814;
	static int32_t x392 = INT32_MIN;
	int32_t t97 = -44240389;

	t97 = (x389<=((x390==x391)*x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 1;
	static uint8_t x394 = 0U;
	uint8_t x395 = 21U;
	uint16_t x396 = 0U;
	int32_t t98 = 760916945;

	t98 = (x393<=((x394==x395)*x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	volatile uint16_t x398 = 1397U;
	int16_t x399 = -1903;
	volatile int64_t x400 = -1LL;
	static volatile int32_t t99 = -4741239;

	t99 = (x397<=((x398==x399)*x400));

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

