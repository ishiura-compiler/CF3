#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x3 = INT32_MIN;
uint8_t x8 = UINT8_MAX;
uint8_t x11 = 81U;
int32_t x13 = INT32_MIN;
static int16_t x14 = INT16_MAX;
int8_t x15 = INT8_MIN;
static volatile int32_t t3 = -57;
int32_t x22 = -1;
static volatile int16_t x23 = -472;
int32_t x24 = INT32_MIN;
volatile int64_t x30 = INT64_MAX;
static volatile int64_t x42 = INT64_MIN;
int32_t x44 = INT32_MAX;
static int32_t x47 = -1710;
int8_t x61 = INT8_MIN;
int64_t x68 = -1LL;
int32_t x82 = -17562;
static int16_t x90 = INT16_MIN;
uint8_t x102 = 0U;
uint8_t x106 = 13U;
static int64_t x108 = 19871340751282LL;
uint32_t x110 = 13690830U;
int8_t x116 = INT8_MIN;
uint32_t x119 = UINT32_MAX;
int16_t x125 = 10144;
int8_t x127 = INT8_MIN;
volatile int16_t x134 = INT16_MIN;
uint64_t x135 = 2243677LLU;
volatile uint64_t t33 = 1957206311LLU;
static volatile int8_t x138 = -33;
int8_t x140 = -1;
int32_t x143 = INT32_MIN;
static int8_t x149 = -1;
volatile uint8_t x152 = UINT8_MAX;
int32_t x156 = -1;
int8_t x160 = 16;
int16_t x166 = -22;
int32_t x169 = -72433000;
int8_t x183 = -1;
uint8_t x191 = 0U;
uint16_t x195 = 1669U;
uint64_t x198 = 847862112358075091LLU;
volatile uint64_t t49 = 33957334132LLU;
volatile uint64_t x201 = 528014573LLU;
int8_t x204 = -1;
uint8_t x207 = 1U;
int32_t x210 = INT32_MIN;
volatile int64_t t52 = 234737653LL;
int16_t x214 = 1;
int64_t x218 = -1LL;
int64_t x224 = -2725491285842LL;
int64_t x226 = -1LL;
volatile int64_t t56 = -1558010373811729634LL;
int32_t x236 = INT32_MIN;
static volatile int64_t t58 = -134328816965890370LL;
int64_t x240 = INT64_MAX;
uint64_t x242 = 2040627LLU;
static int8_t x246 = -2;
uint64_t x248 = 0LLU;
static uint32_t x252 = 4726498U;
int16_t x254 = -3895;
int64_t x255 = 269630768215LL;
int8_t x268 = INT8_MIN;
volatile int64_t t66 = -176949251666360740LL;
static int8_t x270 = -1;
static int16_t x276 = INT16_MIN;
int16_t x277 = 3210;
int8_t x283 = INT8_MAX;
int64_t x287 = INT64_MIN;
int16_t x288 = INT16_MIN;
static int32_t x289 = 2;
uint32_t x295 = 39U;
uint64_t x299 = UINT64_MAX;
volatile uint64_t t74 = 7411827256414083LLU;
int32_t x306 = -1;
int64_t t76 = INT64_MIN;
static uint32_t x310 = 883756538U;
uint8_t x320 = UINT8_MAX;
int16_t x322 = INT16_MAX;
int64_t x324 = 285794072995616LL;
int16_t x325 = INT16_MAX;
int64_t t81 = -3699032600543280LL;
uint8_t x332 = UINT8_MAX;
volatile int8_t x334 = INT8_MIN;
static int32_t t85 = -51292169;
int32_t t86 = 986984625;
uint16_t x349 = 355U;
volatile uint16_t x350 = UINT16_MAX;
uint32_t x351 = 9836156U;
uint64_t t88 = 126751462LLU;
int64_t x358 = -1LL;
int8_t x361 = 26;
volatile uint32_t x366 = 53U;
int32_t x367 = INT32_MAX;
static volatile int32_t x369 = INT32_MIN;
int64_t x373 = -46306LL;
volatile int64_t t93 = -206008718012596575LL;
static int16_t x377 = -2;
int32_t x381 = -1;
static int8_t x385 = 0;
int32_t x386 = INT32_MIN;
volatile int32_t t96 = INT32_MAX;


