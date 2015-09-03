#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int64_t x6 = -1LL;
int64_t x7 = 13722314771612217LL;
volatile uint32_t x15 = 7860U;
int32_t x18 = INT32_MAX;
volatile uint8_t x31 = 47U;
uint64_t x33 = 28944922836890656LLU;
volatile int32_t x36 = INT32_MAX;
static uint8_t x37 = 3U;
volatile uint8_t x38 = UINT8_MAX;
int32_t x39 = INT32_MIN;
int8_t x40 = INT8_MIN;
int32_t x41 = -1;
int64_t x45 = 2986280347LL;
uint8_t x57 = 0U;
volatile uint8_t x60 = UINT8_MAX;
int32_t x64 = -469841;
int16_t x66 = INT16_MIN;
int16_t x69 = 1;
uint64_t x78 = 27060273LLU;
static int64_t x85 = 11562LL;
volatile uint16_t x86 = UINT16_MAX;
int16_t x88 = INT16_MAX;
int32_t x91 = 28;
int16_t x99 = INT16_MIN;
int32_t x102 = INT32_MIN;
int32_t t25 = -816912;
int64_t t26 = INT64_MIN;
int16_t x110 = INT16_MIN;
int64_t x113 = -1LL;
volatile int32_t x115 = -1;
uint32_t x118 = 262386U;
int32_t x125 = INT32_MIN;
static volatile uint64_t t31 = 119623542551LLU;
volatile int32_t t32 = -596698;
int32_t x134 = -7;
volatile uint64_t x135 = 65LLU;
volatile int32_t t34 = -3709;
static int32_t x143 = 40111959;
volatile int32_t t36 = 4688618;
int8_t x163 = INT8_MIN;
int64_t x164 = INT64_MIN;
static volatile uint64_t t41 = 6249073259951164033LLU;
uint16_t x175 = UINT16_MAX;
int16_t x178 = -750;
int32_t x179 = INT32_MIN;
uint32_t x184 = UINT32_MAX;
uint32_t t45 = UINT32_MAX;
int16_t x190 = INT16_MIN;
volatile int16_t x196 = INT16_MAX;
static volatile uint8_t x197 = 5U;
volatile int16_t x199 = 333;
int64_t x203 = 1022150848618LL;
int32_t t53 = -9461846;
int64_t t54 = 469909465076865090LL;
uint32_t x221 = 343230U;
int64_t x227 = INT64_MIN;
static int64_t x230 = -2617615LL;
int64_t t57 = INT64_MIN;
volatile uint16_t x233 = UINT16_MAX;
uint64_t x236 = 84078079052071LLU;
volatile int16_t x238 = INT16_MIN;
int8_t x243 = INT8_MIN;
volatile uint32_t x248 = 0U;
static volatile uint32_t t61 = 1691002U;
int32_t x250 = -1;
volatile int64_t t63 = -435937433771LL;
int8_t x260 = INT8_MAX;
int32_t x261 = INT32_MIN;
uint8_t x264 = 27U;
int32_t t66 = INT32_MIN;
uint16_t x269 = 102U;
int32_t t67 = -334381881;
int32_t t68 = -400640;
uint64_t x277 = 246711663LLU;
volatile int32_t t72 = 89047189;
static uint64_t x301 = UINT64_MAX;
uint8_t x307 = 0U;
int8_t x318 = INT8_MIN;
static int32_t x326 = -1;
int8_t x333 = 12;
int16_t x334 = 262;
volatile int64_t x336 = 714256365687715422LL;
uint8_t x339 = UINT8_MAX;
volatile int32_t t84 = 526132214;
int64_t x347 = -172089539LL;
int32_t x354 = -1;
uint8_t x362 = 108U;
static int32_t x364 = -1;
int32_t t89 = -7299629;
uint8_t x365 = UINT8_MAX;
static int32_t x369 = 1017264352;
int32_t x371 = INT32_MIN;
int32_t x372 = -1;
volatile uint64_t x383 = UINT64_MAX;
int32_t t94 = INT32_MIN;
static int32_t t95 = 3881285;
uint32_t x392 = 5632726U;
int8_t x393 = INT8_MIN;
static volatile uint16_t x396 = UINT16_MAX;
volatile int32_t t97 = -103;
static int16_t x403 = -1;


