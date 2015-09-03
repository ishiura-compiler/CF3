#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t2 = -491103;
int64_t x14 = 331939905512777468LL;
static int64_t x18 = INT64_MAX;
volatile int64_t x27 = INT64_MIN;
int8_t x28 = -1;
volatile int32_t t6 = -428853;
int16_t x29 = INT16_MIN;
volatile int32_t t7 = -200964;
volatile int32_t t10 = -1;
static int64_t x46 = INT64_MIN;
int16_t x48 = INT16_MIN;
int32_t t12 = 2950;
int32_t t13 = 1;
static int32_t x62 = -1;
static volatile int16_t x63 = 887;
volatile uint64_t x66 = 5602858173323157471LLU;
uint64_t x74 = 31394LLU;
int32_t t18 = -662340;
static int16_t x77 = 164;
volatile int32_t x86 = 1;
int32_t t23 = 39937980;
int32_t x103 = -323;
int32_t t24 = 7;
int16_t x113 = INT16_MAX;
int8_t x117 = INT8_MIN;
volatile int64_t x135 = INT64_MIN;
static int64_t x136 = -55LL;
int32_t t31 = 12;
int16_t x144 = INT16_MIN;
volatile int32_t t36 = 7548;
static int64_t x171 = -4080008465453440567LL;
volatile int16_t x179 = INT16_MIN;
uint16_t x180 = 59U;
uint8_t x186 = 9U;
static int16_t x187 = INT16_MIN;
int16_t x193 = -1;
int32_t x207 = -24781092;
static int32_t x209 = INT32_MAX;
uint8_t x212 = 21U;
uint64_t x213 = 78115266675016574LLU;
static int32_t x216 = INT32_MAX;
int8_t x224 = INT8_MIN;
uint32_t x226 = UINT32_MAX;
uint32_t x228 = 173895U;
volatile int32_t x229 = 1173;
static int8_t x236 = -1;
volatile int32_t t53 = 1676;
static volatile int32_t t54 = 21897153;
int8_t x249 = 51;
static int32_t x258 = INT32_MAX;
static int16_t x267 = -1;
int8_t x269 = -1;
static int32_t x270 = -1;
int32_t t60 = 23126850;
int16_t x290 = INT16_MIN;
volatile int64_t x300 = INT64_MAX;
int32_t t69 = -1744038;
uint8_t x325 = UINT8_MAX;
int8_t x331 = INT8_MAX;
int32_t t72 = -30;
int8_t x339 = -1;
static int16_t x340 = INT16_MIN;
int8_t x341 = INT8_MAX;
volatile int32_t x350 = 521957378;
int32_t t76 = 0;
volatile int32_t x354 = INT32_MIN;
int16_t x355 = 2;
uint32_t x356 = UINT32_MAX;
uint16_t x359 = 55U;
int32_t t79 = -125;
volatile uint64_t x365 = UINT64_MAX;
int64_t x370 = INT64_MAX;
uint32_t x404 = UINT32_MAX;
int32_t t88 = -205;
volatile int32_t t89 = 1;
static int16_t x411 = INT16_MIN;
volatile int32_t t92 = -1;
static uint64_t x422 = UINT64_MAX;
int32_t t94 = -38;
volatile uint64_t x431 = 2415117982187LLU;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	volatile int8_t x2 = -30;
	int16_t x3 = INT16_MIN;
	volatile int8_t x4 = -38;
	static volatile int32_t t0 = -22;

	t0 = (x1==((x2==x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 43370341075LL;
	int32_t x6 = INT32_MIN;
	int64_t x7 = -1LL;
	volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -313;

	t1 = (x5==((x6==x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	volatile int32_t x10 = INT32_MIN;
	uint8_t x11 = UINT8_MAX;
	int16_t x12 = -451;

	t2 = (x9==((x10==x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	uint64_t x15 = UINT64_MAX;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = 24467;

	t3 = (x13==((x14==x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int64_t x19 = INT64_MIN;
	uint16_t x20 = 7306U;
	volatile int32_t t4 = 317;

	t4 = (x17==((x18==x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = INT16_MIN;
	uint16_t x22 = 13946U;
	static int32_t x23 = -144927;
	volatile uint16_t x24 = 40U;
	int32_t t5 = 1;

	t5 = (x21==((x22==x23)-x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 15U;
	volatile int16_t x26 = INT16_MAX;

	t6 = (x25==((x26==x27)-x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int16_t x31 = INT16_MIN;
	int64_t x32 = -1LL;

	t7 = (x29==((x30==x31)-x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MIN;
	static volatile uint32_t x35 = 55163442U;
	int32_t x36 = -1;
	volatile int32_t t8 = -4056469;

	t8 = (x33==((x34==x35)-x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 131550735U;
	int8_t x38 = -51;
	volatile int32_t x39 = INT32_MAX;
	int8_t x40 = INT8_MIN;
	static int32_t t9 = 79;

	t9 = (x37==((x38==x39)-x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = 2LL;
	int8_t x42 = INT8_MIN;
	int32_t x43 = INT32_MIN;
	int64_t x44 = -1212200LL;

	t10 = (x41==((x42==x43)-x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int8_t x47 = INT8_MIN;
	volatile int32_t t11 = 1;

	t11 = (x45==((x46==x47)-x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = UINT32_MAX;
	int64_t x50 = -50167045273668269LL;
	int32_t x51 = INT32_MIN;
	static int64_t x52 = INT64_MAX;

	t12 = (x49==((x50==x51)-x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	uint32_t x54 = 1043U;
	volatile int16_t x55 = INT16_MIN;
	int8_t x56 = 0;

	t13 = (x53==((x54==x55)-x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	static int16_t x58 = INT16_MAX;
	static int32_t x59 = -1;
	uint32_t x60 = 703309963U;
	int32_t t14 = -5548;

	t14 = (x57==((x58==x59)-x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = -36LL;
	int16_t x64 = -1;
	int32_t t15 = 121374;

	t15 = (x61==((x62==x63)-x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x67 = UINT16_MAX;
	volatile int32_t x68 = -1;
	volatile int32_t t16 = -268711;

	t16 = (x65==((x66==x67)-x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	uint8_t x70 = 1U;
	int16_t x71 = -1;
	volatile uint32_t x72 = UINT32_MAX;
	int32_t t17 = 26239372;

	t17 = (x69==((x70==x71)-x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x73 = INT8_MAX;
	static int64_t x75 = INT64_MIN;
	uint32_t x76 = 6444182U;

	t18 = (x73==((x74==x75)-x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x78 = UINT16_MAX;
	volatile uint8_t x79 = 1U;
	uint32_t x80 = 3990644U;
	int32_t t19 = -9;

	t19 = (x77==((x78==x79)-x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 0U;
	int8_t x82 = 19;
	uint64_t x83 = 4LLU;
	int16_t x84 = 8;
	int32_t t20 = 11899;

	t20 = (x81==((x82==x83)-x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = -72699118;
	static uint8_t x87 = UINT8_MAX;
	static int64_t x88 = -1LL;
	int32_t t21 = -33;

	t21 = (x85==((x86==x87)-x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 1671071031U;
	volatile uint16_t x94 = UINT16_MAX;
	uint16_t x95 = 21115U;
	volatile int32_t x96 = -1;
	int32_t t22 = 29;

	t22 = (x93==((x94==x95)-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 29346U;
	volatile uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MAX;
	static int32_t x100 = -1;

	t23 = (x97==((x98==x99)-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = INT64_MIN;
	uint64_t x102 = 11022077891LLU;
	int8_t x104 = -1;

	t24 = (x101==((x102==x103)-x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = 2U;
	int32_t x106 = INT32_MIN;
	static int8_t x107 = 0;
	uint32_t x108 = 3U;
	int32_t t25 = 71;

	t25 = (x105==((x106==x107)-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x114 = INT32_MIN;
	static int64_t x115 = 42760672LL;
	static int64_t x116 = -744438669399LL;
	volatile int32_t t26 = -102732;

	t26 = (x113==((x114==x115)-x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x118 = INT64_MAX;
	int32_t x119 = INT32_MIN;
	uint8_t x120 = 28U;
	volatile int32_t t27 = 37349643;

	t27 = (x117==((x118==x119)-x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MIN;
	volatile uint8_t x122 = UINT8_MAX;
	volatile uint8_t x123 = 7U;
	uint64_t x124 = UINT64_MAX;
	int32_t t28 = 1;

	t28 = (x121==((x122==x123)-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MIN;
	volatile int64_t x126 = INT64_MIN;
	static int32_t x127 = INT32_MIN;
	int64_t x128 = -1LL;
	int32_t t29 = -2274;

	t29 = (x125==((x126==x127)-x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -1;
	int8_t x130 = 15;
	int64_t x131 = INT64_MAX;
	uint16_t x132 = 22U;
	int32_t t30 = 2085664;

	t30 = (x129==((x130==x131)-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 231U;
	static int32_t x134 = 7;

	t31 = (x133==((x134==x135)-x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x137 = 702862LL;
	int32_t x138 = INT32_MAX;
	volatile int16_t x139 = 12154;
	int16_t x140 = INT16_MIN;
	int32_t t32 = 369025358;

	t32 = (x137==((x138==x139)-x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x141 = INT16_MIN;
	int32_t x142 = -753612;
	static int8_t x143 = INT8_MAX;
	static int32_t t33 = 4023010;

	t33 = (x141==((x142==x143)-x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = 151879U;
	static int8_t x147 = INT8_MAX;
	int8_t x148 = INT8_MIN;
	static volatile int32_t t34 = 71707;

	t34 = (x145==((x146==x147)-x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 3U;
	uint8_t x150 = 35U;
	int64_t x151 = 976126819LL;
	volatile int64_t x152 = -1LL;
	int32_t t35 = 15542;

	t35 = (x149==((x150==x151)-x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MIN;
	volatile uint16_t x154 = 7U;
	int64_t x155 = INT64_MIN;
	static int32_t x156 = -260247;

	t36 = (x153==((x154==x155)-x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x161 = 640U;
	static int8_t x162 = INT8_MIN;
	static uint64_t x163 = 19394433014751LLU;
	int8_t x164 = -5;
	volatile int32_t t37 = 1024820982;

	t37 = (x161==((x162==x163)-x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = -1;
	int16_t x166 = -110;
	uint16_t x167 = 5U;
	uint8_t x168 = UINT8_MAX;
	int32_t t38 = -3;

	t38 = (x165==((x166==x167)-x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = UINT16_MAX;
	uint16_t x170 = 7013U;
	static uint64_t x172 = UINT64_MAX;
	int32_t t39 = -1;

	t39 = (x169==((x170==x171)-x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x173 = INT32_MIN;
	int32_t x174 = 993366;
	uint64_t x175 = UINT64_MAX;
	int8_t x176 = -1;
	int32_t t40 = 212503447;

	t40 = (x173==((x174==x175)-x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -201;
	int32_t x178 = INT32_MIN;
	int32_t t41 = 16;

	t41 = (x177==((x178==x179)-x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x181 = INT32_MIN;
	int8_t x182 = -1;
	uint8_t x183 = 100U;
	volatile int64_t x184 = 745993725278896LL;
	int32_t t42 = 1441726;

	t42 = (x181==((x182==x183)-x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -16;
	static int8_t x188 = INT8_MAX;
	volatile int32_t t43 = 1085;

	t43 = (x185==((x186==x187)-x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x189 = INT64_MIN;
	uint32_t x190 = 2798U;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = UINT64_MAX;
	int32_t t44 = 2315304;

	t44 = (x189==((x190==x191)-x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x194 = 10074230730388677LLU;
	uint16_t x195 = UINT16_MAX;
	int16_t x196 = -1;
	volatile int32_t t45 = 232;

	t45 = (x193==((x194==x195)-x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x201 = 8U;
	static uint8_t x202 = UINT8_MAX;
	static int32_t x203 = 1859;
	uint64_t x204 = 17873186453LLU;
	int32_t t46 = 12;

	t46 = (x201==((x202==x203)-x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x205 = INT16_MIN;
	uint64_t x206 = 256792843712013935LLU;
	int16_t x208 = 3568;
	int32_t t47 = 43;

	t47 = (x205==((x206==x207)-x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x210 = UINT16_MAX;
	static volatile int16_t x211 = INT16_MAX;
	int32_t t48 = 196;

	t48 = (x209==((x210==x211)-x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x214 = INT64_MIN;
	int32_t x215 = INT32_MIN;
	int32_t t49 = -9308803;

	t49 = (x213==((x214==x215)-x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x221 = 53989584LL;
	static uint64_t x222 = 44688365844235305LLU;
	static int64_t x223 = INT64_MAX;
	static int32_t t50 = 40873192;

	t50 = (x221==((x222==x223)-x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = -846;
	volatile uint16_t x227 = UINT16_MAX;
	volatile int32_t t51 = 739;

	t51 = (x225==((x226==x227)-x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x230 = 31U;
	uint64_t x231 = 2539328LLU;
	uint8_t x232 = 127U;
	int32_t t52 = 2;

	t52 = (x229==((x230==x231)-x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x233 = 326408411071427348LLU;
	uint16_t x234 = 5U;
	volatile int16_t x235 = 0;

	t53 = (x233==((x234==x235)-x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MIN;
	volatile int64_t x239 = -295699966371355131LL;
	uint64_t x240 = 1311LLU;

	t54 = (x237==((x238==x239)-x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x245 = -1;
	volatile int64_t x246 = -16LL;
	static int32_t x247 = INT32_MIN;
	static volatile int16_t x248 = 6;
	static volatile int32_t t55 = 43;

	t55 = (x245==((x246==x247)-x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x250 = UINT8_MAX;
	volatile uint32_t x251 = 246U;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t56 = 249615677;

	t56 = (x249==((x250==x251)-x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = 12U;
	int16_t x259 = -1;
	static uint8_t x260 = 1U;
	static int32_t t57 = 1;

	t57 = (x257==((x258==x259)-x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = -9332;
	static int8_t x262 = 37;
	uint32_t x263 = UINT32_MAX;
	int32_t x264 = 13759;
	static int32_t t58 = -197;

	t58 = (x261==((x262==x263)-x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = -1LL;
	static int32_t x266 = 517608;
	int32_t x268 = -1;
	volatile int32_t t59 = 2;

	t59 = (x265==((x266==x267)-x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x271 = -12410;
	int8_t x272 = INT8_MIN;

	t60 = (x269==((x270==x271)-x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x273 = INT32_MIN;
	uint8_t x274 = 123U;
	int64_t x275 = INT64_MIN;
	static int16_t x276 = INT16_MIN;
	int32_t t61 = 23822587;

	t61 = (x273==((x274==x275)-x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = 2;
	static volatile uint16_t x278 = 19394U;
	int64_t x279 = -1LL;
	int64_t x280 = -63LL;
	volatile int32_t t62 = 6;

	t62 = (x277==((x278==x279)-x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MAX;
	volatile int32_t x282 = INT32_MIN;
	volatile int8_t x283 = 24;
	uint16_t x284 = 50U;
	static volatile int32_t t63 = -236;

	t63 = (x281==((x282==x283)-x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x289 = 4U;
	int32_t x291 = INT32_MIN;
	int32_t x292 = -1;
	int32_t t64 = -7500;

	t64 = (x289==((x290==x291)-x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x297 = 3735759U;
	volatile uint16_t x298 = UINT16_MAX;
	static volatile int8_t x299 = 14;
	int32_t t65 = 244724987;

	t65 = (x297==((x298==x299)-x300));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = INT64_MIN;
	static volatile uint32_t x306 = UINT32_MAX;
	static volatile int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MAX;
	int32_t t66 = 2938;

	t66 = (x305==((x306==x307)-x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = INT16_MIN;
	uint16_t x310 = 31871U;
	uint64_t x311 = 5680297266LLU;
	int8_t x312 = -25;
	int32_t t67 = 2366720;

	t67 = (x309==((x310==x311)-x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x313 = 8302U;
	uint16_t x314 = 332U;
	int16_t x315 = INT16_MIN;
	volatile int16_t x316 = INT16_MIN;
	int32_t t68 = 6128;

	t68 = (x313==((x314==x315)-x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x317 = INT32_MIN;
	volatile int64_t x318 = 383604058LL;
	static uint16_t x319 = UINT16_MAX;
	int64_t x320 = -26438LL;

	t69 = (x317==((x318==x319)-x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = INT16_MAX;
	int64_t x322 = 4258LL;
	volatile int16_t x323 = -1;
	static int16_t x324 = INT16_MIN;
	volatile int32_t t70 = -349;

	t70 = (x321==((x322==x323)-x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MAX;
	uint32_t x328 = UINT32_MAX;
	int32_t t71 = 28;

	t71 = (x325==((x326==x327)-x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x329 = -1LL;
	int64_t x330 = 429LL;
	static uint16_t x332 = UINT16_MAX;

	t72 = (x329==((x330==x331)-x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x337 = INT16_MIN;
	volatile uint16_t x338 = 2U;
	volatile int32_t t73 = -681220;

	t73 = (x337==((x338==x339)-x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x342 = -4867499948456961LL;
	int64_t x343 = -1LL;
	int64_t x344 = -51581913LL;
	int32_t t74 = 2232;

	t74 = (x341==((x342==x343)-x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x345 = INT32_MAX;
	static int64_t x346 = INT64_MIN;
	uint16_t x347 = UINT16_MAX;
	static int8_t x348 = -1;
	int32_t t75 = -10401048;

	t75 = (x345==((x346==x347)-x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x349 = INT8_MAX;
	volatile int32_t x351 = INT32_MIN;
	uint8_t x352 = 9U;

	t76 = (x349==((x350==x351)-x352));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x353 = INT16_MIN;
	int32_t t77 = 0;

	t77 = (x353==((x354==x355)-x356));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = -1LL;
	int8_t x358 = INT8_MIN;
	uint32_t x360 = 1U;
	int32_t t78 = -3;

	t78 = (x357==((x358==x359)-x360));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	volatile int8_t x363 = 2;
	uint64_t x364 = 20269807516869222LLU;

	t79 = (x361==((x362==x363)-x364));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x366 = 14;
	int8_t x367 = 2;
	int32_t x368 = -371397918;
	static volatile int32_t t80 = -1783;

	t80 = (x365==((x366==x367)-x368));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = INT16_MAX;
	static int16_t x371 = 1;
	uint8_t x372 = 21U;
	int32_t t81 = 9156642;

	t81 = (x369==((x370==x371)-x372));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = 53;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	uint8_t x376 = 24U;
	int32_t t82 = -2128;

	t82 = (x373==((x374==x375)-x376));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = 382;
	int64_t x378 = INT64_MAX;
	int16_t x379 = 429;
	volatile uint16_t x380 = 13192U;
	volatile int32_t t83 = -39673442;

	t83 = (x377==((x378==x379)-x380));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x381 = INT16_MIN;
	int16_t x382 = -4;
	int64_t x383 = INT64_MAX;
	int8_t x384 = INT8_MIN;
	volatile int32_t t84 = -64203;

	t84 = (x381==((x382==x383)-x384));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x385 = UINT64_MAX;
	uint16_t x386 = 23U;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = 21;
	volatile int32_t t85 = 3;

	t85 = (x385==((x386==x387)-x388));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x389 = INT64_MIN;
	static int64_t x390 = -13LL;
	volatile int64_t x391 = INT64_MAX;
	uint32_t x392 = 1484U;
	int32_t t86 = 17;

	t86 = (x389==((x390==x391)-x392));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x397 = INT64_MAX;
	uint32_t x398 = UINT32_MAX;
	int64_t x399 = INT64_MIN;
	static int8_t x400 = -1;
	static int32_t t87 = 1;

	t87 = (x397==((x398==x399)-x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x401 = UINT8_MAX;
	int64_t x402 = -2846305323054655LL;
	uint64_t x403 = 70559179477458464LLU;

	t88 = (x401==((x402==x403)-x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x405 = -8886978194879064LL;
	int8_t x406 = INT8_MAX;
	volatile int64_t x407 = INT64_MAX;
	int64_t x408 = 97212462859LL;

	t89 = (x405==((x406==x407)-x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x409 = 3U;
	uint32_t x410 = UINT32_MAX;
	uint32_t x412 = 89U;
	int32_t t90 = -754128;

	t90 = (x409==((x410==x411)-x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x413 = 11U;
	int8_t x414 = -1;
	int64_t x415 = -35LL;
	static int16_t x416 = INT16_MIN;
	static volatile int32_t t91 = 2415;

	t91 = (x413==((x414==x415)-x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MIN;
	int64_t x418 = 3LL;
	int32_t x419 = INT32_MAX;
	uint32_t x420 = 29U;

	t92 = (x417==((x418==x419)-x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x421 = UINT32_MAX;
	static volatile int8_t x423 = INT8_MIN;
	static volatile uint32_t x424 = 47384U;
	volatile int32_t t93 = -129701;

	t93 = (x421==((x422==x423)-x424));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = -1;
	uint64_t x426 = 13LLU;
	int8_t x427 = INT8_MIN;
	uint16_t x428 = 279U;

	t94 = (x425==((x426==x427)-x428));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x429 = -1;
	int32_t x430 = 908401;
	int64_t x432 = -1LL;
	volatile int32_t t95 = -394935508;

	t95 = (x429==((x430==x431)-x432));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x437 = 6986646117014LLU;
	int64_t x438 = INT64_MIN;
	int32_t x439 = -64480;
	uint8_t x440 = 3U;
	int32_t t96 = 139041;

	t96 = (x437==((x438==x439)-x440));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x441 = 114U;
	uint8_t x442 = 0U;
	volatile uint8_t x443 = 111U;
	int64_t x444 = INT64_MAX;
	volatile int32_t t97 = -1617;

	t97 = (x441==((x442==x443)-x444));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x445 = 30U;
	int32_t x446 = INT32_MAX;
	int8_t x447 = INT8_MIN;
	uint16_t x448 = 1443U;
	int32_t t98 = 1;

	t98 = (x445==((x446==x447)-x448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x453 = -1;
	int64_t x454 = -1LL;
	uint16_t x455 = 6692U;
	static uint64_t x456 = 190559431883LLU;
	volatile int32_t t99 = 7;

	t99 = (x453==((x454==x455)-x456));

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

