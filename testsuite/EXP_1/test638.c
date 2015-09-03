#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = UINT16_MAX;
uint32_t x5 = 387653461U;
volatile uint8_t x13 = 2U;
int16_t x34 = -1;
volatile uint64_t t7 = 739684827851LLU;
volatile int8_t x38 = -1;
volatile int32_t x42 = INT32_MIN;
uint64_t x48 = 566085LLU;
volatile uint64_t t10 = 43989516557906LLU;
uint64_t x49 = UINT64_MAX;
static uint64_t x51 = 2276366463425752LLU;
uint16_t x55 = 6U;
static int32_t x60 = -1;
int64_t t15 = 3091588LL;
int16_t x71 = INT16_MIN;
volatile int64_t x73 = INT64_MIN;
uint16_t x82 = 14U;
static int64_t x84 = -39656327LL;
volatile int64_t t19 = -18403LL;
uint32_t x85 = UINT32_MAX;
static int32_t x91 = INT32_MAX;
volatile int32_t x92 = -1;
int64_t x100 = -1230974708351004727LL;
uint64_t t23 = 4964291044570622678LLU;
int32_t x117 = -1;
static int16_t x128 = -42;
uint32_t x141 = UINT32_MAX;
int8_t x151 = -1;
volatile int16_t x158 = INT16_MIN;
volatile uint32_t t37 = 67U;
static uint32_t t40 = 2U;
uint8_t x173 = 30U;
int16_t x176 = -1;
uint8_t x188 = UINT8_MAX;
volatile int32_t x196 = INT32_MIN;
int8_t x201 = -1;
uint8_t x205 = 5U;
int16_t x209 = 882;
uint64_t x212 = 81980LLU;
volatile uint64_t t49 = 506287LLU;
int32_t t50 = 0;
static int32_t x220 = INT32_MAX;
int8_t x224 = 56;
uint64_t x226 = 129540567691516LLU;
uint32_t x228 = UINT32_MAX;
int16_t x230 = 5;
int8_t x242 = INT8_MAX;
uint16_t x243 = 821U;
volatile uint32_t x251 = 1491U;
volatile int32_t t60 = 0;
static uint16_t x257 = 11395U;
uint8_t x258 = UINT8_MAX;
uint16_t x264 = 3U;
static int32_t x266 = INT32_MAX;
volatile int8_t x271 = INT8_MIN;
int16_t x284 = INT16_MIN;
volatile int64_t t67 = 589LL;
uint64_t x289 = 349015LLU;
volatile uint64_t t69 = 475LLU;
static int8_t x299 = INT8_MIN;
static int8_t x301 = 30;
int64_t t72 = 10364LL;
static int32_t x307 = INT32_MIN;
volatile int16_t x308 = INT16_MAX;
uint16_t x309 = 8001U;
int8_t x310 = -1;
int64_t x312 = -54397397402LL;
int64_t x319 = -1241577755150LL;
uint16_t x322 = UINT16_MAX;
static int16_t x323 = 3;
int64_t t78 = 0LL;
int32_t x338 = INT32_MIN;
int8_t x345 = 20;
volatile uint8_t x346 = 1U;
int16_t x353 = INT16_MAX;
volatile int64_t x355 = -3LL;
uint64_t x356 = UINT64_MAX;
static int8_t x365 = 33;
uint32_t x367 = 6237938U;
int32_t x373 = INT32_MAX;
int8_t x377 = -1;
static int64_t x394 = INT64_MIN;
int8_t x396 = INT8_MIN;
int64_t t93 = -82437903851509LL;
static uint32_t x398 = UINT32_MAX;
int64_t t94 = -13LL;
int16_t x404 = -1;
volatile int64_t t95 = -190760007598751877LL;
int16_t x409 = INT16_MIN;
uint8_t x420 = 5U;