void f0(void) {
	static int8_t x1 = -36;
	static int8_t x2 = INT8_MIN;
	uint8_t x4 = UINT8_MAX;
	static int32_t t0 = -5182127;

	t0 = ((x1<=(x2==x3))+x4);

	if (t0 != 256) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	static int64_t x8 = 237073892469407703LL;
	int64_t t1 = 24793307829LL;

	t1 = ((x5<=(x6==x7))+x8);

	if (t1 != 237073892469407704LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	int8_t x10 = 3;
	uint16_t x11 = 24U;
	int32_t x12 = -1;
	int32_t t2 = -26;

	t2 = ((x9<=(x10==x11))+x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = INT16_MAX;
	volatile int32_t x16 = -30843;
	volatile int32_t t3 = 34501543;

	t3 = ((x13<=(x14==x15))+x16);

	if (t3 != -30842) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint16_t x19 = 236U;
	volatile uint8_t x20 = 10U;
	static int32_t t4 = -65;

	t4 = ((x17<=(x18==x19))+x20);

	if (t4 != 11) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 8U;
	int32_t x22 = -2;
	volatile int8_t x23 = INT8_MIN;
	int16_t x24 = -55;
	int32_t t5 = 180;

	t5 = ((x21<=(x22==x23))+x24);

	if (t5 != -55) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	volatile int64_t x26 = INT64_MIN;
	int32_t x27 = -1;
	static int32_t x28 = -1;
	volatile int32_t t6 = -52;

	t6 = ((x25<=(x26==x27))+x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	uint64_t x32 = 447015LLU;
	volatile uint64_t t7 = 36435140191LLU;

	t7 = ((x29<=(x30==x31))+x32);

	if (t7 != 447016LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x34 = 19U;
	int8_t x35 = -17;
	volatile int32_t t8 = INT32_MAX;

	t8 = ((x33<=(x34==x35))+x36);

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t t9 = -15439636;

	t9 = ((x37<=(x38==x39))+x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x42 = UINT64_MAX;
	int32_t x43 = INT32_MAX;
	uint16_t x44 = 3868U;
	volatile int32_t t10 = -473;

	t10 = ((x41<=(x42==x43))+x44);

	if (t10 != 3869) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	volatile int16_t x47 = INT16_MIN;
	volatile uint8_t x48 = 16U;
	int32_t t11 = 1;

	t11 = ((x45<=(x46==x47))+x48);

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 1U;
	uint16_t x50 = 11079U;
	int8_t x51 = INT8_MIN;
	int64_t x52 = INT64_MIN;
	int64_t t12 = INT64_MIN;

	t12 = ((x49<=(x50==x51))+x52);

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MAX;
	int64_t x54 = 48353548LL;
	volatile int16_t x55 = INT16_MAX;
	int8_t x56 = -1;
	int32_t t13 = 64;

	t13 = ((x53<=(x54==x55))+x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -1;
	uint32_t x59 = UINT32_MAX;
	int32_t t14 = 58;

	t14 = ((x57<=(x58==x59))+x60);

	if (t14 != 256) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	int8_t x62 = INT8_MAX;
	uint16_t x63 = UINT16_MAX;
	volatile int32_t t15 = 15859;

	t15 = ((x61<=(x62==x63))+x64);

	if (t15 != -469840) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 11;
	int8_t x67 = -1;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = ((x65<=(x66==x67))+x68);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -1;
	uint8_t x71 = 1U;
	static int32_t x72 = INT32_MIN;
	int32_t t17 = INT32_MIN;

	t17 = ((x69<=(x70==x71))+x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 381463500330242LLU;
	int64_t x74 = INT64_MIN;
	static volatile int32_t x75 = -18282890;
	static uint16_t x76 = 5900U;
	volatile int32_t t18 = -15;

	t18 = ((x73<=(x74==x75))+x76);

	if (t18 != 5900) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 1;
	int8_t x79 = 2;
	int32_t x80 = -1;
	volatile int32_t t19 = -2;

	t19 = ((x77<=(x78==x79))+x80);

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	static uint64_t x82 = UINT64_MAX;
	volatile int32_t x83 = -1;
	uint32_t x84 = UINT32_MAX;
	uint32_t t20 = UINT32_MAX;

	t20 = ((x81<=(x82==x83))+x84);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x87 = 31U;
	volatile int32_t t21 = -2058393;

	t21 = ((x85<=(x86==x87))+x88);

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MIN;
	uint64_t x90 = UINT64_MAX;
	uint8_t x92 = 64U;
	int32_t t22 = -1;

	t22 = ((x89<=(x90==x91))+x92);

	if (t22 != 65) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -4374208080021427LL;
	int64_t x94 = -1LL;
	static uint32_t x95 = UINT32_MAX;
	uint64_t x96 = 3821161479176851LLU;
	volatile uint64_t t23 = 1418217LLU;

	t23 = ((x93<=(x94==x95))+x96);

	if (t23 != 3821161479176852LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = -1;
	int64_t x98 = INT64_MIN;
	static int16_t x100 = -1;
	static int32_t t24 = -79726146;

	t24 = ((x97<=(x98==x99))+x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = 10;
	static int32_t x103 = INT32_MIN;
	int16_t x104 = -1;

	t25 = ((x101<=(x102==x103))+x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = 168;
	static volatile int32_t x106 = -1;
	volatile int8_t x107 = 0;
	int64_t x108 = INT64_MIN;

	t26 = ((x105<=(x106==x107))+x108);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 4167693790604629LLU;
	volatile uint8_t x111 = 18U;
	int32_t x112 = INT32_MIN;
	static volatile int32_t t27 = INT32_MIN;

	t27 = ((x109<=(x110==x111))+x112);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x114 = INT16_MIN;
	uint16_t x116 = 9776U;
	int32_t t28 = -6042678;

	t28 = ((x113<=(x114==x115))+x116);

	if (t28 != 9777) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static int8_t x119 = 0;
	static int32_t x120 = -1;
	int32_t t29 = 1;

	t29 = ((x117<=(x118==x119))+x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = 9970581743819LLU;
	uint8_t x122 = 0U;
	uint64_t x123 = 0LLU;
	int8_t x124 = INT8_MIN;
	volatile int32_t t30 = 189105;

	t30 = ((x121<=(x122==x123))+x124);

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = -1;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = 7182827970LLU;

	t31 = ((x125<=(x126==x127))+x128);

	if (t31 != 7182827971LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = -1LL;
	volatile int16_t x131 = INT16_MAX;
	static int32_t x132 = 7909721;

	t32 = ((x129<=(x130==x131))+x132);

	if (t32 != 7909722) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	int16_t x136 = -1;
	static volatile int32_t t33 = 36441;

	t33 = ((x133<=(x134==x135))+x136);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	static volatile int8_t x139 = 0;
	volatile int8_t x140 = INT8_MIN;

	t34 = ((x137<=(x138==x139))+x140);

	if (t34 != -127) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MIN;
	int8_t x142 = -57;
	volatile int32_t x144 = -1;
	static int32_t t35 = 383;

	t35 = ((x141<=(x142==x143))+x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	static uint32_t x146 = 208742U;
	volatile int64_t x147 = 30LL;
	int8_t x148 = INT8_MAX;

	t36 = ((x145<=(x146==x147))+x148);

	if (t36 != 127) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x149 = INT32_MAX;
	volatile int8_t x150 = -31;
	volatile uint32_t x151 = UINT32_MAX;
	int64_t x152 = 9LL;
	volatile int64_t t37 = -7LL;

	t37 = ((x149<=(x150==x151))+x152);

	if (t37 != 9LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 43;
	static uint8_t x154 = 2U;
	static int8_t x155 = -1;
	int16_t x156 = -1;
	volatile int32_t t38 = -348441;

	t38 = ((x153<=(x154==x155))+x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = INT8_MAX;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = 743438U;
	volatile uint32_t t39 = 39U;

	t39 = ((x157<=(x158==x159))+x160);

	if (t39 != 743439U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = 12702LL;
	volatile int64_t t40 = -168665LL;

	t40 = ((x161<=(x162==x163))+x164);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	uint64_t x166 = 938299668614274284LLU;
	uint64_t x167 = 1814038496713100403LLU;
	uint64_t x168 = UINT64_MAX;

	t41 = ((x165<=(x166==x167))+x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x169 = -1LL;
	uint16_t x170 = UINT16_MAX;
	uint8_t x171 = 2U;
	uint64_t x172 = 8343888399LLU;
	volatile uint64_t t42 = 11450276LLU;

	t42 = ((x169<=(x170==x171))+x172);

	if (t42 != 8343888400LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	uint32_t x174 = 13U;
	volatile uint32_t x176 = 90245U;
	volatile uint32_t t43 = 29279U;

	t43 = ((x173<=(x174==x175))+x176);

	if (t43 != 90246U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x177 = UINT32_MAX;
	uint64_t x180 = 16127LLU;
	volatile uint64_t t44 = 4LLU;

	t44 = ((x177<=(x178==x179))+x180);

	if (t44 != 16127LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	static int8_t x182 = -1;
	int8_t x183 = INT8_MAX;

	t45 = ((x181<=(x182==x183))+x184);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int64_t x186 = INT64_MAX;
	int32_t x187 = -225;
	uint32_t x188 = UINT32_MAX;
	uint32_t t46 = 24U;

	t46 = ((x185<=(x186==x187))+x188);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -101353349LL;
	uint32_t x191 = 61420276U;
	volatile int64_t x192 = -1LL;
	volatile int64_t t47 = -2160444647329765LL;

	t47 = ((x189<=(x190==x191))+x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 10634;
	static int16_t x194 = -1;
	static int16_t x195 = 238;
	int32_t t48 = -9937;

	t48 = ((x193<=(x194==x195))+x196);

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t49 = INT32_MIN;

	t49 = ((x197<=(x198==x199))+x200);

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int8_t x202 = INT8_MAX;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = -21914;

	t50 = ((x201<=(x202==x203))+x204);

	if (t50 != 256) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 88U;
	uint8_t x206 = 7U;
	static uint32_t x207 = UINT32_MAX;
	int32_t x208 = -40;
	int32_t t51 = 1561819;

	t51 = ((x205<=(x206==x207))+x208);

	if (t51 != -40) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 1LL;
	volatile int32_t x210 = -13;
	int32_t x211 = INT32_MIN;
	uint64_t x212 = 233877530712678060LLU;
	volatile uint64_t t52 = 1LLU;

	t52 = ((x209<=(x210==x211))+x212);

	if (t52 != 233877530712678060LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static volatile uint16_t x214 = 13203U;
	uint8_t x215 = 2U;
	static int16_t x216 = -1;

	t53 = ((x213<=(x214==x215))+x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	volatile int16_t x218 = INT16_MIN;
	volatile int16_t x219 = -1;
	int64_t x220 = -1LL;

	t54 = ((x217<=(x218==x219))+x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = 700572LL;
	int16_t x223 = INT16_MIN;
	uint16_t x224 = 16653U;
	volatile int32_t t55 = -1;

	t55 = ((x221<=(x222==x223))+x224);

	if (t55 != 16653) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint8_t x225 = 55U;
	int16_t x226 = INT16_MIN;
	int32_t x228 = 3372;
	int32_t t56 = -49;

	t56 = ((x225<=(x226==x227))+x228);

	if (t56 != 3372) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 3U;
	volatile uint16_t x231 = 19U;
	static volatile int64_t x232 = INT64_MIN;

	t57 = ((x229<=(x230==x231))+x232);

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = INT8_MIN;
	volatile int16_t x235 = 233;
	uint64_t t58 = 42993088328LLU;

	t58 = ((x233<=(x234==x235))+x236);

	if (t58 != 84078079052071LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	uint8_t x239 = 1U;
	int16_t x240 = -1;
	volatile int32_t t59 = -831;

	t59 = ((x237<=(x238==x239))+x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 16U;
	volatile int64_t x242 = INT64_MIN;
	volatile int64_t x244 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = ((x241<=(x242==x243))+x244);

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	static int64_t x246 = -5808LL;
	int64_t x247 = -1LL;

	t61 = ((x245<=(x246==x247))+x248);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = -1LL;
	volatile uint32_t x251 = 628901U;
	uint16_t x252 = 437U;
	volatile int32_t t62 = -3;

	t62 = ((x249<=(x250==x251))+x252);

	if (t62 != 438) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = -1;
	volatile int8_t x254 = -1;
	int64_t x255 = INT64_MIN;
	int64_t x256 = INT64_MIN;

	t63 = ((x253<=(x254==x255))+x256);

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 1424669962913LLU;
	uint32_t x258 = 25542020U;
	int32_t x259 = 1;
	volatile int32_t t64 = 11;

	t64 = ((x257<=(x258==x259))+x260);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	uint64_t x263 = UINT64_MAX;
	int32_t t65 = -462;

	t65 = ((x261<=(x262==x263))+x264);

	if (t65 != 28) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = 3269389;
	uint16_t x266 = UINT16_MAX;
	uint64_t x267 = 16474771375075824LLU;
	volatile int32_t x268 = INT32_MIN;

	t66 = ((x265<=(x266==x267))+x268);

	if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	int8_t x272 = INT8_MAX;

	t67 = ((x269<=(x270==x271))+x272);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MAX;
	int32_t x275 = -1;
	int16_t x276 = -1;

	t68 = ((x273<=(x274==x275))+x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = INT16_MIN;
	int64_t x279 = -1LL;
	int8_t x280 = INT8_MIN;
	static int32_t t69 = -25;

	t69 = ((x277<=(x278==x279))+x280);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -3;
	int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MAX;
	int8_t x284 = INT8_MIN;
	int32_t t70 = -472831699;

	t70 = ((x281<=(x282==x283))+x284);

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MAX;
	int16_t x287 = -294;
	static int8_t x288 = -9;
	int32_t t71 = -1;

	t71 = ((x285<=(x286==x287))+x288);

	if (t71 != -9) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int64_t x290 = INT64_MIN;
	uint32_t x291 = 26165313U;
	int16_t x292 = INT16_MAX;

	t72 = ((x289<=(x290==x291))+x292);

	if (t72 != 32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	volatile int64_t x294 = -1LL;
	uint8_t x295 = UINT8_MAX;
	volatile int64_t x296 = -1LL;
	volatile int64_t t73 = -2743902071LL;

	t73 = ((x293<=(x294==x295))+x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = UINT8_MAX;
	volatile int8_t x298 = INT8_MIN;
	int8_t x299 = 8;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x297<=(x298==x299))+x300);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = 305LL;
	static volatile uint32_t x303 = 1919U;
	int8_t x304 = 0;
	volatile int32_t t75 = 2;

	t75 = ((x301<=(x302==x303))+x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 30U;
	uint16_t x306 = 27U;
	uint64_t x308 = 154611LLU;
	static uint64_t t76 = 885864887888LLU;

	t76 = ((x305<=(x306==x307))+x308);

	if (t76 != 154611LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x313 = 25U;
	volatile uint32_t x314 = 13160U;
	uint16_t x315 = 200U;
	static int8_t x316 = -1;
	static volatile int32_t t77 = -1943592;

	t77 = ((x313<=(x314==x315))+x316);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 20U;
	int64_t x319 = INT64_MIN;
	int16_t x320 = -1;
	int32_t t78 = 11;

	t78 = ((x317<=(x318==x319))+x320);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MIN;
	static uint64_t x323 = 15622LLU;
	uint32_t x324 = 23915578U;
	static uint32_t t79 = 4U;

	t79 = ((x321<=(x322==x323))+x324);

	if (t79 != 23915578U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = -1LL;
	int32_t x327 = -1;
	volatile int8_t x328 = INT8_MIN;
	int32_t t80 = 3;

	t80 = ((x325<=(x326==x327))+x328);

	if (t80 != -127) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = 43;
	int16_t x330 = 1547;
	static int64_t x331 = -1LL;
	static int32_t x332 = INT32_MIN;
	int32_t t81 = INT32_MIN;

	t81 = ((x329<=(x330==x331))+x332);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x335 = 15009;
	int64_t t82 = 1763801501726LL;

	t82 = ((x333<=(x334==x335))+x336);

	if (t82 != 714256365687715422LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 0U;
	int64_t x338 = -1LL;
	int32_t x340 = -1;
	static int32_t t83 = 63677628;

	t83 = ((x337<=(x338==x339))+x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	int32_t x342 = -1;
	int8_t x343 = INT8_MIN;
	static uint8_t x344 = 0U;

	t84 = ((x341<=(x342==x343))+x344);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = -190;
	uint64_t x346 = UINT64_MAX;
	static volatile int16_t x348 = INT16_MIN;
	static volatile int32_t t85 = 258758661;

	t85 = ((x345<=(x346==x347))+x348);

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MAX;
	int32_t x350 = 2636524;
	volatile int32_t x351 = -1;
	uint16_t x352 = 1U;
	volatile int32_t t86 = 2;

	t86 = ((x349<=(x350==x351))+x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x353 = -58;
	uint32_t x355 = UINT32_MAX;
	static int8_t x356 = INT8_MIN;
	volatile int32_t t87 = -1;

	t87 = ((x353<=(x354==x355))+x356);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x357 = 455LLU;
	volatile uint8_t x358 = 7U;
	uint64_t x359 = 7185246271388544344LLU;
	uint16_t x360 = 1310U;
	int32_t t88 = -10835284;

	t88 = ((x357<=(x358==x359))+x360);

	if (t88 != 1310) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x361 = UINT64_MAX;
	uint64_t x363 = 507725LLU;

	t89 = ((x361<=(x362==x363))+x364);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x366 = 332221604066300083LLU;
	int16_t x367 = -1;
	int8_t x368 = 5;
	static int32_t t90 = -78;

	t90 = ((x365<=(x366==x367))+x368);

	if (t90 != 5) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x370 = -1;
	volatile int32_t t91 = 319416;

	t91 = ((x369<=(x370==x371))+x372);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	volatile int32_t x375 = INT32_MAX;
	int64_t x376 = -1LL;
	int64_t t92 = 55783661831LL;

	t92 = ((x373<=(x374==x375))+x376);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x377 = -19031242002560LL;
	int16_t x378 = INT16_MIN;
	int16_t x379 = INT16_MAX;
	int64_t x380 = -1LL;
	static int64_t t93 = 6119641459LL;

	t93 = ((x377<=(x378==x379))+x380);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = 180;
	static volatile int32_t x382 = INT32_MIN;
	int32_t x384 = INT32_MIN;

	t94 = ((x381<=(x382==x383))+x384);

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = UINT64_MAX;
	static int8_t x386 = INT8_MAX;
	uint64_t x387 = 1368LLU;
	int16_t x388 = 15966;

	t95 = ((x385<=(x386==x387))+x388);

	if (t95 != 15966) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x389 = INT32_MIN;
	volatile int32_t x390 = 76;
	int16_t x391 = -665;
	static uint32_t t96 = 107522066U;

	t96 = ((x389<=(x390==x391))+x392);

	if (t96 != 5632727U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x394 = -413586211LL;
	static uint64_t x395 = 38166LLU;

	t97 = ((x393<=(x394==x395))+x396);

	if (t97 != 65536) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -1;
	uint8_t x398 = UINT8_MAX;
	int16_t x399 = -1;
	static uint8_t x400 = UINT8_MAX;
	int32_t t98 = -998;

	t98 = ((x397<=(x398==x399))+x400);

	if (t98 != 256) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x401 = UINT32_MAX;
	int32_t x402 = INT32_MIN;
	int64_t x404 = INT64_MIN;
	static int64_t t99 = INT64_MIN;

	t99 = ((x401<=(x402==x403))+x404);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

