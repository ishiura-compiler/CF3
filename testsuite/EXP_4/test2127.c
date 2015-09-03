#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = -1;
uint8_t x11 = UINT8_MAX;
int16_t x13 = -1;
int8_t x17 = INT8_MIN;
static int32_t x21 = 68469;
uint8_t x32 = 6U;
volatile int32_t x44 = -1;
uint8_t x52 = 2U;
int32_t x55 = INT32_MIN;
volatile int32_t t14 = 293108;
int64_t x65 = INT64_MIN;
int8_t x88 = INT8_MIN;
volatile int32_t x89 = INT32_MIN;
int16_t x96 = 0;
static int32_t x101 = -2;
int32_t t26 = 0;
uint16_t x118 = UINT16_MAX;
uint8_t x124 = 30U;
static volatile int32_t t30 = 1450703;
int8_t x127 = 8;
uint64_t x131 = 477956323527LLU;
int32_t t32 = 84467605;
int64_t x133 = INT64_MIN;
uint64_t x136 = UINT64_MAX;
int64_t x137 = INT64_MIN;
uint16_t x139 = 26U;
uint16_t x141 = UINT16_MAX;
static int32_t x149 = -52356;
int16_t x156 = -299;
int32_t x159 = -231;
uint8_t x167 = UINT8_MAX;
volatile int16_t x175 = -1;
uint16_t x180 = 1U;
volatile int32_t x182 = 23;
volatile int32_t t46 = 1;
int16_t x189 = 5669;
int8_t x190 = -1;
int32_t x195 = 50;
uint8_t x196 = 3U;
int32_t t50 = -3;
int32_t x208 = INT32_MIN;
uint16_t x218 = 14U;
volatile uint32_t x220 = UINT32_MAX;
int16_t x223 = 4644;
volatile int32_t x224 = -88025;
int32_t t56 = -530;
static int8_t x231 = INT8_MIN;
int32_t x240 = INT32_MIN;
int32_t x250 = INT32_MAX;
int16_t x251 = -1;
int8_t x256 = 0;
static volatile int16_t x260 = INT16_MIN;
int32_t t64 = 119;
static volatile int32_t x261 = -1;
int8_t x262 = -1;
int8_t x265 = INT8_MIN;
volatile int64_t x275 = -13540449913LL;
static uint8_t x286 = 23U;
int32_t x288 = -332253;
static uint8_t x300 = 50U;
volatile uint16_t x302 = 27U;
uint16_t x310 = 14U;
volatile uint64_t x319 = 21317061372LLU;
uint8_t x328 = 11U;
static int64_t x330 = INT64_MAX;
int16_t x334 = INT16_MIN;
int32_t t83 = 13517444;
int8_t x338 = INT8_MAX;
int32_t x340 = INT32_MIN;
static uint8_t x342 = 9U;
int8_t x349 = INT8_MIN;
uint64_t x357 = UINT64_MAX;
int8_t x358 = 1;
int32_t t90 = -4065474;
static uint64_t x372 = UINT64_MAX;
int64_t x377 = INT64_MIN;
volatile int32_t x379 = -495;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x3 = 3U;
	uint32_t x4 = UINT32_MAX;
	int32_t t0 = -878670393;

	t0 = (x1==(x2==(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -10341;
	uint64_t x6 = 1990690918941997809LLU;
	int64_t x7 = -120653LL;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = -152960231;

	t1 = (x5==(x6==(x7^x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int64_t x10 = 52152059060918433LL;
	static volatile int64_t x12 = INT64_MIN;
	static int32_t t2 = -1;

	t2 = (x9==(x10==(x11^x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = UINT16_MAX;
	int32_t x15 = -1;
	int16_t x16 = 3;
	int32_t t3 = -14969390;

	t3 = (x13==(x14==(x15^x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	uint16_t x19 = 11U;
	int64_t x20 = INT64_MIN;
	int32_t t4 = -2610414;

	t4 = (x17==(x18==(x19^x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	int64_t x23 = -1LL;
	uint64_t x24 = 70772549612688LLU;
	int32_t t5 = 225;

	t5 = (x21==(x22==(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = 60U;
	static int32_t x26 = -1;
	int8_t x27 = INT8_MAX;
	uint64_t x28 = 2115123121LLU;
	int32_t t6 = -827999409;

	t6 = (x25==(x26==(x27^x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 152U;
	static int64_t x30 = INT64_MIN;
	int16_t x31 = INT16_MIN;
	volatile int32_t t7 = 6;

	t7 = (x29==(x30==(x31^x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 1;
	volatile uint32_t x34 = 1111670082U;
	int16_t x35 = INT16_MIN;
	int32_t x36 = -2932890;
	volatile int32_t t8 = 0;

	t8 = (x33==(x34==(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	static volatile int16_t x38 = -2;
	static volatile int16_t x39 = -14327;
	int8_t x40 = -10;
	int32_t t9 = 57;

	t9 = (x37==(x38==(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MAX;
	int64_t x43 = -1LL;
	static int32_t t10 = 2;

	t10 = (x41==(x42==(x43^x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = INT16_MIN;
	int32_t x46 = 0;
	volatile int16_t x47 = INT16_MAX;
	static uint8_t x48 = 51U;
	volatile int32_t t11 = -260;

	t11 = (x45==(x46==(x47^x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = INT32_MAX;
	static uint64_t x50 = 1090LLU;
	int16_t x51 = -1;
	volatile int32_t t12 = -974;

	t12 = (x49==(x50==(x51^x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MAX;
	uint64_t x54 = 263557LLU;
	uint32_t x56 = UINT32_MAX;
	volatile int32_t t13 = -57946202;

	t13 = (x53==(x54==(x55^x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -96;
	int16_t x58 = INT16_MIN;
	int32_t x59 = -35;
	uint64_t x60 = 186131379LLU;

	t14 = (x57==(x58==(x59^x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = UINT32_MAX;
	int8_t x62 = INT8_MIN;
	int32_t x63 = -1;
	uint16_t x64 = 4780U;
	static volatile int32_t t15 = -61647;

	t15 = (x61==(x62==(x63^x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x66 = INT8_MAX;
	volatile uint32_t x67 = UINT32_MAX;
	int64_t x68 = INT64_MIN;
	int32_t t16 = 21668837;

	t16 = (x65==(x66==(x67^x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 30U;
	uint8_t x70 = 52U;
	int8_t x71 = -1;
	static int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = -51;

	t17 = (x69==(x70==(x71^x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = INT64_MIN;
	uint16_t x75 = 18588U;
	uint64_t x76 = 31405635LLU;
	static volatile int32_t t18 = 2935779;

	t18 = (x73==(x74==(x75^x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	volatile int8_t x78 = 1;
	static int8_t x79 = -1;
	int64_t x80 = INT64_MAX;
	static volatile int32_t t19 = 1;

	t19 = (x77==(x78==(x79^x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint64_t x82 = 364962187718010LLU;
	volatile int32_t x83 = INT32_MIN;
	static int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -13874973;

	t20 = (x81==(x82==(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	static int8_t x86 = -1;
	int32_t x87 = -178;
	volatile int32_t t21 = 30;

	t21 = (x85==(x86==(x87^x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x90 = 903LL;
	static uint32_t x91 = UINT32_MAX;
	int32_t x92 = INT32_MIN;
	int32_t t22 = -2;

	t22 = (x89==(x90==(x91^x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	volatile int8_t x94 = -1;
	int32_t x95 = 1699197;
	volatile int32_t t23 = 2;

	t23 = (x93==(x94==(x95^x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = 0;
	volatile int32_t x98 = 5363510;
	uint32_t x99 = 772907U;
	static int16_t x100 = -1;
	int32_t t24 = 335223073;

	t24 = (x97==(x98==(x99^x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = -59;
	static uint8_t x104 = 18U;
	volatile int32_t t25 = -11880;

	t25 = (x101==(x102==(x103^x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 23U;
	uint8_t x106 = UINT8_MAX;
	uint64_t x107 = 284798016552294841LLU;
	uint8_t x108 = 12U;

	t26 = (x105==(x106==(x107^x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = 2U;
	int32_t x110 = 33927106;
	uint8_t x111 = UINT8_MAX;
	uint16_t x112 = 1113U;
	static volatile int32_t t27 = 105375;

	t27 = (x109==(x110==(x111^x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	int32_t x114 = INT32_MIN;
	int16_t x115 = 1;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 21141;

	t28 = (x113==(x114==(x115^x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = UINT16_MAX;
	volatile int16_t x119 = 1;
	static volatile int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -1608;

	t29 = (x117==(x118==(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;

	t30 = (x121==(x122==(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MIN;
	uint32_t x126 = UINT32_MAX;
	int8_t x128 = -1;
	int32_t t31 = -2616;

	t31 = (x125==(x126==(x127^x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x129 = INT8_MIN;
	int16_t x130 = 403;
	int8_t x132 = 0;

	t32 = (x129==(x130==(x131^x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x134 = UINT32_MAX;
	volatile int16_t x135 = -1;
	int32_t t33 = 5;

	t33 = (x133==(x134==(x135^x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x138 = 5;
	int8_t x140 = INT8_MAX;
	int32_t t34 = -45281932;

	t34 = (x137==(x138==(x139^x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	uint64_t x143 = 6463LLU;
	volatile int8_t x144 = INT8_MIN;
	static int32_t t35 = 229132942;

	t35 = (x141==(x142==(x143^x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	static volatile int16_t x146 = INT16_MIN;
	static volatile int64_t x147 = INT64_MIN;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 7;

	t36 = (x145==(x146==(x147^x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x150 = UINT16_MAX;
	volatile int64_t x151 = INT64_MIN;
	uint16_t x152 = 3292U;
	volatile int32_t t37 = 178961500;

	t37 = (x149==(x150==(x151^x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x153 = INT32_MIN;
	volatile uint8_t x154 = 0U;
	static uint64_t x155 = 14231LLU;
	int32_t t38 = 12;

	t38 = (x153==(x154==(x155^x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	int8_t x158 = 0;
	int32_t x160 = 12301;
	int32_t t39 = -67;

	t39 = (x157==(x158==(x159^x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 13523U;
	int64_t x162 = INT64_MIN;
	uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 3U;
	volatile int32_t t40 = -1716;

	t40 = (x161==(x162==(x163^x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = -58982562726593LL;
	uint32_t x166 = UINT32_MAX;
	static int64_t x168 = INT64_MIN;
	int32_t t41 = 1963;

	t41 = (x165==(x166==(x167^x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	int8_t x170 = -1;
	uint64_t x171 = UINT64_MAX;
	int32_t x172 = 31072961;
	static int32_t t42 = -279;

	t42 = (x169==(x170==(x171^x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 92584806;
	int32_t x174 = INT32_MIN;
	volatile int16_t x176 = INT16_MIN;
	int32_t t43 = 39178610;

	t43 = (x173==(x174==(x175^x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = 3258U;
	uint32_t x178 = 49464384U;
	int32_t x179 = 7;
	volatile int32_t t44 = 1867566;

	t44 = (x177==(x178==(x179^x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 61560378973267LLU;
	int32_t x183 = INT32_MAX;
	uint32_t x184 = 17223034U;
	volatile int32_t t45 = -328829741;

	t45 = (x181==(x182==(x183^x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = INT16_MIN;
	int16_t x186 = -1;
	int32_t x187 = INT32_MAX;
	uint16_t x188 = 0U;

	t46 = (x185==(x186==(x187^x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x191 = -61240712605375LL;
	static int64_t x192 = -1LL;
	static int32_t t47 = -944421101;

	t47 = (x189==(x190==(x191^x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 501220U;
	uint8_t x194 = 2U;
	static int32_t t48 = 9551113;

	t48 = (x193==(x194==(x195^x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = -7;
	volatile uint16_t x198 = UINT16_MAX;
	int16_t x199 = INT16_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = 416725793;

	t49 = (x197==(x198==(x199^x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint16_t x201 = UINT16_MAX;
	int8_t x202 = -2;
	uint8_t x203 = UINT8_MAX;
	volatile int32_t x204 = 1874;

	t50 = (x201==(x202==(x203^x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 514575227U;
	int16_t x206 = -1;
	int16_t x207 = 1;
	int32_t t51 = -1;

	t51 = (x205==(x206==(x207^x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	static int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	uint32_t x212 = 1U;
	volatile int32_t t52 = -4;

	t52 = (x209==(x210==(x211^x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = 508U;
	int64_t x214 = INT64_MIN;
	uint16_t x215 = UINT16_MAX;
	static int8_t x216 = INT8_MAX;
	volatile int32_t t53 = -14818046;

	t53 = (x213==(x214==(x215^x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 102;
	volatile int64_t x219 = -1LL;
	int32_t t54 = 42;

	t54 = (x217==(x218==(x219^x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = -18;
	int32_t x222 = -1;
	int32_t t55 = -1;

	t55 = (x221==(x222==(x223^x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	volatile uint8_t x226 = UINT8_MAX;
	static int32_t x227 = -431472260;
	int16_t x228 = 0;

	t56 = (x225==(x226==(x227^x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	static volatile uint8_t x232 = 25U;
	volatile int32_t t57 = -1054445;

	t57 = (x229==(x230==(x231^x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -13090LL;
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	int32_t x236 = 14857;
	int32_t t58 = 324783011;

	t58 = (x233==(x234==(x235^x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 87LL;
	uint32_t x238 = 1484U;
	static int64_t x239 = INT64_MAX;
	int32_t t59 = -14;

	t59 = (x237==(x238==(x239^x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 576;
	uint64_t x242 = 239476172230165876LLU;
	int16_t x243 = INT16_MIN;
	int8_t x244 = 0;
	int32_t t60 = 174973;

	t60 = (x241==(x242==(x243^x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = -15980;
	int8_t x246 = -1;
	uint8_t x247 = 58U;
	int32_t x248 = INT32_MIN;
	volatile int32_t t61 = -124192456;

	t61 = (x245==(x246==(x247^x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	int32_t x252 = INT32_MAX;
	static volatile int32_t t62 = 85110;

	t62 = (x249==(x250==(x251^x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MAX;
	uint16_t x254 = UINT16_MAX;
	uint8_t x255 = UINT8_MAX;
	int32_t t63 = -16041900;

	t63 = (x253==(x254==(x255^x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	int8_t x258 = -1;
	int16_t x259 = -1;

	t64 = (x257==(x258==(x259^x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x263 = INT16_MAX;
	int32_t x264 = INT32_MAX;
	int32_t t65 = -9113025;

	t65 = (x261==(x262==(x263^x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = 29131U;
	static volatile uint64_t x267 = UINT64_MAX;
	volatile uint64_t x268 = 88114815094657474LLU;
	static int32_t t66 = 78;

	t66 = (x265==(x266==(x267^x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 7722034LLU;
	static volatile int32_t x270 = INT32_MAX;
	int8_t x271 = -1;
	int8_t x272 = INT8_MIN;
	static int32_t t67 = 1494595;

	t67 = (x269==(x270==(x271^x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = UINT64_MAX;
	volatile int64_t x274 = INT64_MIN;
	int64_t x276 = INT64_MAX;
	int32_t t68 = -1391689;

	t68 = (x273==(x274==(x275^x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 6113608818335960LLU;
	volatile int32_t x278 = INT32_MIN;
	uint8_t x279 = 29U;
	static int8_t x280 = 0;
	volatile int32_t t69 = -60456;

	t69 = (x277==(x278==(x279^x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	uint32_t x282 = 1335830U;
	int8_t x283 = INT8_MIN;
	volatile uint64_t x284 = UINT64_MAX;
	volatile int32_t t70 = 217476050;

	t70 = (x281==(x282==(x283^x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = -1LL;
	int8_t x287 = INT8_MAX;
	volatile int32_t t71 = 148025168;

	t71 = (x285==(x286==(x287^x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = 856614945;
	int32_t x290 = INT32_MAX;
	int8_t x291 = 12;
	static int16_t x292 = -1;
	volatile int32_t t72 = 761728495;

	t72 = (x289==(x290==(x291^x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MAX;
	int16_t x294 = 484;
	volatile int64_t x295 = INT64_MIN;
	int16_t x296 = 0;
	int32_t t73 = 14;

	t73 = (x293==(x294==(x295^x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = INT8_MIN;
	int64_t x298 = INT64_MAX;
	volatile int32_t x299 = 229;
	int32_t t74 = -628130951;

	t74 = (x297==(x298==(x299^x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MIN;
	uint8_t x303 = 50U;
	static uint32_t x304 = 21U;
	static int32_t t75 = 723590;

	t75 = (x301==(x302==(x303^x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x306 = -1LL;
	int32_t x307 = INT32_MAX;
	int8_t x308 = INT8_MAX;
	volatile int32_t t76 = 2875790;

	t76 = (x305==(x306==(x307^x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MIN;
	uint64_t x311 = UINT64_MAX;
	int32_t x312 = -1;
	volatile int32_t t77 = -17730567;

	t77 = (x309==(x310==(x311^x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x313 = UINT8_MAX;
	int16_t x314 = 464;
	int8_t x315 = 1;
	static int8_t x316 = INT8_MIN;
	volatile int32_t t78 = -61140731;

	t78 = (x313==(x314==(x315^x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x317 = INT8_MIN;
	uint64_t x318 = 0LLU;
	int32_t x320 = INT32_MIN;
	int32_t t79 = 187;

	t79 = (x317==(x318==(x319^x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MAX;
	int64_t x322 = -1LL;
	int8_t x323 = -1;
	uint16_t x324 = 31608U;
	volatile int32_t t80 = -15937;

	t80 = (x321==(x322==(x323^x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 50920926829376810LLU;
	volatile uint16_t x326 = 2U;
	uint64_t x327 = UINT64_MAX;
	int32_t t81 = -2558393;

	t81 = (x325==(x326==(x327^x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x329 = 908;
	uint8_t x331 = 2U;
	static uint32_t x332 = 0U;
	volatile int32_t t82 = -2009671;

	t82 = (x329==(x330==(x331^x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = -834;
	static int16_t x335 = -1;
	volatile int16_t x336 = -1;

	t83 = (x333==(x334==(x335^x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -11LL;
	static volatile uint16_t x339 = UINT16_MAX;
	static int32_t t84 = 174;

	t84 = (x337==(x338==(x339^x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = UINT8_MAX;
	static volatile int32_t x343 = INT32_MIN;
	uint64_t x344 = 2LLU;
	static int32_t t85 = 222191;

	t85 = (x341==(x342==(x343^x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -38;
	static uint64_t x346 = UINT64_MAX;
	uint64_t x347 = 2289787LLU;
	int32_t x348 = -1;
	static volatile int32_t t86 = 175;

	t86 = (x345==(x346==(x347^x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = 224935465LLU;
	static uint32_t x351 = 96537459U;
	int8_t x352 = 50;
	int32_t t87 = -34;

	t87 = (x349==(x350==(x351^x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MAX;
	uint32_t x354 = 202U;
	int32_t x355 = 0;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t88 = 1782928;

	t88 = (x353==(x354==(x355^x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x359 = -44;
	uint8_t x360 = 0U;
	int32_t t89 = -43055;

	t89 = (x357==(x358==(x359^x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int64_t x362 = INT64_MAX;
	uint32_t x363 = 460174448U;
	static int32_t x364 = INT32_MIN;

	t90 = (x361==(x362==(x363^x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = INT64_MIN;
	int8_t x366 = -1;
	int32_t x367 = INT32_MIN;
	volatile int64_t x368 = -1LL;
	static volatile int32_t t91 = 8121158;

	t91 = (x365==(x366==(x367^x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 1196210U;
	uint16_t x370 = 1U;
	static int16_t x371 = INT16_MIN;
	volatile int32_t t92 = -28;

	t92 = (x369==(x370==(x371^x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -1LL;
	int16_t x374 = INT16_MAX;
	int32_t x375 = 22494012;
	int32_t x376 = 3;
	int32_t t93 = 143706;

	t93 = (x373==(x374==(x375^x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = -48;
	static int8_t x380 = INT8_MIN;
	volatile int32_t t94 = 6794128;

	t94 = (x377==(x378==(x379^x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MAX;
	int16_t x382 = -1;
	uint8_t x383 = 0U;
	int16_t x384 = -10035;
	static volatile int32_t t95 = -8705245;

	t95 = (x381==(x382==(x383^x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 20U;
	static uint8_t x386 = 1U;
	volatile int16_t x387 = 9795;
	volatile int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 24044;

	t96 = (x385==(x386==(x387^x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x389 = -48;
	uint64_t x390 = 9LLU;
	int16_t x391 = INT16_MIN;
	volatile int64_t x392 = INT64_MIN;
	volatile int32_t t97 = -508;

	t97 = (x389==(x390==(x391^x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = 11229028163990420LL;
	uint32_t x394 = 36838U;
	int32_t x395 = 15357821;
	static int16_t x396 = INT16_MIN;
	int32_t t98 = -1;

	t98 = (x393==(x394==(x395^x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = 29;
	static int64_t x398 = INT64_MIN;
	int16_t x399 = 27;
	uint64_t x400 = 3370LLU;
	volatile int32_t t99 = -67;

	t99 = (x397==(x398==(x399^x400)));

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

