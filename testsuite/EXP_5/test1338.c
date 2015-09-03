#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 108U;
int16_t x5 = INT16_MAX;
int32_t t1 = 65;
static uint32_t x10 = UINT32_MAX;
uint32_t x12 = UINT32_MAX;
static int64_t x17 = 2081LL;
volatile int8_t x19 = INT8_MIN;
int16_t x24 = 0;
volatile int32_t t6 = -7602;
uint32_t x29 = UINT32_MAX;
uint8_t x36 = UINT8_MAX;
int16_t x38 = 1;
int16_t x48 = INT16_MAX;
int64_t x53 = -1137LL;
static int64_t x54 = -67925765590531852LL;
int32_t x56 = INT32_MIN;
int64_t t13 = 1LL;
volatile int64_t x57 = INT64_MAX;
volatile uint32_t x61 = UINT32_MAX;
volatile int16_t x70 = INT16_MIN;
int8_t x72 = 2;
volatile int64_t x74 = 1188472LL;
uint16_t x79 = 93U;
static int64_t t20 = 6553713050709661LL;
static int64_t x85 = INT64_MIN;
int64_t t21 = -289362LL;
int16_t x91 = -1;
int64_t t22 = 0LL;
int8_t x93 = INT8_MIN;
volatile int32_t x95 = 1;
static uint8_t x97 = UINT8_MAX;
volatile uint64_t x99 = 678578959LLU;
uint8_t x102 = 11U;
uint8_t x108 = UINT8_MAX;
static volatile uint32_t x113 = 57U;
uint16_t x116 = 20493U;
volatile uint32_t t28 = 2139113U;
uint8_t x117 = 63U;
uint8_t x118 = UINT8_MAX;
static int8_t x120 = 7;
int32_t x121 = INT32_MIN;
volatile int8_t x129 = INT8_MIN;
int8_t x135 = INT8_MIN;
volatile int64_t x138 = INT64_MIN;
uint64_t x139 = 417509491092805LLU;
int32_t x140 = -1;
volatile int32_t t34 = 47663527;
int32_t x142 = -487;
int16_t x143 = INT16_MIN;
int32_t x149 = 30433879;
int8_t x153 = INT8_MIN;
volatile int16_t x163 = 1;
static int8_t x166 = -1;
volatile int32_t x169 = INT32_MIN;
int8_t x170 = -18;
int16_t x176 = 602;
uint8_t x183 = UINT8_MAX;
int16_t x184 = -2719;
int64_t x188 = -7070610400996078LL;
uint32_t x190 = UINT32_MAX;
static int16_t x191 = 0;
int64_t t48 = -1LL;
int32_t x198 = INT32_MAX;
uint16_t x208 = UINT16_MAX;
uint64_t x210 = 381688261894227LLU;
int32_t t52 = 98490567;
volatile uint64_t x218 = UINT64_MAX;
volatile int8_t x221 = 7;
int16_t x224 = INT16_MIN;
static int8_t x227 = 5;
int8_t x228 = 17;
static int32_t x229 = INT32_MIN;
int8_t x231 = INT8_MIN;
int32_t t58 = -762580748;
int64_t x239 = -427555523880LL;
volatile int64_t t59 = -130801352772LL;
int8_t x242 = 1;
int64_t t60 = INT64_MAX;
static uint32_t x248 = 1390U;
uint64_t x250 = 8LLU;
uint32_t x251 = UINT32_MAX;
int32_t x256 = -26;
static int32_t x260 = INT32_MIN;
int16_t x266 = 414;
int32_t x273 = INT32_MIN;
uint8_t x279 = UINT8_MAX;
uint64_t x282 = 236473912848023527LLU;
int8_t x288 = -47;
static int64_t x289 = 68008389133407083LL;
static uint8_t x293 = 51U;
int32_t x297 = INT32_MIN;
uint8_t x304 = UINT8_MAX;
static int64_t x305 = INT64_MIN;
uint16_t x312 = 803U;
static int8_t x313 = INT8_MIN;
volatile int8_t x315 = -56;
static volatile int32_t x318 = -580530;
int16_t x325 = -1;
uint8_t x339 = 0U;
int32_t t84 = 1215;
static int32_t x341 = -65;
volatile int64_t x345 = INT64_MIN;
volatile int16_t x355 = INT16_MIN;
volatile uint64_t t90 = 23LLU;
int32_t x366 = INT32_MAX;
volatile int32_t t91 = 10;
uint8_t x369 = 1U;
uint64_t x370 = 1145LLU;
int16_t x377 = -1;
volatile int64_t t95 = 0LL;
static volatile uint32_t x385 = 605017U;
uint32_t x393 = 11739981U;
int32_t x397 = -1;
int64_t x398 = -1LL;
int64_t x400 = 61618088607345836LL;
int64_t t99 = 1LL;