void f0(void) {
	uint64_t x1 = 487110898575344LLU;
	int64_t x2 = INT64_MAX;
	static uint16_t x4 = UINT16_MAX;
	uint64_t t0 = 857633009101LLU;

	t0 = (((x1^x2)^x3)|x4);

	if (t0 != 9223859146945527807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -5229884924795LL;
	int8_t x6 = -1;
	int8_t x7 = INT8_MAX;
	volatile int64_t t1 = 59221862979291971LL;

	t1 = (((x5^x6)^x7)|x8);

	if (t1 != 5229884924927LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint32_t x10 = 46U;
	volatile int32_t x12 = INT32_MIN;
	int64_t t2 = 30849952LL;

	t2 = (((x9^x10)^x11)|x12);

	if (t2 != -2147483521LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x16 = 2U;

	t3 = (((x13^x14)^x15)|x16);

	if (t3 != 2147451007) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -17;
	uint64_t x18 = 320LLU;
	int64_t x19 = INT64_MIN;
	int16_t x20 = -1;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (((x17^x18)^x19)|x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static uint64_t t5 = 0LLU;

	t5 = (((x21^x22)^x23)|x24);

	if (t5 != 18446744073709551144LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 6996537128030113112LLU;
	uint16_t x26 = 7642U;
	int64_t x27 = INT64_MIN;
	int16_t x28 = INT16_MIN;
	volatile uint64_t t6 = 2LLU;

	t6 = (((x25^x26)^x27)|x28);

	if (t6 != 18446744073709523074LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x31 = -7911;
	int32_t x32 = INT32_MIN;
	volatile int64_t t7 = -27226486140LL;

	t7 = (((x29^x30)^x31)|x32);

	if (t7 != -2147475943LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = INT64_MIN;
	static volatile int16_t x34 = -99;
	uint8_t x35 = UINT8_MAX;
	int64_t x36 = INT64_MIN;
	volatile int64_t t8 = 5863215550LL;

	t8 = (((x33^x34)^x35)|x36);

	if (t8 != -158LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x37 = 1U;
	uint64_t x38 = 15207586916249816LLU;
	int32_t x39 = 44640;
	int64_t x40 = INT64_MIN;
	uint64_t t9 = 334338314261965LLU;

	t9 = (((x37^x38)^x39)|x40);

	if (t9 != 9238579623770988217LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int32_t x43 = INT32_MIN;
	int64_t t10 = 0LL;

	t10 = (((x41^x42)^x43)|x44);

	if (t10 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 441;
	int8_t x46 = 3;
	uint64_t x48 = 48879558835864361LLU;
	uint64_t t11 = 4284675029080LLU;

	t11 = (((x45^x46)^x47)|x48);

	if (t11 != 18446744073709550569LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -102;
	volatile int32_t x50 = INT32_MIN;
	uint8_t x51 = UINT8_MAX;
	int8_t x52 = INT8_MAX;
	volatile int32_t t12 = 70547215;

	t12 = (((x49^x50)^x51)|x52);

	if (t12 != 2147483519) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 44U;
	int8_t x54 = INT8_MIN;
	volatile uint64_t x55 = 2655263294077LLU;
	int32_t x56 = -19;
	volatile uint64_t t13 = 1345470336874125LLU;

	t13 = (((x53^x54)^x55)|x56);

	if (t13 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = -6;
	int32_t x58 = INT32_MIN;
	int32_t x59 = INT32_MIN;
	int32_t x60 = -1;
	static int32_t t14 = 30;

	t14 = (((x57^x58)^x59)|x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 1300872373681LLU;
	int8_t x63 = INT8_MAX;
	int64_t x64 = INT64_MIN;
	static volatile uint64_t t15 = 24141640LLU;

	t15 = (((x61^x62)^x63)|x64);

	if (t15 != 18446742772837177934LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 114LLU;
	volatile int16_t x66 = 402;
	int16_t x67 = -55;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (((x65^x66)^x67)|x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint16_t x70 = 16U;
	int64_t x71 = INT64_MIN;
	int64_t x72 = -18168LL;
	static int64_t t17 = 23LL;

	t17 = (((x69^x70)^x71)|x72);

	if (t17 != -18152LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = -1;
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MAX;
	volatile int64_t x76 = -7708LL;
	volatile int64_t t18 = -327450066473LL;

	t18 = (((x73^x74)^x75)|x76);

	if (t18 != -7708LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MIN;
	int32_t x79 = -1035453128;
	volatile uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (((x77^x78)^x79)|x80);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	int32_t x83 = 8;
	volatile int64_t x84 = INT64_MIN;
	static volatile int64_t t20 = 0LL;

	t20 = (((x81^x82)^x83)|x84);

	if (t20 != -17519LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MAX;
	uint32_t x86 = 469129084U;
	int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MIN;
	uint32_t t21 = 678538949U;

	t21 = (((x85^x86)^x87)|x88);

	if (t21 != 4294967171U) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x89 = UINT64_MAX;
	int16_t x91 = INT16_MIN;
	int32_t x92 = 14292428;
	uint64_t t22 = UINT64_MAX;

	t22 = (((x89^x90)^x91)|x92);

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = UINT16_MAX;
	static int32_t x94 = INT32_MAX;
	static int16_t x95 = INT16_MIN;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = 230156392;

	t23 = (((x93^x94)^x95)|x96);

	if (t23 != -2147418113) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	volatile uint64_t x98 = 822LLU;
	static int32_t x99 = INT32_MIN;
	volatile int8_t x100 = 1;
	uint64_t t24 = 7252870037129LLU;

	t24 = (((x97^x98)^x99)|x100);

	if (t24 != 2147482825LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x101 = INT16_MAX;
	static int16_t x103 = INT16_MIN;
	static uint32_t x104 = UINT32_MAX;
	static uint32_t t25 = UINT32_MAX;

	t25 = (((x101^x102)^x103)|x104);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 51U;
	uint16_t x107 = UINT16_MAX;
	int64_t t26 = -1302133LL;

	t26 = (((x105^x106)^x107)|x108);

	if (t26 != 19871340756979LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = -1LL;
	uint64_t x111 = 13277100557103701LLU;
	int16_t x112 = -1;
	uint64_t t27 = UINT64_MAX;

	t27 = (((x109^x110)^x111)|x112);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = 297246094LL;
	static volatile int8_t x114 = -1;
	int8_t x115 = 7;
	static int64_t t28 = -311696701963383239LL;

	t28 = (((x113^x114)^x115)|x116);

	if (t28 != -10LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1895915463LL;
	uint16_t x118 = 4U;
	int8_t x120 = INT8_MAX;
	volatile int64_t t29 = 17718477453883LL;

	t29 = (((x117^x118)^x119)|x120);

	if (t29 != 2399051903LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x121 = -39;
	uint16_t x122 = 106U;
	static volatile uint32_t x123 = 2763U;
	uint16_t x124 = 26U;
	volatile uint32_t t30 = 16U;

	t30 = (((x121^x122)^x123)|x124);

	if (t30 != 4294964602U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x126 = 14;
	int64_t x128 = 186524758LL;
	int64_t t31 = -510780924514380LL;

	t31 = (((x125^x126)^x127)|x128);

	if (t31 != -898LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	static int8_t x130 = INT8_MAX;
	int16_t x131 = INT16_MAX;
	int32_t x132 = INT32_MIN;
	int32_t t32 = 952301746;

	t32 = (((x129^x130)^x131)|x132);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 3927867U;
	int8_t x136 = 37;

	t33 = (((x133^x134)^x135)|x136);

	if (t33 != 4293284711LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -25;
	int8_t x139 = -1;
	int32_t t34 = -18841869;

	t34 = (((x137^x138)^x139)|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint16_t x142 = 31908U;
	int32_t x144 = -1;
	static int32_t t35 = 732;

	t35 = (((x141^x142)^x143)|x144);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = -15992407;
	int64_t x147 = 1619600281559282740LL;
	static uint8_t x148 = 86U;
	volatile int64_t t36 = -14LL;

	t36 = (((x145^x146)^x147)|x148);

	if (t36 != 1619600281560075743LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MAX;
	volatile int8_t x151 = INT8_MAX;
	int32_t t37 = 858216;

	t37 = (((x149^x150)^x151)|x152);

	if (t37 != -32513) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	static uint64_t x154 = 2747282251346LLU;
	int16_t x155 = -1;
	uint64_t t38 = UINT64_MAX;

	t38 = (((x153^x154)^x155)|x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 1085585081646596019LLU;
	static volatile int8_t x158 = 32;
	static int16_t x159 = 2503;
	uint64_t t39 = 13LLU;

	t39 = (((x157^x158)^x159)|x160);

	if (t39 != 1085585081646593620LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	static uint8_t x162 = UINT8_MAX;
	volatile uint64_t x163 = 1447LLU;
	uint8_t x164 = 1U;
	uint64_t t40 = 49137LLU;

	t40 = (((x161^x162)^x163)|x164);

	if (t40 != 18446744073709550247LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x165 = 81207037800427199LL;
	int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	volatile int64_t t41 = -71753761LL;

	t41 = (((x165^x166)^x167)|x168);

	if (t41 != -20779LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -6;
	int32_t x171 = INT32_MAX;
	uint16_t x172 = 4U;
	volatile int32_t t42 = 312383;

	t42 = (((x169^x170)^x171)|x172);

	if (t42 != 2075050653) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 69U;
	uint16_t x174 = 112U;
	int64_t x175 = -971437848046518LL;
	uint64_t x176 = 903209046LLU;
	uint64_t t43 = 55334280266111668LLU;

	t43 = (((x173^x174)^x175)|x176);

	if (t43 != 18445772636764370047LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = -1;
	int16_t x178 = INT16_MIN;
	int64_t x179 = 55226203570452LL;
	volatile uint32_t x180 = 32789690U;
	int64_t t44 = 509007LL;

	t44 = (((x177^x178)^x179)|x180);

	if (t44 != 55226232962811LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 805207640740816LL;
	static int16_t x182 = INT16_MAX;
	int8_t x184 = -1;
	static volatile int64_t t45 = -58490518241130LL;

	t45 = (((x181^x182)^x183)|x184);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	volatile int64_t x186 = INT64_MIN;
	uint64_t x187 = UINT64_MAX;
	volatile int64_t x188 = 15922507203LL;
	uint64_t t46 = 7670092288156240362LLU;

	t46 = (((x185^x186)^x187)|x188);

	if (t46 != 9223372052777304063LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 2U;
	int64_t x190 = -27721733202150760LL;
	int16_t x192 = 0;
	static volatile int64_t t47 = 1563LL;

	t47 = (((x189^x190)^x191)|x192);

	if (t47 != -27721733202150758LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int32_t x194 = INT32_MIN;
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t48 = -93769;

	t48 = (((x193^x194)^x195)|x196);

	if (t48 != -6) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x197 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	uint8_t x200 = 7U;

	t49 = (((x197^x198)^x199)|x200);

	if (t49 != 847862111498537687LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = -1;
	int64_t x203 = INT64_MIN;
	uint64_t t50 = UINT64_MAX;

	t50 = (((x201^x202)^x203)|x204);

	if (t50 != UINT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = 2;
	int32_t x206 = -1;
	volatile uint8_t x208 = 55U;
	static int32_t t51 = -10872;

	t51 = (((x205^x206)^x207)|x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = -180292032860603088LL;
	volatile uint16_t x211 = 322U;
	volatile int8_t x212 = INT8_MAX;

	t52 = (((x209^x210)^x211)|x212);

	if (t52 != 180292034521906303LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	int64_t x215 = 234009LL;
	int32_t x216 = 2;
	static volatile int64_t t53 = 6215LL;

	t53 = (((x213^x214)^x215)|x216);

	if (t53 != -257510LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = -1;
	int16_t x219 = 94;
	static uint32_t x220 = 483505U;
	static int64_t t54 = 242LL;

	t54 = (((x217^x218)^x219)|x220);

	if (t54 != 483583LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 0U;
	int8_t x222 = -1;
	int64_t x223 = -1LL;
	volatile int64_t t55 = -11LL;

	t55 = (((x221^x222)^x223)|x224);

	if (t55 != -2725491285842LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int8_t x227 = -1;
	int32_t x228 = INT32_MIN;

	t56 = (((x225^x226)^x227)|x228);

	if (t56 != -2147450881LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = 206;
	uint8_t x230 = UINT8_MAX;
	uint64_t x231 = 2LLU;
	int16_t x232 = INT16_MAX;
	volatile uint64_t t57 = 4373526675404LLU;

	t57 = (((x229^x230)^x231)|x232);

	if (t57 != 32767LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = -83604894090791LL;
	int64_t x234 = INT64_MIN;
	int32_t x235 = -3;

	t58 = (((x233^x234)^x235)|x236);

	if (t58 != -939293148LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 3;
	uint32_t x238 = 71746462U;
	int8_t x239 = INT8_MIN;
	int64_t t59 = INT64_MAX;

	t59 = (((x237^x238)^x239)|x240);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x241 = INT32_MIN;
	volatile int16_t x243 = INT16_MIN;
	static uint16_t x244 = UINT16_MAX;
	volatile uint64_t t60 = 86336564355644067LLU;

	t60 = (((x241^x242)^x243)|x244);

	if (t60 != 2145452031LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	static volatile uint32_t x247 = 805U;
	static uint64_t t61 = 0LLU;

	t61 = (((x245^x246)^x247)|x248);

	if (t61 != 4294966436LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 0;
	int8_t x250 = INT8_MIN;
	int32_t x251 = -1;
	volatile uint32_t t62 = 0U;

	t62 = (((x249^x250)^x251)|x252);

	if (t62 != 4726527U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	volatile uint8_t x256 = 10U;
	int64_t t63 = 1004LL;

	t63 = (((x253^x254)^x255)|x256);

	if (t63 != 9223371767224005790LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 7U;
	int32_t x258 = -1;
	int64_t x259 = 17LL;
	int16_t x260 = -1;
	static int64_t t64 = -8526068482568629LL;

	t64 = (((x257^x258)^x259)|x260);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	uint8_t x262 = 2U;
	static int64_t x263 = 503LL;
	int16_t x264 = -1;
	static volatile int64_t t65 = 684147105LL;

	t65 = (((x261^x262)^x263)|x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	volatile int16_t x266 = INT16_MIN;
	int16_t x267 = -241;

	t66 = (((x265^x266)^x267)|x268);

	if (t66 != -16LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -1;
	int32_t x271 = INT32_MIN;
	int8_t x272 = 1;
	int32_t t67 = 499;

	t67 = (((x269^x270)^x271)|x272);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	uint32_t x274 = UINT32_MAX;
	uint16_t x275 = 484U;
	int64_t t68 = -4855949LL;

	t68 = (((x273^x274)^x275)|x276);

	if (t68 != -485LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x278 = 70U;
	int16_t x279 = INT16_MAX;
	uint8_t x280 = UINT8_MAX;
	int32_t t69 = 608303;

	t69 = (((x277^x278)^x279)|x280);

	if (t69 != 29695) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 247954041U;
	int32_t x282 = 275574;
	int16_t x284 = INT16_MAX;
	uint32_t t70 = 32011U;

	t70 = (((x281^x282)^x283)|x284);

	if (t70 != 247693311U) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 1295605223U;
	int16_t x286 = INT16_MIN;
	int64_t t71 = 2071830635778615LL;

	t71 = (((x285^x286)^x287)|x288);

	if (t71 != -8729LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x290 = 7;
	static volatile int8_t x291 = -13;
	int32_t x292 = -14;
	volatile int32_t t72 = -20954628;

	t72 = (((x289^x290)^x291)|x292);

	if (t72 != -10) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x293 = 7493677041347454LLU;
	int32_t x294 = INT32_MIN;
	int8_t x296 = 2;
	uint64_t t73 = 97727600169LLU;

	t73 = (((x293^x294)^x295)|x296);

	if (t73 != 18439250395799513947LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 8U;
	int8_t x298 = -1;
	volatile int16_t x300 = INT16_MAX;

	t74 = (((x297^x298)^x299)|x300);

	if (t74 != 32767LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = 1;
	static int8_t x302 = -1;
	int32_t x303 = INT32_MAX;
	volatile int64_t x304 = -28875172837288LL;
	volatile int64_t t75 = 193235962LL;

	t75 = (((x301^x302)^x303)|x304);

	if (t75 != -107706279LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x305 = 0U;
	int64_t x307 = -1LL;
	volatile int64_t x308 = INT64_MIN;

	t76 = (((x305^x306)^x307)|x308);

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 85859291996615171LLU;
	static volatile int8_t x311 = 2;
	int64_t x312 = INT64_MIN;
	uint64_t t77 = 1776367LLU;

	t77 = (((x309^x310)^x311)|x312);

	if (t77 != 9309231328122830843LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 521314U;
	static volatile uint32_t x314 = 561328U;
	int32_t x315 = 1026789;
	static int32_t x316 = 3;
	static uint32_t t78 = 1539261U;

	t78 = (((x313^x314)^x315)|x316);

	if (t78 != 52791U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	uint64_t x318 = UINT64_MAX;
	int64_t x319 = INT64_MAX;
	uint64_t t79 = 139940485282891LLU;

	t79 = (((x317^x318)^x319)|x320);

	if (t79 != 9223372036854743295LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = UINT8_MAX;
	static uint32_t x323 = 45U;
	int64_t t80 = -2LL;

	t80 = (((x321^x322)^x323)|x324);

	if (t80 != 285794073018157LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = INT8_MAX;
	int64_t x327 = INT64_MIN;
	uint8_t x328 = 25U;

	t81 = (((x325^x326)^x327)|x328);

	if (t81 != -9223372036854743143LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = INT8_MIN;
	volatile int64_t x330 = 14719501430914LL;
	volatile int64_t x331 = INT64_MIN;
	int64_t t82 = 101825324035080516LL;

	t82 = (((x329^x330)^x331)|x332);

	if (t82 != 9223357317353345023LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = UINT16_MAX;
	static uint8_t x335 = UINT8_MAX;
	int16_t x336 = 3;
	static int32_t t83 = 29557006;

	t83 = (((x333^x334)^x335)|x336);

	if (t83 != -65405) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -5610016489323LL;
	uint64_t x338 = 1345349392288454862LLU;
	int32_t x339 = -1882825;
	uint64_t x340 = 197335265386119LLU;
	volatile uint64_t t84 = 88099LLU;

	t84 = (((x337^x338)^x339)|x340);

	if (t84 != 1345366276028473327LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = -1;
	int32_t x342 = -1;
	int32_t x343 = -1;
	volatile int16_t x344 = INT16_MAX;

	t85 = (((x341^x342)^x343)|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 5U;
	int8_t x346 = -1;
	volatile int16_t x347 = 1;
	uint16_t x348 = 44U;

	t86 = (((x345^x346)^x347)|x348);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x352 = INT64_MIN;
	volatile int64_t t87 = 6741206928359LL;

	t87 = (((x349^x350)^x351)|x352);

	if (t87 != -9223372036844885792LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 3LLU;
	volatile uint32_t x354 = 915525883U;
	int8_t x355 = INT8_MAX;
	volatile uint32_t x356 = UINT32_MAX;

	t88 = (((x353^x354)^x355)|x356);

	if (t88 != 4294967295LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MAX;
	int64_t t89 = 207647502512358687LL;

	t89 = (((x357^x358)^x359)|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x362 = -109752698595LL;
	uint64_t x363 = 3026905323682LLU;
	int8_t x364 = INT8_MIN;
	volatile uint64_t t90 = 8684596699LLU;

	t90 = (((x361^x362)^x363)|x364);

	if (t90 != 18446744073709551525LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 71U;
	int8_t x368 = INT8_MIN;
	uint32_t t91 = 422388U;

	t91 = (((x365^x366)^x367)|x368);

	if (t91 != 4294967181U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -1LL;
	uint64_t x371 = UINT64_MAX;
	int32_t x372 = INT32_MIN;
	static uint64_t t92 = 415744706059900LLU;

	t92 = (((x369^x370)^x371)|x372);

	if (t92 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = INT64_MIN;
	int32_t x375 = 298658;
	int16_t x376 = -1;

	t93 = (((x373^x374)^x375)|x376);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x378 = -1806586684747LL;
	volatile int64_t x379 = -1LL;
	static int64_t x380 = INT64_MIN;
	int64_t t94 = 1LL;

	t94 = (((x377^x378)^x379)|x380);

	if (t94 != -1806586684748LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -38;
	uint16_t x383 = 201U;
	int32_t x384 = 3;
	volatile int32_t t95 = 6;

	t95 = (((x381^x382)^x383)|x384);

	if (t95 != 239) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x387 = -9;
	static uint16_t x388 = 19196U;

	t96 = (((x385^x386)^x387)|x388);

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	static int32_t x390 = -1;
	volatile int16_t x391 = INT16_MIN;
	static uint64_t x392 = UINT64_MAX;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (((x389^x390)^x391)|x392);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x393 = 63U;
	uint32_t x394 = 1482914U;
	uint8_t x395 = UINT8_MAX;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t98 = UINT32_MAX;

	t98 = (((x393^x394)^x395)|x396);

	if (t98 != UINT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	uint32_t x398 = 26080U;
	uint8_t x399 = 92U;
	static volatile int64_t x400 = INT64_MIN;
	volatile int64_t t99 = -1518029426LL;

	t99 = (((x397^x398)^x399)|x400);

	if (t99 != -9223372032559834557LL) { NG(); } else { ; }
	
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

