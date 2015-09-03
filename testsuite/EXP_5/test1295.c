#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x2 = -1;
static uint64_t x3 = UINT64_MAX;
int32_t t0 = 1039081;
volatile uint8_t x15 = 1U;
int8_t x19 = INT8_MIN;
int32_t t4 = -316165973;
volatile int32_t t6 = 516140919;
int32_t x32 = INT32_MIN;
volatile int32_t t7 = 126;
int64_t x33 = -1LL;
int16_t x35 = INT16_MIN;
static uint8_t x37 = 15U;
static uint32_t x50 = 4730933U;
static volatile int8_t x53 = -1;
volatile int32_t t13 = -299190;
uint64_t x59 = UINT64_MAX;
static int16_t x63 = INT16_MIN;
static uint8_t x66 = UINT8_MAX;
int32_t x68 = -1;
volatile int32_t x71 = INT32_MAX;
int16_t x74 = 441;
volatile int32_t t18 = -2183724;
volatile uint16_t x82 = UINT16_MAX;
static volatile uint8_t x87 = 85U;
int8_t x92 = -11;
uint32_t x93 = 73U;
static int32_t t25 = -30456890;
static int32_t x112 = INT32_MAX;
volatile int32_t t27 = -8454;
static volatile int64_t x117 = INT64_MAX;
int64_t x121 = -638LL;
uint16_t x124 = 194U;
int16_t x132 = INT16_MIN;
uint32_t x144 = 56887U;
uint16_t x147 = UINT16_MAX;
int32_t t36 = 554505;
static int16_t x151 = INT16_MIN;
volatile int32_t t37 = 12291;
int16_t x156 = 1;
int32_t x160 = 72875;
int8_t x167 = -30;
volatile int8_t x169 = 0;
volatile int32_t t42 = 255705288;
int32_t x174 = -1;
int32_t x177 = 0;
int64_t x179 = INT64_MIN;
static int32_t t45 = 1;
int16_t x185 = 10255;
static volatile uint64_t x189 = 188911058LLU;
int32_t x191 = INT32_MIN;
int64_t x198 = INT64_MIN;
int16_t x201 = 0;
static int32_t t50 = 23;
volatile uint32_t x206 = 149U;
int64_t x212 = 29115258049LL;
int32_t t52 = 5094;
int16_t x219 = INT16_MIN;
int32_t x221 = INT32_MAX;
static uint32_t x225 = UINT32_MAX;
static uint64_t x232 = 190410085466LLU;
int32_t t57 = -1;
uint8_t x233 = UINT8_MAX;
uint8_t x235 = 2U;
volatile uint64_t x236 = 29LLU;
int64_t x241 = 634LL;
volatile int32_t t60 = -7987236;
static volatile int32_t x247 = -10153;
int32_t x259 = 5;
int64_t x260 = INT64_MAX;
uint64_t x264 = 49589926334116LLU;
volatile int16_t x266 = -1;
volatile uint64_t x271 = 8776558393373837LLU;
static int8_t x274 = -8;
int8_t x277 = INT8_MIN;
volatile int16_t x280 = -1;
int64_t x281 = INT64_MAX;
int32_t x282 = 3090;
static int64_t x286 = INT64_MIN;
int64_t x291 = -14281831640104715LL;
static uint16_t x292 = 35U;
int32_t x293 = INT32_MIN;
int16_t x295 = INT16_MAX;
int32_t x296 = INT32_MIN;
int16_t x298 = INT16_MIN;
volatile int8_t x301 = -1;
int8_t x302 = INT8_MIN;
volatile int64_t x312 = -185037366LL;
static int32_t t77 = -94181;
volatile int32_t t78 = -255998947;
volatile int16_t x323 = INT16_MIN;
volatile int32_t t80 = -156087141;
volatile uint16_t x325 = UINT16_MAX;
static int16_t x340 = INT16_MAX;
int64_t x343 = INT64_MIN;
uint16_t x346 = UINT16_MAX;
static int8_t x351 = -1;
static uint32_t x352 = 956644U;
uint32_t x354 = 4311789U;
int16_t x360 = INT16_MIN;
volatile int32_t t89 = 0;
static volatile int32_t t90 = -7;
int8_t x367 = INT8_MIN;
uint16_t x372 = 1859U;
int32_t t94 = -900504;
volatile int32_t x385 = -333335;
int8_t x388 = INT8_MIN;
uint64_t x390 = UINT64_MAX;
int32_t x397 = -695593;
uint8_t x398 = UINT8_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint32_t x4 = 4U;

	t0 = (x1==((x2==x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	int32_t x6 = 24235059;
	uint64_t x7 = UINT64_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 112793;

	t1 = (x5==((x6==x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 1570U;
	uint64_t x10 = 15646941539LLU;
	static int64_t x11 = INT64_MIN;
	static int64_t x12 = 970936362235LL;
	volatile int32_t t2 = -15945;

	t2 = (x9==((x10==x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 16087U;
	volatile uint64_t x14 = UINT64_MAX;
	volatile int64_t x16 = -165822297LL;
	volatile int32_t t3 = 1071168194;

	t3 = (x13==((x14==x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int64_t x18 = INT64_MAX;
	int64_t x20 = INT64_MAX;

	t4 = (x17==((x18==x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MAX;
	int64_t x22 = -38878LL;
	static volatile uint16_t x23 = 25U;
	uint8_t x24 = 45U;
	static int32_t t5 = 45677535;

	t5 = (x21==((x22==x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 203U;
	static int32_t x26 = -92664;
	uint32_t x27 = 59U;
	int16_t x28 = INT16_MIN;

	t6 = (x25==((x26==x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 5U;
	volatile uint32_t x30 = 799U;
	static uint64_t x31 = UINT64_MAX;

	t7 = (x29==((x30==x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = 2867892LL;
	volatile uint32_t x36 = UINT32_MAX;
	volatile int32_t t8 = 254578767;

	t8 = (x33==((x34==x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x38 = 1371370996U;
	int8_t x39 = 34;
	uint16_t x40 = 3U;
	int32_t t9 = -1440;

	t9 = (x37==((x38==x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 5714LLU;
	uint32_t x43 = UINT32_MAX;
	static volatile int32_t x44 = 481201096;
	int32_t t10 = 3898503;

	t10 = (x41==((x42==x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 105420316U;
	volatile int32_t x46 = INT32_MIN;
	static volatile uint64_t x47 = 44462358845LLU;
	static uint64_t x48 = 13492769183210272LLU;
	int32_t t11 = -15;

	t11 = (x45==((x46==x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	uint8_t x51 = 12U;
	int32_t x52 = INT32_MIN;
	int32_t t12 = 1767;

	t12 = (x49==((x50==x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MIN;
	uint32_t x55 = 11504U;
	uint64_t x56 = UINT64_MAX;

	t13 = (x53==((x54==x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	uint64_t x58 = UINT64_MAX;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = 10;

	t14 = (x57==((x58==x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	static uint64_t x64 = UINT64_MAX;
	int32_t t15 = -3087;

	t15 = (x61==((x62==x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 966U;
	volatile int64_t x67 = INT64_MAX;
	int32_t t16 = 13789;

	t16 = (x65==((x66==x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int32_t x70 = -492;
	int32_t x72 = INT32_MIN;
	volatile int32_t t17 = 2749;

	t17 = (x69==((x70==x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = 585;
	uint16_t x75 = UINT16_MAX;
	uint16_t x76 = 28994U;

	t18 = (x73==((x74==x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	int64_t x78 = -4009LL;
	int64_t x79 = INT64_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = -3162;

	t19 = (x77==((x78==x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MAX;
	int32_t x83 = INT32_MIN;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t20 = -31908;

	t20 = (x81==((x82==x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 13667U;
	volatile int32_t x86 = 95;
	int8_t x88 = INT8_MIN;
	volatile int32_t t21 = -1;

	t21 = (x85==((x86==x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	volatile int16_t x90 = INT16_MIN;
	uint64_t x91 = UINT64_MAX;
	int32_t t22 = 1;

	t22 = (x89==((x90==x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MAX;
	uint8_t x95 = 107U;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = 322034;

	t23 = (x93==((x94==x95)<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 545;
	int32_t x98 = 2222570;
	volatile int64_t x99 = INT64_MAX;
	int8_t x100 = INT8_MIN;
	int32_t t24 = -245;

	t24 = (x97==((x98==x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 11433469LLU;
	int32_t x102 = INT32_MAX;
	uint16_t x103 = UINT16_MAX;
	int64_t x104 = 73394589963LL;

	t25 = (x101==((x102==x103)<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int32_t x106 = INT32_MIN;
	volatile int16_t x107 = -1;
	uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = 33404106;

	t26 = (x105==((x106==x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	int64_t x111 = -1LL;

	t27 = (x109==((x110==x111)<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MAX;
	uint16_t x114 = 960U;
	volatile int8_t x115 = 1;
	static int8_t x116 = INT8_MAX;
	int32_t t28 = 0;

	t28 = (x113==((x114==x115)<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = 1;
	volatile int16_t x119 = -1;
	static uint16_t x120 = 2467U;
	volatile int32_t t29 = 115195;

	t29 = (x117==((x118==x119)<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 83U;
	uint32_t x123 = 713776U;
	static int32_t t30 = 4141;

	t30 = (x121==((x122==x123)<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -52;
	int16_t x126 = -567;
	int16_t x127 = 379;
	volatile int64_t x128 = INT64_MIN;
	int32_t t31 = 1;

	t31 = (x125==((x126==x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	uint32_t x130 = 205U;
	int32_t x131 = 2;
	int32_t t32 = 5;

	t32 = (x129==((x130==x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = 39475317U;
	static uint16_t x134 = UINT16_MAX;
	int64_t x135 = -1LL;
	uint8_t x136 = 36U;
	static int32_t t33 = 16265;

	t33 = (x133==((x134==x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = 24391152983LL;
	int16_t x139 = -1;
	static int16_t x140 = -226;
	static volatile int32_t t34 = -100897432;

	t34 = (x137==((x138==x139)<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 5U;
	uint32_t x142 = 67U;
	volatile int32_t x143 = 856229421;
	int32_t t35 = 1;

	t35 = (x141==((x142==x143)<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	volatile int32_t x146 = -170971;
	uint64_t x148 = 2563680532196206912LLU;

	t36 = (x145==((x146==x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	volatile int32_t x150 = INT32_MIN;
	int32_t x152 = INT32_MIN;

	t37 = (x149==((x150==x151)<x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 0;
	int64_t x154 = -1LL;
	volatile int16_t x155 = INT16_MIN;
	volatile int32_t t38 = -238333328;

	t38 = (x153==((x154==x155)<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = 18U;
	static uint32_t x158 = 3U;
	volatile int64_t x159 = INT64_MIN;
	int32_t t39 = 465117229;

	t39 = (x157==((x158==x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 905U;
	uint8_t x162 = 5U;
	int16_t x163 = -1;
	static int64_t x164 = 11076295937111115LL;
	int32_t t40 = 824608003;

	t40 = (x161==((x162==x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1LL;
	int16_t x166 = -3833;
	static uint32_t x168 = 2U;
	static volatile int32_t t41 = -8119;

	t41 = (x165==((x166==x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = 12921;
	volatile int8_t x171 = -1;
	int16_t x172 = -1;

	t42 = (x169==((x170==x171)<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 212U;
	uint16_t x175 = 670U;
	int16_t x176 = -1;
	static volatile int32_t t43 = -92618495;

	t43 = (x173==((x174==x175)<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x178 = 4531879LLU;
	volatile uint32_t x180 = UINT32_MAX;
	int32_t t44 = -3163505;

	t44 = (x177==((x178==x179)<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 714675LL;
	int16_t x182 = -1;
	uint32_t x183 = 107745747U;
	int32_t x184 = -1;

	t45 = (x181==((x182==x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = 381045931191434LL;
	static uint8_t x187 = 112U;
	int8_t x188 = INT8_MIN;
	int32_t t46 = 1;

	t46 = (x185==((x186==x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x190 = UINT16_MAX;
	volatile int8_t x192 = INT8_MIN;
	int32_t t47 = 243300369;

	t47 = (x189==((x190==x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x193 = -1;
	int16_t x194 = INT16_MIN;
	static uint8_t x195 = UINT8_MAX;
	uint32_t x196 = 4206U;
	int32_t t48 = -46;

	t48 = (x193==((x194==x195)<x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	static uint32_t x199 = 1U;
	int8_t x200 = INT8_MIN;
	int32_t t49 = 39310104;

	t49 = (x197==((x198==x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x202 = 606171639656376110LLU;
	int32_t x203 = -7027266;
	int64_t x204 = 31296039602741238LL;

	t50 = (x201==((x202==x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	int16_t x207 = -2;
	uint64_t x208 = UINT64_MAX;
	static int32_t t51 = 0;

	t51 = (x205==((x206==x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MAX;
	static volatile int64_t x210 = INT64_MIN;
	int16_t x211 = INT16_MIN;

	t52 = (x209==((x210==x211)<x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	static int64_t x214 = INT64_MAX;
	int16_t x215 = INT16_MAX;
	int32_t x216 = INT32_MIN;
	int32_t t53 = -234985;

	t53 = (x213==((x214==x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	static int16_t x218 = -1;
	int32_t x220 = -1;
	int32_t t54 = 0;

	t54 = (x217==((x218==x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x222 = 37U;
	static uint32_t x223 = UINT32_MAX;
	uint32_t x224 = 4297U;
	static volatile int32_t t55 = -10;

	t55 = (x221==((x222==x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = INT32_MIN;
	uint32_t x227 = UINT32_MAX;
	uint32_t x228 = UINT32_MAX;
	int32_t t56 = 291485;

	t56 = (x225==((x226==x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	static uint8_t x230 = 21U;
	int16_t x231 = 11251;

	t57 = (x229==((x230==x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	int32_t t58 = 382;

	t58 = (x233==((x234==x235)<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = INT8_MIN;
	int32_t x238 = INT32_MIN;
	uint16_t x239 = 7532U;
	static volatile int16_t x240 = 59;
	volatile int32_t t59 = 19;

	t59 = (x237==((x238==x239)<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x242 = INT16_MIN;
	static int32_t x243 = -5785;
	volatile int32_t x244 = -1;

	t60 = (x241==((x242==x243)<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -1;
	volatile uint64_t x246 = 2982LLU;
	static int64_t x248 = 55584955LL;
	static volatile int32_t t61 = -3;

	t61 = (x245==((x246==x247)<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = -1;
	int16_t x251 = INT16_MAX;
	int16_t x252 = INT16_MIN;
	int32_t t62 = -107740;

	t62 = (x249==((x250==x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x253 = 0U;
	int8_t x254 = INT8_MAX;
	int16_t x255 = INT16_MIN;
	uint8_t x256 = UINT8_MAX;
	int32_t t63 = -142035205;

	t63 = (x253==((x254==x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x257 = INT8_MIN;
	uint16_t x258 = 23U;
	volatile int32_t t64 = -3878764;

	t64 = (x257==((x258==x259)<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 158;
	uint16_t x262 = UINT16_MAX;
	uint16_t x263 = UINT16_MAX;
	int32_t t65 = -1059555;

	t65 = (x261==((x262==x263)<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 3062049934933032513LLU;
	static int8_t x267 = -17;
	volatile uint8_t x268 = 19U;
	int32_t t66 = -6;

	t66 = (x265==((x266==x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	uint8_t x272 = 2U;
	int32_t t67 = 401882730;

	t67 = (x269==((x270==x271)<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MIN;
	int16_t x275 = -1;
	static int8_t x276 = INT8_MIN;
	static int32_t t68 = 5;

	t68 = (x273==((x274==x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = 110015835728320176LLU;
	volatile int32_t x279 = INT32_MIN;
	int32_t t69 = 1853;

	t69 = (x277==((x278==x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x283 = -4;
	uint64_t x284 = 7LLU;
	static volatile int32_t t70 = -1041220;

	t70 = (x281==((x282==x283)<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MAX;
	int16_t x287 = -3;
	static uint16_t x288 = UINT16_MAX;
	static int32_t t71 = -5607;

	t71 = (x285==((x286==x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = -1996;
	volatile int32_t t72 = 28091442;

	t72 = (x289==((x290==x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x294 = INT8_MIN;
	volatile int32_t t73 = 14782597;

	t73 = (x293==((x294==x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	volatile int16_t x300 = INT16_MIN;
	int32_t t74 = -32042070;

	t74 = (x297==((x298==x299)<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = -2234;
	static int32_t t75 = -22;

	t75 = (x301==((x302==x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x305 = 539775642U;
	volatile uint32_t x306 = UINT32_MAX;
	int16_t x307 = -1;
	int8_t x308 = -13;
	int32_t t76 = 1012750;

	t76 = (x305==((x306==x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = 5549;
	uint64_t x310 = 114729083LLU;
	int64_t x311 = -1LL;

	t77 = (x309==((x310==x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x313 = -1LL;
	int16_t x314 = INT16_MIN;
	static int64_t x315 = INT64_MAX;
	volatile uint16_t x316 = 849U;

	t78 = (x313==((x314==x315)<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = 2;
	uint16_t x319 = UINT16_MAX;
	int8_t x320 = -1;
	int32_t t79 = 3928;

	t79 = (x317==((x318==x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = 46U;
	int64_t x322 = -1LL;
	int32_t x324 = -1;

	t80 = (x321==((x322==x323)<x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MIN;
	int8_t x327 = 19;
	static volatile int32_t x328 = INT32_MAX;
	int32_t t81 = -5;

	t81 = (x325==((x326==x327)<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = -93790586LL;
	static uint8_t x331 = 7U;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = 341255;

	t82 = (x329==((x330==x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int32_t x334 = INT32_MIN;
	int32_t x335 = INT32_MIN;
	static int32_t x336 = 854;
	static int32_t t83 = -813738;

	t83 = (x333==((x334==x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MIN;
	int64_t x339 = INT64_MAX;
	int32_t t84 = 7159561;

	t84 = (x337==((x338==x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = -1;
	volatile uint8_t x342 = UINT8_MAX;
	uint64_t x344 = 2952723LLU;
	volatile int32_t t85 = -605;

	t85 = (x341==((x342==x343)<x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -1;
	volatile int16_t x347 = -1;
	uint16_t x348 = 99U;
	int32_t t86 = 157249;

	t86 = (x345==((x346==x347)<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	int32_t x350 = -517190;
	volatile int32_t t87 = -4445;

	t87 = (x349==((x350==x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int64_t x355 = 12517092LL;
	int32_t x356 = INT32_MIN;
	int32_t t88 = -4;

	t88 = (x353==((x354==x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	static volatile int16_t x358 = -1;
	uint16_t x359 = 4U;

	t89 = (x357==((x358==x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = -38;
	static int8_t x362 = INT8_MAX;
	volatile uint32_t x363 = 178U;
	int64_t x364 = 9LL;

	t90 = (x361==((x362==x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = -1LL;
	volatile int32_t x366 = 45;
	int8_t x368 = INT8_MIN;
	volatile int32_t t91 = -11;

	t91 = (x365==((x366==x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = 7582659048771LLU;
	static int64_t x370 = INT64_MIN;
	int8_t x371 = -1;
	volatile int32_t t92 = 908;

	t92 = (x369==((x370==x371)<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = 2;
	uint8_t x374 = UINT8_MAX;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = INT8_MIN;
	int32_t t93 = 2232;

	t93 = (x373==((x374==x375)<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	uint64_t x378 = 2898713722653454894LLU;
	int16_t x379 = INT16_MIN;
	static int8_t x380 = INT8_MIN;

	t94 = (x377==((x378==x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	int8_t x382 = -1;
	volatile int64_t x383 = INT64_MIN;
	static int64_t x384 = 12239LL;
	int32_t t95 = -790;

	t95 = (x381==((x382==x383)<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x386 = UINT64_MAX;
	int64_t x387 = INT64_MIN;
	static volatile int32_t t96 = -56;

	t96 = (x385==((x386==x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 0U;
	int64_t x391 = 139857397LL;
	static volatile int64_t x392 = -514129LL;
	static volatile int32_t t97 = -6227328;

	t97 = (x389==((x390==x391)<x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = INT8_MIN;
	int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t98 = 51;

	t98 = (x393==((x394==x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x399 = INT8_MIN;
	uint16_t x400 = 3213U;
	volatile int32_t t99 = -1643;

	t99 = (x397==((x398==x399)<x400));

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