void f0(void) {
	static volatile int64_t x1 = INT64_MAX;
	static int32_t x3 = INT32_MIN;
	static uint64_t x4 = 16585323582720451LLU;
	volatile uint64_t t0 = 2845417LLU;

	t0 = (((x1/x2)&x3)+x4);

	if (t0 != 16726063218559427LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	int64_t x7 = 488589486759735837LL;
	uint16_t x8 = 132U;
	int64_t t1 = 3LL;

	t1 = (((x5/x6)&x7)+x8);

	if (t1 != 132LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	int8_t x10 = 4;
	int8_t x11 = INT8_MIN;
	volatile int64_t x12 = INT64_MAX;
	volatile int64_t t2 = INT64_MAX;

	t2 = (((x9/x10)&x11)+x12);

	if (t2 != INT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x14 = UINT32_MAX;
	static int8_t x15 = -1;
	int64_t x16 = INT64_MAX;
	int64_t t3 = INT64_MAX;

	t3 = (((x13/x14)&x15)+x16);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -2;
	int64_t x18 = INT64_MAX;
	uint64_t x19 = 5194223LLU;
	volatile int16_t x20 = INT16_MIN;
	uint64_t t4 = 3900127561910948LLU;

	t4 = (((x17/x18)&x19)+x20);

	if (t4 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 511U;
	int64_t x22 = INT64_MIN;
	uint32_t x23 = 980387212U;
	volatile int32_t x24 = -169424269;
	static volatile int64_t t5 = 59099388079LL;

	t5 = (((x21/x22)&x23)+x24);

	if (t5 != -169424269LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -19;
	uint64_t x30 = 8161LLU;
	int16_t x31 = INT16_MIN;
	volatile int64_t x32 = -3011050LL;
	uint64_t t6 = 9859930992219LLU;

	t6 = (((x29/x30)&x31)+x32);

	if (t6 != 2260353394085398LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	static volatile int64_t x35 = INT64_MIN;
	uint32_t x36 = 24350359U;

	t7 = (((x33/x34)&x35)+x36);

	if (t7 != 24350359LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -3297334LL;
	int16_t x39 = INT16_MAX;
	static uint16_t x40 = UINT16_MAX;
	volatile int64_t t8 = -55754755278866848LL;

	t8 = (((x37/x38)&x39)+x40);

	if (t8 != 86069LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -1;
	int8_t x43 = INT8_MAX;
	static int16_t x44 = -1;
	static int32_t t9 = -705;

	t9 = (((x41/x42)&x43)+x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x45 = UINT16_MAX;
	uint64_t x46 = 228041094606732014LLU;
	int32_t x47 = INT32_MAX;

	t10 = (((x45/x46)&x47)+x48);

	if (t10 != 566085LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x50 = INT64_MIN;
	static int16_t x52 = INT16_MAX;
	uint64_t t11 = 2241779150470301LLU;

	t11 = (((x49/x50)&x51)+x52);

	if (t11 != 32767LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 69U;
	int8_t x54 = INT8_MAX;
	int32_t x56 = INT32_MAX;
	static int32_t t12 = INT32_MAX;

	t12 = (((x53/x54)&x55)+x56);

	if (t12 != INT32_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MIN;
	uint64_t x58 = 239734481653163LLU;
	uint16_t x59 = 3351U;
	volatile uint64_t t13 = 1049LLU;

	t13 = (((x57/x58)&x59)+x60);

	if (t13 != 3089LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MIN;
	volatile int64_t x63 = 474LL;
	int32_t x64 = -1;
	volatile int64_t t14 = 6299629716235290LL;

	t14 = (((x61/x62)&x63)+x64);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	static volatile int8_t x66 = -1;
	volatile int16_t x67 = -11;
	static volatile int32_t x68 = 847704;

	t15 = (((x65/x66)&x67)+x68);

	if (t15 != -9223372036853928103LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 54U;
	int32_t x70 = -1474;
	volatile uint8_t x72 = UINT8_MAX;
	static volatile int32_t t16 = -457;

	t16 = (((x69/x70)&x71)+x72);

	if (t16 != 255) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x74 = UINT64_MAX;
	uint16_t x75 = 31188U;
	uint32_t x76 = 17239078U;
	volatile uint64_t t17 = 1449408LLU;

	t17 = (((x73/x74)&x75)+x76);

	if (t17 != 17239078LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MIN;
	uint8_t x78 = 1U;
	uint64_t x79 = UINT64_MAX;
	int8_t x80 = INT8_MAX;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (((x77/x78)&x79)+x80);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MIN;
	int16_t x83 = INT16_MAX;

	t19 = (((x81/x82)&x83)+x84);

	if (t19 != -39625899LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = -1;
	int64_t x87 = INT64_MAX;
	volatile int16_t x88 = -3897;
	static int64_t t20 = 746323284278938801LL;

	t20 = (((x85/x86)&x87)+x88);

	if (t20 != -3896LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = 0;
	int32_t x90 = INT32_MAX;
	volatile int32_t t21 = 121975819;

	t21 = (((x89/x90)&x91)+x92);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x94 = 3794U;
	volatile uint64_t x95 = 15861825348269170LLU;
	static int16_t x96 = -1;
	static volatile uint64_t t22 = 295716LLU;

	t22 = (((x93/x94)&x95)+x96);

	if (t22 != 532479LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x97 = INT8_MAX;
	static int64_t x98 = -4153902255478560255LL;
	volatile uint64_t x99 = 0LLU;

	t23 = (((x97/x98)&x99)+x100);

	if (t23 != 17215769365358546889LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x101 = 108935U;
	int64_t x102 = 129675LL;
	int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MIN;
	volatile int64_t t24 = 37200851LL;

	t24 = (((x101/x102)&x103)+x104);

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x105 = UINT8_MAX;
	static int32_t x106 = -1;
	int64_t x107 = INT64_MAX;
	volatile int16_t x108 = -1;
	int64_t t25 = -1LL;

	t25 = (((x105/x106)&x107)+x108);

	if (t25 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	uint16_t x110 = UINT16_MAX;
	uint32_t x111 = 8U;
	static int32_t x112 = INT32_MAX;
	volatile uint32_t t26 = 354116458U;

	t26 = (((x109/x110)&x111)+x112);

	if (t26 != 2147483647U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = UINT16_MAX;
	uint8_t x114 = 56U;
	int8_t x115 = INT8_MAX;
	static uint32_t x116 = 101491U;
	uint32_t t27 = 608515959U;

	t27 = (((x113/x114)&x115)+x116);

	if (t27 != 101509U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x118 = INT32_MAX;
	uint64_t x119 = UINT64_MAX;
	static uint16_t x120 = UINT16_MAX;
	volatile uint64_t t28 = 46473143LLU;

	t28 = (((x117/x118)&x119)+x120);

	if (t28 != 65535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = 18;
	static uint64_t x126 = UINT64_MAX;
	static int8_t x127 = INT8_MAX;
	uint64_t t29 = 877937043643734324LLU;

	t29 = (((x125/x126)&x127)+x128);

	if (t29 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x129 = UINT8_MAX;
	uint16_t x130 = 156U;
	volatile int16_t x131 = INT16_MIN;
	uint32_t x132 = 11U;
	volatile uint32_t t30 = 961175U;

	t30 = (((x129/x130)&x131)+x132);

	if (t30 != 11U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x133 = INT32_MAX;
	static int16_t x134 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	static volatile int32_t t31 = -137771905;

	t31 = (((x133/x134)&x135)+x136);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x137 = 0U;
	uint32_t x138 = UINT32_MAX;
	volatile uint8_t x139 = UINT8_MAX;
	volatile int16_t x140 = INT16_MIN;
	uint32_t t32 = 0U;

	t32 = (((x137/x138)&x139)+x140);

	if (t32 != 4294934528U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x142 = 37;
	int32_t x143 = -1;
	int16_t x144 = INT16_MIN;
	volatile uint32_t t33 = 2876881U;

	t33 = (((x141/x142)&x143)+x144);

	if (t33 != 116047429U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x145 = 2U;
	uint64_t x146 = UINT64_MAX;
	volatile uint32_t x147 = 2470848U;
	uint8_t x148 = 1U;
	volatile uint64_t t34 = 14660157491LLU;

	t34 = (((x145/x146)&x147)+x148);

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x149 = 3476376736801746LL;
	static volatile uint64_t x150 = 99089154266459028LLU;
	uint8_t x152 = 39U;
	volatile uint64_t t35 = 9LLU;

	t35 = (((x149/x150)&x151)+x152);

	if (t35 != 39LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = -1;
	volatile int64_t x154 = INT64_MAX;
	static uint8_t x155 = 12U;
	int8_t x156 = -12;
	static volatile int64_t t36 = -46122179978LL;

	t36 = (((x153/x154)&x155)+x156);

	if (t36 != -12LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -80773;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = 11U;

	t37 = (((x157/x158)&x159)+x160);

	if (t37 != 11U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = UINT32_MAX;
	static int64_t x162 = -1LL;
	int8_t x163 = INT8_MAX;
	int32_t x164 = INT32_MAX;
	int64_t t38 = 6LL;

	t38 = (((x161/x162)&x163)+x164);

	if (t38 != 2147483648LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x166 = INT64_MIN;
	static uint16_t x167 = 6U;
	volatile int8_t x168 = INT8_MIN;
	static uint64_t t39 = 1438919LLU;

	t39 = (((x165/x166)&x167)+x168);

	if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = INT8_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile int16_t x172 = INT16_MAX;

	t40 = (((x169/x170)&x171)+x172);

	if (t40 != 16809983U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x174 = INT64_MIN;
	static int8_t x175 = INT8_MAX;
	int64_t t41 = -138861257486LL;

	t41 = (((x173/x174)&x175)+x176);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MAX;
	uint8_t x179 = 27U;
	static volatile int32_t x180 = 434104;
	volatile int64_t t42 = 1752LL;

	t42 = (((x177/x178)&x179)+x180);

	if (t42 != 434104LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x185 = 0U;
	uint64_t x186 = UINT64_MAX;
	static int16_t x187 = INT16_MIN;
	uint64_t t43 = 77608754978LLU;

	t43 = (((x185/x186)&x187)+x188);

	if (t43 != 255LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -1;
	int64_t x190 = INT64_MAX;
	int8_t x191 = 6;
	int16_t x192 = -3;
	volatile int64_t t44 = -7911LL;

	t44 = (((x189/x190)&x191)+x192);

	if (t44 != -3LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	volatile uint8_t x194 = 1U;
	int64_t x195 = INT64_MAX;
	volatile int64_t t45 = 1229933703696415LL;

	t45 = (((x193/x194)&x195)+x196);

	if (t45 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x197 = 239833868LLU;
	volatile int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	volatile uint8_t x200 = 60U;
	volatile uint64_t t46 = 169436789199328LLU;

	t46 = (((x197/x198)&x199)+x200);

	if (t46 != 60LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x202 = -1LL;
	uint64_t x203 = 19LLU;
	static volatile int16_t x204 = INT16_MIN;
	static uint64_t t47 = 69LLU;

	t47 = (((x201/x202)&x203)+x204);

	if (t47 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x206 = INT8_MIN;
	uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 2231345207626192LLU;
	uint64_t t48 = 104966992223419163LLU;

	t48 = (((x205/x206)&x207)+x208);

	if (t48 != 2231345207626192LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x210 = -1LL;
	int8_t x211 = 1;

	t49 = (((x209/x210)&x211)+x212);

	if (t49 != 81980LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	static uint16_t x214 = UINT16_MAX;
	int8_t x215 = INT8_MIN;
	int8_t x216 = -1;

	t50 = (((x213/x214)&x215)+x216);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MIN;
	static int16_t x218 = INT16_MAX;
	volatile int64_t x219 = -1LL;
	volatile int64_t t51 = 2275323142241643455LL;

	t51 = (((x217/x218)&x219)+x220);

	if (t51 != 2147483647LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x221 = -1;
	uint32_t x222 = UINT32_MAX;
	static int64_t x223 = INT64_MIN;
	static int64_t t52 = -457990799021759LL;

	t52 = (((x221/x222)&x223)+x224);

	if (t52 != 56LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x225 = INT8_MAX;
	uint32_t x227 = UINT32_MAX;
	static uint64_t t53 = 1347314076031411960LLU;

	t53 = (((x225/x226)&x227)+x228);

	if (t53 != 4294967295LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = 130;
	volatile uint64_t t54 = 1980667LLU;

	t54 = (((x229/x230)&x231)+x232);

	if (t54 != 16602069666338596585LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x233 = 11U;
	uint8_t x234 = 10U;
	int16_t x235 = -11291;
	int64_t x236 = 2670515393LL;
	volatile int64_t t55 = -876216496236904LL;

	t55 = (((x233/x234)&x235)+x236);

	if (t55 != 2670515394LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x237 = UINT16_MAX;
	static uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MIN;
	uint64_t x240 = 202343LLU;
	static uint64_t t56 = 3846374758421741339LLU;

	t56 = (((x237/x238)&x239)+x240);

	if (t56 != 202343LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MAX;
	int16_t x244 = -1;
	static int64_t t57 = -4911067768273LL;

	t57 = (((x241/x242)&x243)+x244);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x245 = 0U;
	int8_t x246 = INT8_MIN;
	volatile int8_t x247 = INT8_MIN;
	int64_t x248 = INT64_MAX;
	volatile int64_t t58 = INT64_MAX;

	t58 = (((x245/x246)&x247)+x248);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x249 = INT64_MIN;
	volatile int64_t x250 = 122907152138401157LL;
	int8_t x252 = -1;
	volatile int64_t t59 = 31194809197LL;

	t59 = (((x249/x250)&x251)+x252);

	if (t59 != 1424LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = -1;
	static int32_t x254 = INT32_MAX;
	int16_t x255 = -1;
	int16_t x256 = -1;

	t60 = (((x253/x254)&x255)+x256);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x259 = INT16_MIN;
	int32_t x260 = INT32_MAX;
	int32_t t61 = INT32_MAX;

	t61 = (((x257/x258)&x259)+x260);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x262 = 33U;
	int64_t x263 = INT64_MIN;
	volatile int64_t t62 = -1544859965948LL;

	t62 = (((x261/x262)&x263)+x264);

	if (t62 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x265 = 10089LLU;
	int8_t x267 = INT8_MIN;
	static int8_t x268 = INT8_MIN;
	uint64_t t63 = 144LLU;

	t63 = (((x265/x266)&x267)+x268);

	if (t63 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x269 = INT16_MIN;
	static uint16_t x270 = UINT16_MAX;
	static volatile uint8_t x272 = 58U;
	volatile int32_t t64 = 13530;

	t64 = (((x269/x270)&x271)+x272);

	if (t64 != 58) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = 15;
	volatile int8_t x274 = INT8_MIN;
	int64_t x275 = INT64_MIN;
	volatile int64_t x276 = INT64_MIN;
	int64_t t65 = INT64_MIN;

	t65 = (((x273/x274)&x275)+x276);

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x277 = -1LL;
	uint16_t x278 = 25U;
	int16_t x279 = -15;
	static int16_t x280 = 9445;
	int64_t t66 = -499166LL;

	t66 = (((x277/x278)&x279)+x280);

	if (t66 != 9445LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x281 = INT64_MAX;
	int8_t x282 = INT8_MAX;
	uint8_t x283 = UINT8_MAX;

	t67 = (((x281/x282)&x283)+x284);

	if (t67 != -32639LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	static volatile uint32_t x287 = 30811U;
	static int32_t x288 = -6888546;
	uint32_t t68 = 1251149281U;

	t68 = (((x285/x286)&x287)+x288);

	if (t68 != 4288078750U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x290 = UINT16_MAX;
	int32_t x291 = -1;
	int8_t x292 = INT8_MIN;

	t69 = (((x289/x290)&x291)+x292);

	if (t69 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x293 = UINT8_MAX;
	uint16_t x294 = UINT16_MAX;
	uint64_t x295 = 68960LLU;
	volatile int16_t x296 = -1;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (((x293/x294)&x295)+x296);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x297 = UINT8_MAX;
	uint8_t x298 = 52U;
	static uint32_t x300 = 224065U;
	volatile uint32_t t71 = 36970U;

	t71 = (((x297/x298)&x299)+x300);

	if (t71 != 224065U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x302 = 4909841515494177LL;
	int64_t x303 = 2036577282970LL;
	uint16_t x304 = 254U;

	t72 = (((x301/x302)&x303)+x304);

	if (t72 != 254LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x305 = -21036400881753LL;
	int64_t x306 = -1LL;
	volatile int64_t t73 = 375183468654334215LL;

	t73 = (((x305/x306)&x307)+x308);

	if (t73 != 21034602364927LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x311 = INT16_MAX;
	int64_t t74 = -1031879490791LL;

	t74 = (((x309/x310)&x311)+x312);

	if (t74 != -54397372635LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x313 = 77U;
	int64_t x314 = -120LL;
	static int32_t x315 = INT32_MAX;
	int8_t x316 = -1;
	int64_t t75 = 478603184146824684LL;

	t75 = (((x313/x314)&x315)+x316);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 4U;
	int8_t x318 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	volatile int64_t t76 = -267401344525082LL;

	t76 = (((x317/x318)&x319)+x320);

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = -1;
	int8_t x324 = INT8_MAX;
	int32_t t77 = 7208;

	t77 = (((x321/x322)&x323)+x324);

	if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x325 = INT8_MIN;
	uint32_t x326 = 3362753U;
	int64_t x327 = INT64_MIN;
	volatile int32_t x328 = -1;

	t78 = (((x325/x326)&x327)+x328);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = UINT16_MAX;
	static volatile uint32_t x330 = 6U;
	volatile uint64_t x331 = 17283LLU;
	int32_t x332 = -1;
	uint64_t t79 = 109797LLU;

	t79 = (((x329/x330)&x331)+x332);

	if (t79 != 641LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x337 = -1;
	volatile uint32_t x339 = UINT32_MAX;
	uint32_t x340 = 571566086U;
	volatile uint32_t t80 = 28U;

	t80 = (((x337/x338)&x339)+x340);

	if (t80 != 571566086U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x341 = 0U;
	int8_t x342 = 7;
	volatile int16_t x343 = INT16_MIN;
	int16_t x344 = -1;
	int32_t t81 = -20;

	t81 = (((x341/x342)&x343)+x344);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x347 = INT64_MIN;
	int32_t x348 = INT32_MAX;
	static int64_t t82 = 55LL;

	t82 = (((x345/x346)&x347)+x348);

	if (t82 != 2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x349 = -1LL;
	volatile uint32_t x350 = UINT32_MAX;
	int32_t x351 = INT32_MIN;
	volatile int32_t x352 = INT32_MAX;
	volatile int64_t t83 = -173240465294131001LL;

	t83 = (((x349/x350)&x351)+x352);

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x354 = UINT16_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (((x353/x354)&x355)+x356);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x361 = 12;
	uint8_t x362 = UINT8_MAX;
	uint8_t x363 = 60U;
	static int64_t x364 = -1LL;
	volatile int64_t t85 = -3747049136521193895LL;

	t85 = (((x361/x362)&x363)+x364);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x366 = 89477490LL;
	int64_t x368 = -1LL;
	int64_t t86 = 14259626883424LL;

	t86 = (((x365/x366)&x367)+x368);

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x369 = UINT16_MAX;
	int16_t x370 = INT16_MIN;
	int32_t x371 = -1;
	static int8_t x372 = INT8_MIN;
	int32_t t87 = -701633;

	t87 = (((x369/x370)&x371)+x372);

	if (t87 != -129) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x374 = 27854LL;
	int32_t x375 = -878011;
	volatile uint32_t x376 = UINT32_MAX;
	volatile int64_t t88 = 488672274855LL;

	t88 = (((x373/x374)&x375)+x376);

	if (t88 != 4294969344LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x378 = INT32_MIN;
	volatile int8_t x379 = -1;
	volatile int64_t x380 = INT64_MIN;
	static volatile int64_t t89 = INT64_MIN;

	t89 = (((x377/x378)&x379)+x380);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x381 = INT16_MIN;
	volatile uint8_t x382 = 4U;
	int32_t x383 = INT32_MAX;
	int8_t x384 = 6;
	int32_t t90 = -857400010;

	t90 = (((x381/x382)&x383)+x384);

	if (t90 != 2147475462) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x385 = INT16_MAX;
	static uint8_t x386 = 7U;
	volatile int16_t x387 = 478;
	volatile uint32_t x388 = 2106U;
	volatile uint32_t t91 = 1622133U;

	t91 = (((x385/x386)&x387)+x388);

	if (t91 != 2178U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = -1LL;
	int16_t x390 = -1;
	uint64_t x391 = 284LLU;
	volatile int16_t x392 = 4016;
	volatile uint64_t t92 = 41168LLU;

	t92 = (((x389/x390)&x391)+x392);

	if (t92 != 4016LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x393 = UINT32_MAX;
	uint16_t x395 = UINT16_MAX;

	t93 = (((x393/x394)&x395)+x396);

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x397 = INT16_MAX;
	volatile int8_t x399 = -1;
	int64_t x400 = -3745323685LL;

	t94 = (((x397/x398)&x399)+x400);

	if (t94 != -3745323685LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	int64_t x402 = -1LL;
	static int8_t x403 = INT8_MIN;

	t95 = (((x401/x402)&x403)+x404);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x405 = -1;
	uint64_t x406 = UINT64_MAX;
	uint32_t x407 = UINT32_MAX;
	int8_t x408 = INT8_MIN;
	uint64_t t96 = 2060823619LLU;

	t96 = (((x405/x406)&x407)+x408);

	if (t96 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x410 = INT64_MIN;
	int64_t x411 = 192LL;
	volatile int8_t x412 = -1;
	volatile int64_t t97 = 2919002LL;

	t97 = (((x409/x410)&x411)+x412);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x413 = UINT8_MAX;
	int64_t x414 = INT64_MIN;
	static volatile uint8_t x415 = UINT8_MAX;
	int8_t x416 = INT8_MIN;
	volatile int64_t t98 = 3491460391584216LL;

	t98 = (((x413/x414)&x415)+x416);

	if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x417 = INT16_MIN;
	uint64_t x418 = UINT64_MAX;
	volatile uint8_t x419 = 3U;
	volatile uint64_t t99 = 298885417813590686LLU;

	t99 = (((x417/x418)&x419)+x420);

	if (t99 != 5LLU) { NG(); } else { ; }
	
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