void f0(void) {
	static volatile int64_t x1 = -21813LL;
	int32_t x3 = INT32_MAX;
	int32_t x4 = -1092973;
	static volatile int64_t t0 = -900195204559929LL;

	t0 = (x1|((x2==x3)|x4));

	if (t0 != -1317LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = -55;
	int8_t x7 = INT8_MIN;
	int8_t x8 = 0;

	t1 = (x5|((x6==x7)|x8));

	if (t1 != 32767) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int64_t x11 = -953934LL;
	uint32_t t2 = UINT32_MAX;

	t2 = (x9|((x10==x11)|x12));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint64_t x14 = 23144736LLU;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = 3319370;

	t3 = (x13|((x14==x15)|x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x18 = 232;
	int8_t x20 = -1;
	int64_t t4 = 244170LL;

	t4 = (x17|((x18==x19)|x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint32_t x22 = 3852U;
	uint16_t x23 = 1939U;
	static volatile int32_t t5 = -123;

	t5 = (x21|((x22==x23)|x24));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	static int8_t x26 = -1;
	static int64_t x27 = -1LL;
	static volatile int32_t x28 = INT32_MAX;

	t6 = (x25|((x26==x27)|x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x30 = INT64_MAX;
	uint32_t x31 = 24919U;
	int32_t x32 = -22773;
	uint32_t t7 = UINT32_MAX;

	t7 = (x29|((x30==x31)|x32));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	int32_t x34 = 211501;
	static volatile uint64_t x35 = UINT64_MAX;
	volatile int32_t t8 = -27657;

	t8 = (x33|((x34==x35)|x36));

	if (t8 != -2147483393) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -28911;
	int8_t x39 = 11;
	int32_t x40 = INT32_MAX;
	int32_t t9 = -3;

	t9 = (x37|((x38==x39)|x40));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int64_t x42 = -1LL;
	int8_t x43 = INT8_MAX;
	int8_t x44 = -1;
	int64_t t10 = -551493946LL;

	t10 = (x41|((x42==x43)|x44));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = 28635U;
	int8_t x47 = INT8_MAX;
	int32_t t11 = -742425195;

	t11 = (x45|((x46==x47)|x48));

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 2081948LL;
	volatile int32_t x50 = -166445;
	volatile uint16_t x51 = 3246U;
	static uint32_t x52 = UINT32_MAX;
	int64_t t12 = -45168LL;

	t12 = (x49|((x50==x51)|x52));

	if (t12 != 4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x55 = -1;

	t13 = (x53|((x54==x55)|x56));

	if (t13 != -1137LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = UINT8_MAX;
	uint64_t x59 = UINT64_MAX;
	int32_t x60 = 27336517;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x57|((x58==x59)|x60));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x62 = UINT64_MAX;
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = INT64_MIN;
	int64_t t15 = 40306661858LL;

	t15 = (x61|((x62==x63)|x64));

	if (t15 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 25329U;
	static int64_t x66 = INT64_MIN;
	volatile int8_t x67 = INT8_MIN;
	volatile uint16_t x68 = 1433U;
	volatile int32_t t16 = 209032675;

	t16 = (x65|((x66==x67)|x68));

	if (t16 != 26617) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = 20U;
	uint8_t x71 = 0U;
	volatile int32_t t17 = -41312;

	t17 = (x69|((x70==x71)|x72));

	if (t17 != 22) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint16_t x73 = UINT16_MAX;
	static uint16_t x75 = UINT16_MAX;
	uint64_t x76 = 7101916257715154885LLU;
	volatile uint64_t t18 = 2135587230803680620LLU;

	t18 = (x73|((x74==x75)|x76));

	if (t18 != 7101916257715159039LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MIN;
	int16_t x78 = -4;
	uint64_t x80 = 47084619LLU;
	uint64_t t19 = 1875164LLU;

	t19 = (x77|((x78==x79)|x80));

	if (t19 != 18446744073709548619LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	volatile int8_t x82 = 0;
	volatile int8_t x83 = -1;
	uint8_t x84 = UINT8_MAX;

	t20 = (x81|((x82==x83)|x84));

	if (t20 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MIN;
	volatile int32_t x87 = -1;
	volatile int16_t x88 = 6295;

	t21 = (x85|((x86==x87)|x88));

	if (t21 != -9223372036854769513LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	volatile int64_t x90 = INT64_MAX;
	static volatile int64_t x92 = -1LL;

	t22 = (x89|((x90==x91)|x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x94 = -1;
	volatile int16_t x96 = INT16_MIN;
	static int32_t t23 = 100288481;

	t23 = (x93|((x94==x95)|x96));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x98 = -1LL;
	volatile int64_t x100 = INT64_MAX;
	int64_t t24 = INT64_MAX;

	t24 = (x97|((x98==x99)|x100));

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 663U;
	int16_t x103 = 1;
	int32_t x104 = 11;
	volatile uint32_t t25 = 118840881U;

	t25 = (x101|((x102==x103)|x104));

	if (t25 != 671U) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	volatile uint64_t x106 = 28401666LLU;
	static int64_t x107 = -1LL;
	volatile int64_t t26 = 205965LL;

	t26 = (x105|((x106==x107)|x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 2U;
	static volatile uint16_t x110 = 3U;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MIN;
	int32_t t27 = 105372079;

	t27 = (x109|((x110==x111)|x112));

	if (t27 != -2147483646) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = 67535902630LLU;
	uint16_t x115 = 0U;

	t28 = (x113|((x114==x115)|x116));

	if (t28 != 20541U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x119 = 1U;
	int32_t t29 = -273710;

	t29 = (x117|((x118==x119)|x120));

	if (t29 != 63) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x122 = -219131597LL;
	uint16_t x123 = 31114U;
	int64_t x124 = INT64_MIN;
	volatile int64_t t30 = 839308297LL;

	t30 = (x121|((x122==x123)|x124));

	if (t30 != -2147483648LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int32_t x126 = 5;
	volatile int64_t x127 = -1LL;
	volatile int64_t x128 = -1LL;
	static volatile int64_t t31 = 521704431819641LL;

	t31 = (x125|((x126==x127)|x128));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x130 = 22;
	static int16_t x131 = -1;
	static int16_t x132 = INT16_MIN;
	int32_t t32 = 742979;

	t32 = (x129|((x130==x131)|x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = INT32_MIN;
	int64_t x136 = INT64_MAX;
	volatile int64_t t33 = -5648725224243LL;

	t33 = (x133|((x134==x135)|x136));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;

	t34 = (x137|((x138==x139)|x140));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int16_t x144 = 34;
	static int32_t t35 = -23646444;

	t35 = (x141|((x142==x143)|x144));

	if (t35 != -2147483614) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	static int64_t x146 = INT64_MAX;
	int64_t x147 = -1LL;
	static int8_t x148 = INT8_MIN;
	int32_t t36 = -965587;

	t36 = (x145|((x146==x147)|x148));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MIN;
	static int32_t x151 = 57;
	static int16_t x152 = 130;
	volatile int32_t t37 = -83134481;

	t37 = (x149|((x150==x151)|x152));

	if (t37 != 30434007) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 1U;
	int64_t x155 = INT64_MAX;
	int64_t x156 = 1772114383868520575LL;
	int64_t t38 = -570455233775137365LL;

	t38 = (x153|((x154==x155)|x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int8_t x158 = INT8_MIN;
	int64_t x159 = INT64_MAX;
	static int32_t x160 = INT32_MAX;
	volatile int32_t t39 = 507279139;

	t39 = (x157|((x158==x159)|x160));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	int32_t x162 = 10;
	static int8_t x164 = 0;
	volatile int32_t t40 = -1030246754;

	t40 = (x161|((x162==x163)|x164));

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = UINT32_MAX;
	int8_t x167 = -1;
	int64_t x168 = 1133105388941877920LL;
	volatile int64_t t41 = -25296746450356LL;

	t41 = (x165|((x166==x167)|x168));

	if (t41 != 1133105393086496767LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x171 = 10214796945194LL;
	uint8_t x172 = 14U;
	int32_t t42 = 4;

	t42 = (x169|((x170==x171)|x172));

	if (t42 != -2147483634) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 13637724779348LLU;
	static int16_t x174 = INT16_MIN;
	static volatile uint64_t x175 = 4061602182637545980LLU;
	uint64_t t43 = 6313239341941LLU;

	t43 = (x173|((x174==x175)|x176));

	if (t43 != 13637724779358LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = 0;
	volatile int16_t x178 = -261;
	int8_t x179 = INT8_MIN;
	volatile int8_t x180 = INT8_MIN;
	int32_t t44 = -22;

	t44 = (x177|((x178==x179)|x180));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint16_t x182 = 5248U;
	volatile int64_t t45 = 53548LL;

	t45 = (x181|((x182==x183)|x184));

	if (t45 != -2719LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = 19U;
	volatile int16_t x186 = -1;
	static int8_t x187 = 0;
	volatile int64_t t46 = 1951606993212651221LL;

	t46 = (x185|((x186==x187)|x188));

	if (t46 != -7070610400996077LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = 65U;
	static uint32_t x192 = 895U;
	volatile uint32_t t47 = 1522U;

	t47 = (x189|((x190==x191)|x192));

	if (t47 != 895U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = -1;
	volatile int8_t x195 = 0;
	int16_t x196 = -1953;

	t48 = (x193|((x194==x195)|x196));

	if (t48 != -1953LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = 14191557340LL;
	int16_t x199 = -1;
	volatile uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t49 = UINT64_MAX;

	t49 = (x197|((x198==x199)|x200));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	volatile uint16_t x203 = UINT16_MAX;
	int64_t x204 = -1LL;
	volatile int64_t t50 = 4274149361004916727LL;

	t50 = (x201|((x202==x203)|x204));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -157;
	int16_t x206 = INT16_MIN;
	int16_t x207 = -1;
	volatile int32_t t51 = -1827;

	t51 = (x205|((x206==x207)|x208));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 103U;
	static int64_t x211 = -1839372816479293LL;
	uint8_t x212 = UINT8_MAX;

	t52 = (x209|((x210==x211)|x212));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 53U;
	volatile int64_t x214 = INT64_MAX;
	uint16_t x215 = UINT16_MAX;
	int32_t x216 = INT32_MAX;
	volatile uint32_t t53 = 10690149U;

	t53 = (x213|((x214==x215)|x216));

	if (t53 != 2147483647U) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 0;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t54 = 1065479607;

	t54 = (x217|((x218==x219)|x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 5471486171283LLU;
	volatile int8_t x223 = INT8_MIN;
	static int32_t t55 = -791;

	t55 = (x221|((x222==x223)|x224));

	if (t55 != -32761) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int64_t x226 = -1LL;
	volatile int32_t t56 = INT32_MAX;

	t56 = (x225|((x226==x227)|x228));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = UINT32_MAX;
	uint16_t x232 = 2016U;
	int32_t t57 = -16091;

	t57 = (x229|((x230==x231)|x232));

	if (t57 != -2147481632) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = -1;
	uint32_t x234 = UINT32_MAX;
	int64_t x235 = INT64_MAX;
	uint16_t x236 = 914U;

	t58 = (x233|((x234==x235)|x236));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int16_t x238 = 8116;
	static volatile uint8_t x240 = 110U;

	t59 = (x237|((x238==x239)|x240));

	if (t59 != -9223372036854775698LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MAX;
	int64_t x243 = 42328308440660LL;
	uint16_t x244 = 16330U;

	t60 = (x241|((x242==x243)|x244));

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint64_t x246 = 23971483444807869LLU;
	int8_t x247 = INT8_MIN;
	uint32_t t61 = 2U;

	t61 = (x245|((x246==x247)|x248));

	if (t61 != 1407U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -129354020;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 121828;

	t62 = (x249|((x250==x251)|x252));

	if (t62 != -129353985) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	uint64_t x254 = 383156764403LLU;
	volatile int8_t x255 = INT8_MIN;
	int32_t t63 = -3629684;

	t63 = (x253|((x254==x255)|x256));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 711168379U;
	int32_t x258 = INT32_MAX;
	uint8_t x259 = 41U;
	volatile uint32_t t64 = 10247455U;

	t64 = (x257|((x258==x259)|x260));

	if (t64 != 2858652027U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	static uint8_t x262 = 0U;
	static volatile int64_t x263 = INT64_MAX;
	volatile int32_t x264 = -1;
	volatile int32_t t65 = 8152019;

	t65 = (x261|((x262==x263)|x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 110861U;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = 74840;
	uint32_t t66 = 93660643U;

	t66 = (x265|((x266==x267)|x268));

	if (t66 != 111965U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int8_t x270 = 25;
	uint64_t x271 = 326907LLU;
	int16_t x272 = INT16_MAX;
	static uint64_t t67 = UINT64_MAX;

	t67 = (x269|((x270==x271)|x272));

	if (t67 != UINT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MAX;
	volatile int64_t x276 = -1LL;
	static volatile int64_t t68 = -1736794080476124581LL;

	t68 = (x273|((x274==x275)|x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	volatile int64_t x278 = -1300768LL;
	uint8_t x280 = 62U;
	volatile int32_t t69 = 339;

	t69 = (x277|((x278==x279)|x280));

	if (t69 != -66) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 14883996165218LLU;
	uint64_t x283 = 2236779290936517LLU;
	volatile int8_t x284 = INT8_MIN;
	uint64_t t70 = 424LLU;

	t70 = (x281|((x282==x283)|x284));

	if (t70 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = 10;
	int8_t x286 = INT8_MIN;
	int64_t x287 = INT64_MAX;
	int32_t t71 = 355813746;

	t71 = (x285|((x286==x287)|x288));

	if (t71 != -37) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x290 = -1LL;
	static volatile uint64_t x291 = 1147760740050502850LLU;
	volatile int32_t x292 = -1;
	volatile int64_t t72 = 885398451699306LL;

	t72 = (x289|((x290==x291)|x292));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = INT16_MAX;
	int8_t x295 = -1;
	int16_t x296 = INT16_MIN;
	static volatile int32_t t73 = 74922288;

	t73 = (x293|((x294==x295)|x296));

	if (t73 != -32717) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x298 = INT64_MAX;
	uint16_t x299 = 3644U;
	volatile uint32_t x300 = 1841594U;
	static volatile uint32_t t74 = 251843432U;

	t74 = (x297|((x298==x299)|x300));

	if (t74 != 2149325242U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x301 = INT32_MAX;
	static int64_t x302 = INT64_MIN;
	int16_t x303 = -1;
	int32_t t75 = INT32_MAX;

	t75 = (x301|((x302==x303)|x304));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x306 = 17U;
	int16_t x307 = -456;
	int64_t x308 = INT64_MAX;
	int64_t t76 = -29585LL;

	t76 = (x305|((x306==x307)|x308));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -44;
	static int8_t x310 = -3;
	uint16_t x311 = 16U;
	volatile int32_t t77 = 351;

	t77 = (x309|((x310==x311)|x312));

	if (t77 != -9) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x314 = 1U;
	int32_t x316 = INT32_MAX;
	static int32_t t78 = 43217;

	t78 = (x313|((x314==x315)|x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MAX;
	static int8_t x319 = INT8_MIN;
	volatile uint64_t x320 = 282856052LLU;
	volatile uint64_t t79 = 3944750274393248811LLU;

	t79 = (x317|((x318==x319)|x320));

	if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -3271;
	int64_t x322 = 2918475LL;
	int64_t x323 = 11LL;
	int64_t x324 = INT64_MIN;
	volatile int64_t t80 = -17422LL;

	t80 = (x321|((x322==x323)|x324));

	if (t80 != -3271LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = -1;
	static volatile uint32_t x327 = 106209649U;
	static uint8_t x328 = 36U;
	int32_t t81 = -375;

	t81 = (x325|((x326==x327)|x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = INT64_MAX;
	int32_t x330 = -1;
	int32_t x331 = 68;
	int16_t x332 = INT16_MIN;
	volatile int64_t t82 = -2669681498969756LL;

	t82 = (x329|((x330==x331)|x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	volatile int32_t x334 = INT32_MIN;
	int64_t x335 = -1LL;
	uint8_t x336 = 1U;
	volatile int32_t t83 = -198;

	t83 = (x333|((x334==x335)|x336));

	if (t83 != -2147483647) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MIN;
	uint32_t x338 = 1809U;
	static volatile int8_t x340 = -1;

	t84 = (x337|((x338==x339)|x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x342 = 1397U;
	static volatile uint32_t x343 = 1988348877U;
	uint8_t x344 = 75U;
	volatile int32_t t85 = -5417607;

	t85 = (x341|((x342==x343)|x344));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = UINT8_MAX;
	uint8_t x347 = 11U;
	volatile int16_t x348 = 566;
	volatile int64_t t86 = -2243529763479LL;

	t86 = (x345|((x346==x347)|x348));

	if (t86 != -9223372036854775242LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -73;
	volatile uint32_t x350 = 22U;
	uint32_t x351 = 0U;
	volatile int64_t x352 = INT64_MIN;
	int64_t t87 = -563330368LL;

	t87 = (x349|((x350==x351)|x352));

	if (t87 != -73LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = 844LL;
	static int32_t x354 = INT32_MIN;
	uint64_t x356 = 9649069628322295LLU;
	uint64_t t88 = 2731645918754LLU;

	t88 = (x353|((x354==x355)|x356));

	if (t88 != 9649069628322815LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MIN;
	uint32_t x359 = 12178433U;
	int16_t x360 = INT16_MIN;
	int32_t t89 = -17963927;

	t89 = (x357|((x358==x359)|x360));

	if (t89 != -32513) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MAX;
	int64_t x362 = 278421346055376LL;
	uint64_t x363 = UINT64_MAX;
	uint64_t x364 = 695781755403LLU;

	t90 = (x361|((x362==x363)|x364));

	if (t90 != 695784701951LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x365 = 25;
	static volatile uint16_t x367 = UINT16_MAX;
	uint8_t x368 = 4U;

	t91 = (x365|((x366==x367)|x368));

	if (t91 != 29) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x371 = 521263U;
	int16_t x372 = INT16_MIN;
	int32_t t92 = 1;

	t92 = (x369|((x370==x371)|x372));

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MAX;
	int64_t x375 = INT64_MIN;
	static int32_t x376 = -1227;
	int32_t t93 = -927445;

	t93 = (x373|((x374==x375)|x376));

	if (t93 != -1227) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	volatile int8_t x379 = -5;
	int64_t x380 = INT64_MAX;
	int64_t t94 = 10205283121685LL;

	t94 = (x377|((x378==x379)|x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -1882801426238LL;
	int8_t x382 = 1;
	int16_t x383 = INT16_MAX;
	volatile uint16_t x384 = 29U;

	t95 = (x381|((x382==x383)|x384));

	if (t95 != -1882801426209LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x386 = UINT64_MAX;
	int64_t x387 = -1LL;
	volatile uint16_t x388 = 1529U;
	uint32_t t96 = 172405U;

	t96 = (x385|((x386==x387)|x388));

	if (t96 != 606201U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	static volatile int8_t x390 = -1;
	uint64_t x391 = 5821159135193009LLU;
	uint8_t x392 = 0U;
	volatile int32_t t97 = INT32_MAX;

	t97 = (x389|((x390==x391)|x392));

	if (t97 != INT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x394 = INT32_MAX;
	static volatile uint16_t x395 = UINT16_MAX;
	static int8_t x396 = -1;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (x393|((x394==x395)|x396));

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x399 = -228;

	t99 = (x397|((x398==x399)|x400));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

