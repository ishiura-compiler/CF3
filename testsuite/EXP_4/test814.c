
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = -21;
static int8_t x10 = -1;
static uint16_t x14 = UINT16_MAX;
volatile uint16_t x15 = 0U;
static int32_t t3 = -1685;
int64_t x17 = INT64_MIN;
int16_t x21 = -1854;
volatile int8_t x33 = -1;
int16_t x35 = INT16_MIN;
static volatile int32_t t8 = 5;
static uint8_t x48 = 25U;
volatile int32_t x54 = 66044427;
volatile uint64_t t13 = 633957763905712LLU;
static volatile int8_t x61 = INT8_MIN;
int32_t x62 = -34027;
int64_t x70 = INT64_MIN;
int16_t x73 = INT16_MIN;
int64_t x75 = INT64_MIN;
int16_t x76 = INT16_MIN;
uint32_t t21 = 317U;
volatile int16_t x90 = INT16_MIN;
uint64_t t28 = 15837LLU;
static volatile uint64_t t31 = 1LLU;
uint8_t x137 = 73U;
static volatile uint64_t x151 = UINT64_MAX;
uint8_t x158 = 0U;
int8_t x159 = INT8_MIN;
int32_t x161 = -1;
int64_t x164 = -1LL;
uint64_t x165 = UINT64_MAX;
uint32_t x169 = 0U;
int64_t x170 = INT64_MIN;
static uint64_t x174 = 1788938780LLU;
uint8_t x176 = 8U;
volatile int64_t x177 = INT64_MAX;
uint8_t x179 = UINT8_MAX;
uint16_t x186 = UINT16_MAX;
int64_t x197 = INT64_MIN;
int64_t t44 = INT64_MIN;
volatile int32_t x202 = -1;
uint8_t x203 = 9U;
static int16_t x206 = INT16_MIN;
int16_t x214 = INT16_MIN;
int32_t x216 = INT32_MIN;
static int64_t x221 = 4163985215794241LL;
static int8_t x224 = 4;
uint64_t t51 = 15034708635636980LLU;
uint64_t t52 = 230666242225031LLU;
static int32_t x241 = 29;
int16_t x246 = INT16_MIN;
uint8_t x253 = UINT8_MAX;
uint8_t x268 = UINT8_MAX;
volatile uint8_t x269 = 19U;
volatile uint64_t t61 = 86733305156839LLU;
static uint16_t x286 = 155U;
uint64_t x292 = 103471907354346156LLU;
static uint64_t t65 = 6953LLU;
uint32_t x301 = 1226054501U;
uint32_t x304 = 925U;
int16_t x305 = 228;
int8_t x317 = INT8_MIN;
int64_t x322 = -1LL;
int8_t x325 = 17;
int64_t x336 = -1LL;
static int64_t t74 = -785259508LL;
volatile int32_t x343 = -1;
uint8_t x346 = UINT8_MAX;
int32_t t77 = -1;
int8_t x352 = INT8_MIN;
int32_t x357 = -391979;
int64_t t80 = -10022932447204LL;
volatile int8_t x367 = 1;
volatile int32_t x376 = -1;
int64_t x378 = -1LL;
int64_t t85 = -2366LL;
static uint32_t x382 = UINT32_MAX;
int32_t x389 = 192646;
uint8_t x390 = 6U;
int8_t x392 = -1;
volatile uint64_t x394 = UINT64_MAX;
int64_t x400 = INT64_MIN;
int64_t x406 = 22756316822LL;
int64_t x409 = INT64_MAX;
int32_t x412 = INT32_MIN;
volatile int8_t x425 = INT8_MIN;
static uint32_t t98 = 2U;
uint32_t x445 = 1181952263U;
uint64_t x470 = UINT64_MAX;
uint8_t x482 = UINT8_MAX;
static uint8_t x486 = 12U;
int64_t x491 = INT64_MIN;
int32_t x495 = INT32_MAX;
volatile int32_t t110 = 73546811;
static uint16_t x497 = 1226U;
int64_t x500 = INT64_MAX;
uint64_t t111 = 257144452559124755LLU;
uint64_t x510 = 24839118470239559LLU;
int16_t x513 = INT16_MIN;
uint32_t t115 = 70846421U;
static int32_t x534 = INT32_MIN;
uint16_t x535 = 199U;
volatile uint8_t x537 = UINT8_MAX;
int8_t x547 = 1;
static volatile uint64_t t120 = 1LLU;
uint32_t x554 = 147790U;
volatile int8_t x563 = -1;
int8_t x597 = INT8_MAX;
int16_t x599 = 2;
int64_t x618 = INT64_MIN;
volatile int8_t x621 = INT8_MAX;
static int8_t x626 = INT8_MIN;
int32_t x627 = -1;
int64_t x630 = 28078226767LL;
uint8_t x635 = UINT8_MAX;
volatile uint64_t t139 = 67857425613502LLU;
volatile uint32_t x638 = 14192430U;
static int32_t x644 = INT32_MIN;
static volatile int32_t t141 = -87;
uint32_t x647 = 7U;
int64_t x654 = -1LL;
static volatile int16_t x659 = INT16_MIN;
int32_t x662 = 346;
int8_t x667 = INT8_MIN;
static uint32_t t147 = 11237U;
static int64_t x669 = 15235764136989LL;
uint8_t x677 = 79U;
static volatile uint64_t t152 = 853841994763450070LLU;
uint64_t x692 = 28418LLU;
int32_t x694 = INT32_MIN;
int8_t x698 = INT8_MAX;
static int16_t x699 = -1;
int64_t x700 = -1LL;
int16_t x705 = -1;
uint32_t x706 = 31440U;
int16_t x708 = INT16_MIN;
uint64_t t158 = 7355095712035LLU;
uint16_t x730 = 25U;
static int32_t x731 = -386097555;
uint8_t x733 = 1U;
int32_t x741 = INT32_MIN;
uint32_t x743 = UINT32_MAX;
volatile int16_t x745 = INT16_MIN;
uint8_t x750 = UINT8_MAX;
uint8_t x754 = 22U;
int64_t x756 = INT64_MIN;
int8_t x761 = INT8_MIN;
uint16_t x762 = 6296U;
uint64_t x763 = 7027464338LLU;
uint8_t x772 = 82U;
static volatile uint64_t t172 = 1354702603459439230LLU;
volatile int8_t x797 = INT8_MIN;
uint64_t t173 = 1188LLU;
volatile uint64_t t174 = UINT64_MAX;
volatile int32_t t175 = -3;
uint16_t x810 = 5U;
int8_t x817 = INT8_MIN;
volatile uint64_t x819 = 572111149267724622LLU;
static int32_t x821 = INT32_MAX;
int32_t x827 = 119517850;
int8_t x833 = -43;
int64_t x838 = 17873LL;
int64_t x842 = INT64_MAX;
int32_t x851 = -15;
int32_t x868 = -1;
int64_t t186 = 1336LL;
uint32_t t187 = 758U;
volatile int32_t x874 = -1;
volatile int16_t x878 = -1;
static int64_t x884 = INT64_MIN;
static uint8_t x886 = 31U;
int8_t x891 = INT8_MAX;
volatile uint64_t x894 = 148568554718939LLU;
int16_t x903 = -1;
int64_t x904 = INT64_MAX;
int64_t t194 = 376645026541976538LL;
int32_t t197 = 148967;
uint8_t x928 = 4U;


void f0(void) {
    	static uint8_t x1 = 10U;
	volatile int16_t x2 = -143;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 398287607U;

    t0 = (x1-(x2*(x3%x4)));

    if (t0 != 4294964303U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -122;
	static volatile int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MAX;
	int64_t x8 = -3LL;
	volatile int64_t t1 = -1487974398418152LL;

    t1 = (x5-(x6*(x7%x8)));

    if (t1 != 2147483526LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int8_t x9 = 0;
	int16_t x11 = INT16_MIN;
	uint8_t x12 = 91U;
	int32_t t2 = -167417;

    t2 = (x9-(x10*(x11%x12)));

    if (t2 != -8) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 16222;
	static int32_t x16 = -140;

    t3 = (x13-(x14*(x15%x16)));

    if (t3 != 16222) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x18 = 40408;
	static int64_t x19 = -1185261517700LL;
	int32_t x20 = INT32_MIN;
	volatile int64_t t4 = -457902LL;

    t4 = (x17-(x18*(x19%x20)));

    if (t4 != -9223291300553413792LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x22 = 2U;
	int32_t x23 = 51;
	static volatile int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -989;

    t5 = (x21-(x22*(x23%x24)));

    if (t5 != -1956) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x25 = INT8_MAX;
	int32_t x26 = -246;
	static int32_t x27 = 3318;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 458159LLU;

    t6 = (x25-(x26*(x27%x28)));

    if (t6 != 816355LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x29 = INT64_MIN;
	int32_t x30 = -12885121;
	static int64_t x31 = 97863LL;
	int64_t x32 = INT64_MAX;
	volatile int64_t t7 = 436LL;

    t7 = (x29-(x30*(x31%x32)));

    if (t7 != -9223370775878179385LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x34 = -796275;
	int16_t x36 = -2133;

    t8 = (x33-(x34*(x35%x36)));

    if (t8 != -615520576) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	static int16_t x38 = 673;
	int32_t x39 = 2125667;
	int32_t x40 = INT32_MAX;
	int32_t t9 = 1259899;

    t9 = (x37-(x38*(x39%x40)));

    if (t9 != -1430573892) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x41 = -1;
	int8_t x42 = INT8_MIN;
	volatile int8_t x43 = INT8_MAX;
	volatile int64_t x44 = 4230316LL;
	int64_t t10 = 90355715265593606LL;

    t10 = (x41-(x42*(x43%x44)));

    if (t10 != 16255LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x45 = INT64_MIN;
	int8_t x46 = INT8_MAX;
	int8_t x47 = -1;
	int64_t t11 = 34LL;

    t11 = (x45-(x46*(x47%x48)));

    if (t11 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x49 = 11U;
	static uint16_t x50 = 1452U;
	uint32_t x51 = UINT32_MAX;
	int8_t x52 = -43;
	volatile uint32_t t12 = 3815735U;

    t12 = (x49-(x50*(x51%x52)));

    if (t12 != 4294906323U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x53 = INT64_MAX;
	int64_t x55 = INT64_MIN;
	uint64_t x56 = 3830257LLU;

    t13 = (x53-(x54*(x55%x56)));

    if (t13 != 9223317667101136597LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x57 = UINT16_MAX;
	int64_t x58 = 383128268157454LL;
	static int8_t x59 = 0;
	static int16_t x60 = INT16_MAX;
	static volatile int64_t t14 = -7207074642235874LL;

    t14 = (x57-(x58*(x59%x60)));

    if (t14 != 65535LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x63 = INT8_MIN;
	int32_t x64 = INT32_MAX;
	static volatile int32_t t15 = -12081;

    t15 = (x61-(x62*(x63%x64)));

    if (t15 != -4355584) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x65 = -1;
	int64_t x66 = INT64_MIN;
	static int64_t x67 = -1LL;
	int8_t x68 = -1;
	volatile int64_t t16 = 15286574442325LL;

    t16 = (x65-(x66*(x67%x68)));

    if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x69 = UINT64_MAX;
	static int8_t x71 = -1;
	static volatile uint32_t x72 = UINT32_MAX;
	static uint64_t t17 = UINT64_MAX;

    t17 = (x69-(x70*(x71%x72)));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x74 = INT8_MAX;
	int64_t t18 = 250255936200LL;

    t18 = (x73-(x74*(x75%x76)));

    if (t18 != -32768LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x77 = 15352188961881LLU;
	volatile uint64_t x78 = 1LLU;
	volatile uint64_t x79 = 334088LLU;
	int8_t x80 = -1;
	volatile uint64_t t19 = 2015LLU;

    t19 = (x77-(x78*(x79%x80)));

    if (t19 != 15352188627793LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x81 = INT16_MAX;
	static uint16_t x82 = 7306U;
	int8_t x83 = -1;
	int16_t x84 = INT16_MIN;
	volatile int32_t t20 = -58787;

    t20 = (x81-(x82*(x83%x84)));

    if (t20 != 40073) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = INT8_MAX;
	static uint32_t x86 = 362405U;
	int8_t x87 = INT8_MIN;
	static int16_t x88 = 153;

    t21 = (x85-(x86*(x87%x88)));

    if (t21 != 46387967U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x89 = UINT64_MAX;
	volatile int32_t x91 = 931;
	volatile int64_t x92 = -1LL;
	volatile uint64_t t22 = UINT64_MAX;

    t22 = (x89-(x90*(x91%x92)));

    if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x93 = 5048150478968LLU;
	uint64_t x94 = UINT64_MAX;
	uint64_t x95 = UINT64_MAX;
	uint16_t x96 = 13U;
	volatile uint64_t t23 = 568286037530958852LLU;

    t23 = (x93-(x94*(x95%x96)));

    if (t23 != 5048150478970LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x97 = -7036;
	int64_t x98 = -8237986LL;
	int8_t x99 = INT8_MAX;
	int32_t x100 = INT32_MAX;
	int64_t t24 = -2325844LL;

    t24 = (x97-(x98*(x99%x100)));

    if (t24 != 1046217186LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = 440778577365548384LL;
	int32_t x106 = 23;
	int64_t x107 = INT64_MIN;
	int32_t x108 = 167;
	volatile int64_t t25 = -3739368748718LL;

    t25 = (x105-(x106*(x107%x108)));

    if (t25 != 440778577365550868LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x109 = INT16_MIN;
	static uint16_t x110 = 145U;
	int32_t x111 = INT32_MIN;
	static int32_t x112 = -1;
	volatile int32_t t26 = 12;

    t26 = (x109-(x110*(x111%x112)));

    if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -1;
	int64_t x114 = INT64_MIN;
	uint64_t x115 = UINT64_MAX;
	uint32_t x116 = 227031364U;
	volatile uint64_t t27 = 2653168082901335408LLU;

    t27 = (x113-(x114*(x115%x116)));

    if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x117 = 254U;
	uint64_t x118 = 41183LLU;
	int16_t x119 = INT16_MIN;
	uint32_t x120 = 17949596U;

    t28 = (x117-(x118*(x119%x120)));

    if (t28 != 18446743868573569498LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x121 = 3;
	uint32_t x122 = UINT32_MAX;
	int16_t x123 = INT16_MIN;
	int64_t x124 = -1LL;
	static volatile int64_t t29 = 0LL;

    t29 = (x121-(x122*(x123%x124)));

    if (t29 != 3LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x125 = -1LL;
	int32_t x126 = 9211;
	uint64_t x127 = 120275LLU;
	volatile int16_t x128 = 1;
	static volatile uint64_t t30 = UINT64_MAX;

    t30 = (x125-(x126*(x127%x128)));

    if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x133 = UINT32_MAX;
	int64_t x134 = 83LL;
	static uint8_t x135 = UINT8_MAX;
	uint64_t x136 = 43402615682LLU;

    t31 = (x133-(x134*(x135%x136)));

    if (t31 != 4294946130LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int8_t x138 = -1;
	uint32_t x139 = 1U;
	int64_t x140 = 5462776151221LL;
	int64_t t32 = -4283LL;

    t32 = (x137-(x138*(x139%x140)));

    if (t32 != 74LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x141 = UINT16_MAX;
	int64_t x142 = INT64_MIN;
	static uint64_t x143 = 255398512LLU;
	volatile int16_t x144 = INT16_MIN;
	volatile uint64_t t33 = 6252225LLU;

    t33 = (x141-(x142*(x143%x144)));

    if (t33 != 65535LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x149 = INT32_MIN;
	static int64_t x150 = INT64_MIN;
	static uint8_t x152 = 23U;
	uint64_t t34 = 339LLU;

    t34 = (x149-(x150*(x151%x152)));

    if (t34 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = -1;
	uint64_t x160 = UINT64_MAX;
	uint64_t t35 = UINT64_MAX;

    t35 = (x157-(x158*(x159%x160)));

    if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x162 = 1;
	int16_t x163 = 2;
	volatile int64_t t36 = 604203204LL;

    t36 = (x161-(x162*(x163%x164)));

    if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x166 = UINT32_MAX;
	volatile int16_t x167 = -1;
	int16_t x168 = INT16_MIN;
	uint64_t t37 = 250733095988LLU;

    t37 = (x165-(x166*(x167%x168)));

    if (t37 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x171 = 2061LLU;
	volatile int32_t x172 = INT32_MIN;
	volatile uint64_t t38 = 64879914875828LLU;

    t38 = (x169-(x170*(x171%x172)));

    if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x173 = INT16_MIN;
	static int8_t x175 = INT8_MIN;
	volatile uint64_t t39 = 14LLU;

    t39 = (x173-(x174*(x175%x176)));

    if (t39 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x178 = INT64_MAX;
	int16_t x180 = -1;
	volatile int64_t t40 = INT64_MAX;

    t40 = (x177-(x178*(x179%x180)));

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x181 = INT32_MAX;
	static uint32_t x182 = 13402258U;
	uint64_t x183 = 8494953886400LLU;
	volatile int32_t x184 = INT32_MIN;
	volatile uint64_t t41 = 940199LLU;

    t41 = (x181-(x182*(x183%x184)));

    if (t41 != 15275644834478853759LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x185 = INT16_MAX;
	volatile uint8_t x187 = 14U;
	static uint16_t x188 = 30U;
	volatile int32_t t42 = 1;

    t42 = (x185-(x186*(x187%x188)));

    if (t42 != -884723) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x193 = INT32_MIN;
	int8_t x194 = 7;
	uint8_t x195 = 0U;
	int32_t x196 = -1;
	volatile int32_t t43 = INT32_MIN;

    t43 = (x193-(x194*(x195%x196)));

    if (t43 != INT32_MIN) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x198 = INT32_MAX;
	static int16_t x199 = -1;
	int8_t x200 = 1;

    t44 = (x197-(x198*(x199%x200)));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int16_t x201 = 1;
	int64_t x204 = INT64_MIN;
	volatile int64_t t45 = -3710706611770706221LL;

    t45 = (x201-(x202*(x203%x204)));

    if (t45 != 10LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x205 = 7002147U;
	volatile uint64_t x207 = 7559LLU;
	uint32_t x208 = 295298U;
	uint64_t t46 = 3555315121552285917LLU;

    t46 = (x205-(x206*(x207%x208)));

    if (t46 != 254695459LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x209 = UINT32_MAX;
	int64_t x210 = INT64_MIN;
	static uint64_t x211 = 408519061078273876LLU;
	int8_t x212 = -1;
	volatile uint64_t t47 = 995604680383596165LLU;

    t47 = (x209-(x210*(x211%x212)));

    if (t47 != 4294967295LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x213 = 414;
	uint8_t x215 = UINT8_MAX;
	volatile int32_t t48 = -1;

    t48 = (x213-(x214*(x215%x216)));

    if (t48 != 8356254) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile int8_t x222 = INT8_MIN;
	int16_t x223 = -3;
	volatile int64_t t49 = 25971299LL;

    t49 = (x221-(x222*(x223%x224)));

    if (t49 != 4163985215793857LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x225 = UINT16_MAX;
	static volatile int32_t x226 = -2170;
	uint64_t x227 = 725857LLU;
	int16_t x228 = INT16_MAX;
	uint64_t t50 = 1174477LLU;

    t50 = (x225-(x226*(x227%x228)));

    if (t50 != 10878645LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MIN;
	uint16_t x231 = UINT16_MAX;
	uint64_t x232 = 33LLU;

    t51 = (x229-(x230*(x231%x232)));

    if (t51 != 983167LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x233 = 12979401LLU;
	static int8_t x234 = INT8_MIN;
	volatile uint8_t x235 = 60U;
	volatile int16_t x236 = INT16_MAX;

    t52 = (x233-(x234*(x235%x236)));

    if (t52 != 12987081LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x242 = -513111LL;
	static int16_t x243 = INT16_MIN;
	uint32_t x244 = 343U;
	volatile int64_t t53 = 45919LL;

    t53 = (x241-(x242*(x243%x244)));

    if (t53 != 1539362LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x245 = 1;
	uint64_t x247 = 2562116971LLU;
	uint16_t x248 = UINT16_MAX;
	volatile uint64_t t54 = 127751441279604378LLU;

    t54 = (x245-(x246*(x247%x248)));

    if (t54 != 856752129LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MIN;
	static volatile int32_t x251 = INT32_MIN;
	int8_t x252 = -1;
	volatile int32_t t55 = INT32_MIN;

    t55 = (x249-(x250*(x251%x252)));

    if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x254 = INT16_MIN;
	int64_t x255 = -1LL;
	volatile int8_t x256 = INT8_MAX;
	static volatile int64_t t56 = -4897666LL;

    t56 = (x253-(x254*(x255%x256)));

    if (t56 != -32513LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x257 = 14;
	uint64_t x258 = 16090252LLU;
	int16_t x259 = -99;
	int32_t x260 = -586256;
	uint64_t t57 = 2567405848299091589LLU;

    t57 = (x257-(x258*(x259%x260)));

    if (t57 != 1592934962LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = 52;
	uint8_t x262 = 31U;
	int8_t x263 = INT8_MIN;
	static int64_t x264 = INT64_MAX;
	int64_t t58 = 104128265216160LL;

    t58 = (x261-(x262*(x263%x264)));

    if (t58 != 4020LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x265 = 1121U;
	int32_t x266 = -128;
	int64_t x267 = -1LL;
	volatile int64_t t59 = 257097364361759847LL;

    t59 = (x265-(x266*(x267%x268)));

    if (t59 != 993LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x270 = -1LL;
	static uint64_t x271 = UINT64_MAX;
	volatile int32_t x272 = INT32_MIN;
	uint64_t t60 = 1LLU;

    t60 = (x269-(x270*(x271%x272)));

    if (t60 != 2147483666LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x273 = 15U;
	uint64_t x274 = 7776LLU;
	volatile int8_t x275 = INT8_MAX;
	uint32_t x276 = 8659203U;

    t61 = (x273-(x274*(x275%x276)));

    if (t61 != 18446744073708564079LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x277 = 4076;
	int16_t x278 = INT16_MIN;
	int32_t x279 = INT32_MIN;
	int16_t x280 = INT16_MIN;
	int32_t t62 = -23;

    t62 = (x277-(x278*(x279%x280)));

    if (t62 != 4076) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int16_t x281 = -472;
	uint64_t x282 = 30768768248389393LLU;
	uint64_t x283 = UINT64_MAX;
	int32_t x284 = -22;
	uint64_t t63 = 42145536118860LLU;

    t63 = (x281-(x282*(x283%x284)));

    if (t63 != 17800599940493373891LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x285 = 27101LLU;
	volatile int32_t x287 = INT32_MIN;
	static int16_t x288 = INT16_MAX;
	uint64_t t64 = 16166550LLU;

    t64 = (x285-(x286*(x287%x288)));

    if (t64 != 27411LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int16_t x289 = INT16_MIN;
	int32_t x290 = -1;
	volatile int64_t x291 = INT64_MIN;

    t65 = (x289-(x290*(x291%x292)));

    if (t65 != 14372282317935156LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = 10;
	int8_t x294 = INT8_MIN;
	int16_t x295 = 9778;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t66 = 850;

    t66 = (x293-(x294*(x295%x296)));

    if (t66 != 1251594) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x302 = 31;
	int32_t x303 = 195629;
	uint32_t t67 = 3700U;

    t67 = (x301-(x302*(x303%x304)));

    if (t67 != 1226040427U) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x306 = UINT32_MAX;
	int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t68 = -14613898809811671LL;

    t68 = (x305-(x306*(x307%x308)));

    if (t68 != 228LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = 2U;
	uint32_t x310 = 617U;
	uint16_t x311 = 1U;
	static volatile int16_t x312 = INT16_MIN;
	uint32_t t69 = 4U;

    t69 = (x309-(x310*(x311%x312)));

    if (t69 != 4294966681U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x313 = 1661U;
	volatile int8_t x314 = -1;
	volatile uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MAX;
	volatile uint64_t t70 = 6952407852556331943LLU;

    t70 = (x313-(x314*(x315%x316)));

    if (t70 != 1662LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x318 = 107108879LL;
	static int64_t x319 = INT64_MIN;
	uint8_t x320 = 25U;
	volatile int64_t t71 = -3107344719880LL;

    t71 = (x317-(x318*(x319%x320)));

    if (t71 != 856870904LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x321 = UINT32_MAX;
	static int64_t x323 = -1748732LL;
	int16_t x324 = -1;
	volatile int64_t t72 = -59713134581136LL;

    t72 = (x321-(x322*(x323%x324)));

    if (t72 != 4294967295LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x326 = -1;
	uint16_t x327 = UINT16_MAX;
	volatile int64_t x328 = INT64_MIN;
	static int64_t t73 = -102922432341LL;

    t73 = (x325-(x326*(x327%x328)));

    if (t73 != 65552LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	static int64_t x334 = INT64_MIN;
	static int64_t x335 = INT64_MAX;

    t74 = (x333-(x334*(x335%x336)));

    if (t74 != 4294967295LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x337 = -1;
	static int8_t x338 = -1;
	int64_t x339 = INT64_MIN;
	uint32_t x340 = UINT32_MAX;
	int64_t t75 = 64395LL;

    t75 = (x337-(x338*(x339%x340)));

    if (t75 != -2147483649LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x341 = 1;
	volatile int16_t x342 = INT16_MIN;
	volatile int32_t x344 = 5;
	int32_t t76 = 1686717;

    t76 = (x341-(x342*(x343%x344)));

    if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x345 = UINT8_MAX;
	int32_t x347 = INT32_MIN;
	volatile uint16_t x348 = 717U;

    t77 = (x345-(x346*(x347%x348)));

    if (t77 != 136170) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x349 = 4269;
	int8_t x350 = 2;
	int8_t x351 = INT8_MAX;
	volatile int32_t t78 = -3465727;

    t78 = (x349-(x350*(x351%x352)));

    if (t78 != 4015) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x353 = 10LL;
	static int32_t x354 = INT32_MAX;
	int64_t x355 = 139089383039991627LL;
	int32_t x356 = -1;
	volatile int64_t t79 = 4023976875678331387LL;

    t79 = (x353-(x354*(x355%x356)));

    if (t79 != 10LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint16_t x358 = UINT16_MAX;
	int64_t x359 = INT64_MIN;
	volatile uint8_t x360 = UINT8_MAX;

    t80 = (x357-(x358*(x359%x360)));

    if (t80 != 7996501LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x361 = UINT32_MAX;
	static int16_t x362 = 12153;
	int8_t x363 = -3;
	int64_t x364 = INT64_MAX;
	int64_t t81 = -1520293188315826LL;

    t81 = (x361-(x362*(x363%x364)));

    if (t81 != 4295003754LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x365 = 3631776428LLU;
	int32_t x366 = INT32_MIN;
	int16_t x368 = 1;
	uint64_t t82 = 972LLU;

    t82 = (x365-(x366*(x367%x368)));

    if (t82 != 3631776428LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x369 = 1LL;
	int64_t x370 = -1LL;
	static int8_t x371 = INT8_MIN;
	static int32_t x372 = INT32_MIN;
	volatile int64_t t83 = 41537414LL;

    t83 = (x369-(x370*(x371%x372)));

    if (t83 != -127LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x373 = UINT64_MAX;
	int16_t x374 = INT16_MIN;
	uint8_t x375 = 2U;
	uint64_t t84 = UINT64_MAX;

    t84 = (x373-(x374*(x375%x376)));

    if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x377 = 3626;
	int64_t x379 = INT64_MIN;
	uint32_t x380 = UINT32_MAX;

    t85 = (x377-(x378*(x379%x380)));

    if (t85 != -2147480022LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint16_t x381 = UINT16_MAX;
	int64_t x383 = -90749510803924LL;
	volatile int16_t x384 = -1;
	volatile int64_t t86 = 9916061183LL;

    t86 = (x381-(x382*(x383%x384)));

    if (t86 != 65535LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x385 = -1346;
	uint16_t x386 = 7605U;
	int32_t x387 = 899523;
	int16_t x388 = -1;
	int32_t t87 = 50886;

    t87 = (x385-(x386*(x387%x388)));

    if (t87 != -1346) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x391 = UINT16_MAX;
	volatile int32_t t88 = -50974;

    t88 = (x389-(x390*(x391%x392)));

    if (t88 != 192646) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int64_t x393 = INT64_MIN;
	volatile int32_t x395 = INT32_MIN;
	static volatile uint64_t x396 = UINT64_MAX;
	static uint64_t t89 = 65413010471596105LLU;

    t89 = (x393-(x394*(x395%x396)));

    if (t89 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint64_t x397 = 17LLU;
	int64_t x398 = INT64_MAX;
	static int64_t x399 = 1LL;
	uint64_t t90 = 220431363212782901LLU;

    t90 = (x397-(x398*(x399%x400)));

    if (t90 != 9223372036854775826LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x401 = UINT32_MAX;
	static int8_t x402 = -4;
	int32_t x403 = -1;
	int16_t x404 = INT16_MIN;
	volatile uint32_t t91 = 283U;

    t91 = (x401-(x402*(x403%x404)));

    if (t91 != 4294967291U) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x405 = INT32_MIN;
	volatile int16_t x407 = INT16_MIN;
	uint32_t x408 = 16391052U;
	int64_t t92 = -2018996308065LL;

    t92 = (x405-(x406*(x407%x408)));

    if (t92 != -10898093298806736LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x410 = 9LLU;
	int64_t x411 = INT64_MAX;
	uint64_t t93 = 268231586LLU;

    t93 = (x409-(x410*(x411%x412)));

    if (t93 != 9223372017527422984LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = INT64_MIN;
	uint16_t x418 = 1036U;
	int8_t x419 = INT8_MIN;
	int32_t x420 = -134386327;
	int64_t t94 = -617315061286274LL;

    t94 = (x417-(x418*(x419%x420)));

    if (t94 != -9223372036854643200LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x421 = INT8_MIN;
	int64_t x422 = -1LL;
	static uint64_t x423 = 19752LLU;
	int16_t x424 = -7;
	volatile uint64_t t95 = 20LLU;

    t95 = (x421-(x422*(x423%x424)));

    if (t95 != 19624LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x426 = 917U;
	uint16_t x427 = 66U;
	uint16_t x428 = 13U;
	volatile uint32_t t96 = 2071333U;

    t96 = (x425-(x426*(x427%x428)));

    if (t96 != 4294966251U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x429 = 545;
	static int32_t x430 = INT32_MAX;
	static uint16_t x431 = UINT16_MAX;
	uint8_t x432 = UINT8_MAX;
	volatile int32_t t97 = -24356048;

    t97 = (x429-(x430*(x431%x432)));

    if (t97 != 545) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x433 = INT16_MIN;
	volatile int8_t x434 = -41;
	int16_t x435 = INT16_MIN;
	uint32_t x436 = 474230500U;

    t98 = (x433-(x434*(x435%x436)));

    if (t98 != 1101228380U) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x441 = 0U;
	static uint16_t x442 = UINT16_MAX;
	volatile uint8_t x443 = 51U;
	int32_t x444 = INT32_MIN;
	volatile uint32_t t99 = 59U;

    t99 = (x441-(x442*(x443%x444)));

    if (t99 != 4291625011U) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint8_t x446 = UINT8_MAX;
	uint16_t x447 = 69U;
	int64_t x448 = INT64_MIN;
	int64_t t100 = -4561277300967964883LL;

    t100 = (x445-(x446*(x447%x448)));

    if (t100 != 1181934668LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x449 = UINT64_MAX;
	int32_t x450 = INT32_MIN;
	uint32_t x451 = 44U;
	volatile uint64_t x452 = 385LLU;
	volatile uint64_t t101 = 45LLU;

    t101 = (x449-(x450*(x451%x452)));

    if (t101 != 94489280511LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int16_t x453 = -3;
	static uint8_t x454 = UINT8_MAX;
	int32_t x455 = INT32_MIN;
	uint16_t x456 = 5U;
	volatile int32_t t102 = 77;

    t102 = (x453-(x454*(x455%x456)));

    if (t102 != 762) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x457 = INT16_MIN;
	int16_t x458 = INT16_MIN;
	int16_t x459 = INT16_MIN;
	int32_t x460 = INT32_MAX;
	int32_t t103 = 4019;

    t103 = (x457-(x458*(x459%x460)));

    if (t103 != -1073774592) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x461 = 92318U;
	static int16_t x462 = INT16_MAX;
	int16_t x463 = -54;
	int32_t x464 = -1;
	uint32_t t104 = 48U;

    t104 = (x461-(x462*(x463%x464)));

    if (t104 != 92318U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x465 = 12764U;
	volatile int64_t x466 = -2707LL;
	uint16_t x467 = UINT16_MAX;
	int16_t x468 = -1;
	volatile int64_t t105 = 309LL;

    t105 = (x465-(x466*(x467%x468)));

    if (t105 != 12764LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x469 = INT32_MIN;
	int16_t x471 = -1065;
	int32_t x472 = 1169243;
	static uint64_t t106 = 256230256601831LLU;

    t106 = (x469-(x470*(x471%x472)));

    if (t106 != 18446744071562066903LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x481 = 5U;
	uint64_t x483 = 3315LLU;
	volatile uint16_t x484 = 11201U;
	volatile uint64_t t107 = 3141969749085LLU;

    t107 = (x481-(x482*(x483%x484)));

    if (t107 != 18446744073708706296LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x485 = INT8_MIN;
	static volatile uint64_t x487 = 6309335696269LLU;
	volatile uint16_t x488 = 216U;
	uint64_t t108 = 14655222LLU;

    t108 = (x485-(x486*(x487%x488)));

    if (t108 != 18446744073709549604LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int64_t x489 = -1LL;
	uint8_t x490 = 0U;
	volatile int16_t x492 = INT16_MAX;
	int64_t t109 = -298431514723024LL;

    t109 = (x489-(x490*(x491%x492)));

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x493 = 319U;
	int8_t x494 = -1;
	uint8_t x496 = 31U;

    t110 = (x493-(x494*(x495%x496)));

    if (t110 != 320) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint64_t x498 = 111164605616092467LLU;
	int16_t x499 = -1;

    t111 = (x497-(x498*(x499%x500)));

    if (t111 != 111164605616093693LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x505 = 0LL;
	uint8_t x506 = 3U;
	int32_t x507 = -1;
	int8_t x508 = -1;
	int64_t t112 = -916LL;

    t112 = (x505-(x506*(x507%x508)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x509 = -1;
	uint32_t x511 = UINT32_MAX;
	static volatile int8_t x512 = 23;
	volatile uint64_t t113 = 7LLU;

    t113 = (x509-(x510*(x511%x512)));

    if (t113 != 18173513770536916466LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x514 = 62316792699134107LL;
	static int64_t x515 = INT64_MIN;
	static uint32_t x516 = 3U;
	int64_t t114 = -125956LL;

    t114 = (x513-(x514*(x515%x516)));

    if (t114 != 124633585398235446LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x517 = INT32_MIN;
	volatile uint32_t x518 = UINT32_MAX;
	static int32_t x519 = INT32_MIN;
	static int8_t x520 = INT8_MAX;

    t115 = (x517-(x518*(x519%x520)));

    if (t115 != 2147483640U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x529 = INT32_MAX;
	int32_t x530 = 12001862;
	volatile int16_t x531 = 0;
	volatile int16_t x532 = 23;
	int32_t t116 = INT32_MAX;

    t116 = (x529-(x530*(x531%x532)));

    if (t116 != INT32_MAX) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x533 = UINT32_MAX;
	volatile int16_t x536 = -1;
	uint32_t t117 = UINT32_MAX;

    t117 = (x533-(x534*(x535%x536)));

    if (t117 != UINT32_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x538 = 14593;
	static uint64_t x539 = 0LLU;
	volatile int64_t x540 = INT64_MAX;
	uint64_t t118 = 54720469LLU;

    t118 = (x537-(x538*(x539%x540)));

    if (t118 != 255LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x541 = INT32_MIN;
	uint16_t x542 = 6369U;
	int32_t x543 = INT32_MIN;
	int8_t x544 = -1;
	int32_t t119 = INT32_MIN;

    t119 = (x541-(x542*(x543%x544)));

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x545 = INT16_MAX;
	uint64_t x546 = 117LLU;
	int16_t x548 = INT16_MIN;

    t120 = (x545-(x546*(x547%x548)));

    if (t120 != 32650LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x549 = -1LL;
	volatile uint8_t x550 = 0U;
	volatile uint64_t x551 = 2279479LLU;
	volatile uint16_t x552 = 4252U;
	volatile uint64_t t121 = UINT64_MAX;

    t121 = (x549-(x550*(x551%x552)));

    if (t121 != UINT64_MAX) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x553 = -1LL;
	int8_t x555 = INT8_MIN;
	uint8_t x556 = 15U;
	int64_t t122 = -1LL;

    t122 = (x553-(x554*(x555%x556)));

    if (t122 != -4293784977LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x557 = INT32_MIN;
	int8_t x558 = INT8_MIN;
	uint64_t x559 = 59364627183400LLU;
	int32_t x560 = -1;
	volatile uint64_t t123 = 194906144400199LLU;

    t123 = (x557-(x558*(x559%x560)));

    if (t123 != 7598670131991552LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x561 = -803164341LL;
	uint64_t x562 = 24LLU;
	int64_t x564 = 417885557408923LL;
	uint64_t t124 = 69293898174667LLU;

    t124 = (x561-(x562*(x563%x564)));

    if (t124 != 18446744072906387299LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x569 = -1;
	volatile int16_t x570 = INT16_MAX;
	int32_t x571 = 44;
	int64_t x572 = 50657883348LL;
	volatile int64_t t125 = -124499233927LL;

    t125 = (x569-(x570*(x571%x572)));

    if (t125 != -1441749LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x577 = 103U;
	int8_t x578 = INT8_MIN;
	uint32_t x579 = 3349U;
	int64_t x580 = INT64_MIN;
	int64_t t126 = 1392771LL;

    t126 = (x577-(x578*(x579%x580)));

    if (t126 != 428775LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x581 = 6;
	static uint8_t x582 = UINT8_MAX;
	volatile int16_t x583 = INT16_MIN;
	volatile uint64_t x584 = 658409034958189567LLU;
	volatile uint64_t t127 = 650903134149LLU;

    t127 = (x581-(x582*(x583%x584)));

    if (t127 != 15567514879255753762LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x585 = 1;
	static int32_t x586 = INT32_MIN;
	int8_t x587 = INT8_MIN;
	static volatile int8_t x588 = INT8_MIN;
	volatile int32_t t128 = 2;

    t128 = (x585-(x586*(x587%x588)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x589 = 9897864934218087LL;
	int16_t x590 = INT16_MIN;
	uint32_t x591 = 290U;
	volatile int64_t x592 = INT64_MIN;
	int64_t t129 = 478406635229541LL;

    t129 = (x589-(x590*(x591%x592)));

    if (t129 != 9897864943720807LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x593 = 33528U;
	int8_t x594 = INT8_MAX;
	static uint8_t x595 = 5U;
	int16_t x596 = INT16_MIN;
	volatile uint32_t t130 = 0U;

    t130 = (x593-(x594*(x595%x596)));

    if (t130 != 32893U) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x598 = UINT32_MAX;
	static uint8_t x600 = UINT8_MAX;
	uint32_t t131 = 759645U;

    t131 = (x597-(x598*(x599%x600)));

    if (t131 != 129U) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x605 = INT64_MIN;
	volatile uint32_t x606 = 4U;
	uint64_t x607 = 62660062521933LLU;
	int16_t x608 = 1731;
	volatile uint64_t t132 = 13776LLU;

    t132 = (x605-(x606*(x607%x608)));

    if (t132 != 9223372036854773624LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x609 = -4;
	int16_t x610 = -1;
	uint16_t x611 = 465U;
	int8_t x612 = -1;
	int32_t t133 = -212327999;

    t133 = (x609-(x610*(x611%x612)));

    if (t133 != -4) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x613 = INT32_MAX;
	volatile int8_t x614 = INT8_MIN;
	int64_t x615 = INT64_MAX;
	uint32_t x616 = 510542U;
	volatile int64_t t134 = -19LL;

    t134 = (x613-(x614*(x615%x616)));

    if (t134 != 2200160639LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x617 = INT64_MIN;
	int8_t x619 = INT8_MIN;
	int8_t x620 = -1;
	volatile int64_t t135 = INT64_MIN;

    t135 = (x617-(x618*(x619%x620)));

    if (t135 != INT64_MIN) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile uint64_t x622 = 35988563267LLU;
	volatile int16_t x623 = INT16_MIN;
	int32_t x624 = 261381;
	volatile uint64_t t136 = 14282118435LLU;

    t136 = (x621-(x622*(x623%x624)));

    if (t136 != 1179273241133183LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x625 = -1;
	static int16_t x628 = INT16_MIN;
	volatile int32_t t137 = 219356987;

    t137 = (x625-(x626*(x627%x628)));

    if (t137 != -129) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint8_t x629 = 5U;
	volatile int8_t x631 = INT8_MIN;
	volatile uint64_t x632 = UINT64_MAX;
	volatile uint64_t t138 = 162821981495948215LLU;

    t138 = (x629-(x630*(x631%x632)));

    if (t138 != 3594013026181LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static volatile uint64_t x633 = 330084325476LLU;
	int16_t x634 = INT16_MIN;
	int16_t x636 = INT16_MIN;

    t139 = (x633-(x634*(x635%x636)));

    if (t139 != 330092681316LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x637 = 3U;
	static uint16_t x639 = UINT16_MAX;
	uint32_t x640 = 1819272U;
	volatile uint32_t t140 = 1433U;

    t140 = (x637-(x638*(x639%x640)));

    if (t140 != 1907003185U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x641 = -95;
	int8_t x642 = 1;
	uint8_t x643 = UINT8_MAX;

    t141 = (x641-(x642*(x643%x644)));

    if (t141 != -350) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x645 = 0U;
	uint8_t x646 = 0U;
	static int8_t x648 = -25;
	volatile uint32_t t142 = 159U;

    t142 = (x645-(x646*(x647%x648)));

    if (t142 != 0U) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile uint8_t x649 = 9U;
	int32_t x650 = INT32_MIN;
	int64_t x651 = INT64_MIN;
	int16_t x652 = INT16_MIN;
	volatile int64_t t143 = -9958438649295LL;

    t143 = (x649-(x650*(x651%x652)));

    if (t143 != 9LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x653 = INT32_MIN;
	int64_t x655 = -1LL;
	volatile int16_t x656 = INT16_MAX;
	int64_t t144 = 34496668418232LL;

    t144 = (x653-(x654*(x655%x656)));

    if (t144 != -2147483649LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x657 = 28U;
	int8_t x658 = 1;
	int64_t x660 = INT64_MAX;
	int64_t t145 = -6LL;

    t145 = (x657-(x658*(x659%x660)));

    if (t145 != 32796LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x661 = INT32_MIN;
	int64_t x663 = INT64_MIN;
	int16_t x664 = INT16_MAX;
	int64_t t146 = 13LL;

    t146 = (x661-(x662*(x663%x664)));

    if (t146 != -2147480880LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x665 = 1;
	uint32_t x666 = UINT32_MAX;
	int8_t x668 = -1;

    t147 = (x665-(x666*(x667%x668)));

    if (t147 != 1U) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x670 = -1LL;
	uint64_t x671 = UINT64_MAX;
	int16_t x672 = 1;
	volatile uint64_t t148 = 1034556680LLU;

    t148 = (x669-(x670*(x671%x672)));

    if (t148 != 15235764136989LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x673 = 0U;
	volatile int8_t x674 = -1;
	int32_t x675 = INT32_MIN;
	int8_t x676 = -1;
	uint32_t t149 = 8233114U;

    t149 = (x673-(x674*(x675%x676)));

    if (t149 != 0U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x678 = UINT64_MAX;
	uint8_t x679 = 106U;
	int8_t x680 = INT8_MIN;
	volatile uint64_t t150 = 139733465LLU;

    t150 = (x677-(x678*(x679%x680)));

    if (t150 != 185LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x681 = 2719;
	int16_t x682 = 0;
	static int8_t x683 = INT8_MAX;
	int32_t x684 = -888139;
	volatile int32_t t151 = 0;

    t151 = (x681-(x682*(x683%x684)));

    if (t151 != 2719) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x685 = INT64_MAX;
	volatile int64_t x686 = INT64_MIN;
	static uint64_t x687 = 528218LLU;
	uint16_t x688 = 6895U;

    t152 = (x685-(x686*(x687%x688)));

    if (t152 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x689 = 442281981292521LLU;
	int32_t x690 = INT32_MAX;
	volatile int32_t x691 = -34836;
	uint64_t t153 = 98LLU;

    t153 = (x689-(x690*(x691%x692)));

    if (t153 != 396957191438939LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x693 = INT64_MAX;
	int32_t x695 = INT32_MIN;
	uint8_t x696 = 8U;
	static volatile int64_t t154 = INT64_MAX;

    t154 = (x693-(x694*(x695%x696)));

    if (t154 != INT64_MAX) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x697 = 0U;
	static volatile int64_t t155 = -21680LL;

    t155 = (x697-(x698*(x699%x700)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x701 = -1;
	int64_t x702 = INT64_MAX;
	static int8_t x703 = -1;
	int16_t x704 = INT16_MIN;
	int64_t t156 = -919057375929LL;

    t156 = (x701-(x702*(x703%x704)));

    if (t156 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x707 = INT16_MIN;
	uint32_t t157 = UINT32_MAX;

    t157 = (x705-(x706*(x707%x708)));

    if (t157 != UINT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint16_t x713 = UINT16_MAX;
	volatile int8_t x714 = INT8_MIN;
	int16_t x715 = -18;
	uint64_t x716 = 132576812LLU;

    t158 = (x713-(x714*(x715%x716)));

    if (t158 != 5941672703LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x717 = INT16_MAX;
	uint64_t x718 = 5LLU;
	volatile int32_t x719 = 1;
	uint32_t x720 = 1341487U;
	uint64_t t159 = 11045081LLU;

    t159 = (x717-(x718*(x719%x720)));

    if (t159 != 32762LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x729 = INT64_MAX;
	int8_t x732 = -1;
	volatile int64_t t160 = INT64_MAX;

    t160 = (x729-(x730*(x731%x732)));

    if (t160 != INT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x734 = INT8_MIN;
	int32_t x735 = INT32_MAX;
	int8_t x736 = 6;
	volatile int32_t t161 = 7;

    t161 = (x733-(x734*(x735%x736)));

    if (t161 != 129) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x737 = 0;
	int32_t x738 = INT32_MAX;
	uint32_t x739 = 116675330U;
	int64_t x740 = INT64_MAX;
	static int64_t t162 = -200277295927LL;

    t162 = (x737-(x738*(x739%x740)));

    if (t162 != -250558363183328510LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x742 = -1;
	int16_t x744 = INT16_MAX;
	uint32_t t163 = 1426U;

    t163 = (x741-(x742*(x743%x744)));

    if (t163 != 2147483651U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x746 = INT32_MAX;
	static volatile int8_t x747 = INT8_MIN;
	volatile uint32_t x748 = 240028U;
	uint32_t t164 = 42U;

    t164 = (x745-(x746*(x747%x748)));

    if (t164 != 113396U) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x749 = INT16_MIN;
	int16_t x751 = INT16_MIN;
	volatile uint64_t x752 = 3910785896786206004LLU;
	volatile uint64_t t165 = 31LLU;

    t165 = (x749-(x750*(x751%x752)));

    if (t165 != 4504894800675298096LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x753 = INT16_MAX;
	static volatile uint32_t x755 = 94513395U;
	volatile int64_t t166 = -86313373704513061LL;

    t166 = (x753-(x754*(x755%x756)));

    if (t166 != -2079261923LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x757 = INT8_MIN;
	int8_t x758 = INT8_MIN;
	int32_t x759 = INT32_MIN;
	int16_t x760 = -381;
	int32_t t167 = -20837;

    t167 = (x757-(x758*(x759%x760)));

    if (t167 != -1152) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint8_t x764 = 18U;
	static volatile uint64_t t168 = 2275984868019913502LLU;

    t168 = (x761-(x762*(x763%x764)));

    if (t168 != 18446744073709501120LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x769 = -1;
	uint16_t x770 = 1620U;
	volatile int16_t x771 = -1;
	volatile int32_t t169 = 48;

    t169 = (x769-(x770*(x771%x772)));

    if (t169 != 1619) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x785 = INT16_MAX;
	int64_t x786 = -113741366856620LL;
	uint64_t x787 = 1503LLU;
	int64_t x788 = INT64_MAX;
	volatile uint64_t t170 = 8321895LLU;

    t170 = (x785-(x786*(x787%x788)));

    if (t170 != 170953274385532627LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x789 = INT8_MAX;
	static volatile uint64_t x790 = UINT64_MAX;
	uint8_t x791 = 1U;
	uint16_t x792 = 1U;
	static volatile uint64_t t171 = 782567933LLU;

    t171 = (x789-(x790*(x791%x792)));

    if (t171 != 127LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x793 = INT64_MAX;
	volatile uint64_t x794 = 13LLU;
	int32_t x795 = 34;
	int64_t x796 = INT64_MAX;

    t172 = (x793-(x794*(x795%x796)));

    if (t172 != 9223372036854775365LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint16_t x798 = UINT16_MAX;
	static volatile int32_t x799 = 358944;
	uint64_t x800 = UINT64_MAX;

    t173 = (x797-(x798*(x799%x800)));

    if (t173 != 18446744050186156448LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x801 = -1;
	uint8_t x802 = 0U;
	uint16_t x803 = 35U;
	volatile uint64_t x804 = 166810LLU;

    t174 = (x801-(x802*(x803%x804)));

    if (t174 != UINT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x805 = -1;
	static int16_t x806 = -26;
	uint16_t x807 = 11U;
	int8_t x808 = INT8_MIN;

    t175 = (x805-(x806*(x807%x808)));

    if (t175 != 285) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x809 = 56;
	uint32_t x811 = 85865U;
	int8_t x812 = -1;
	static volatile uint32_t t176 = 29922979U;

    t176 = (x809-(x810*(x811%x812)));

    if (t176 != 4294538027U) { NG(); } else { ; }
	
}

void f177(void) {
    	static uint8_t x813 = 1U;
	volatile int64_t x814 = 506466682LL;
	volatile int16_t x815 = INT16_MAX;
	int64_t x816 = INT64_MIN;
	int64_t t177 = 1249129130373LL;

    t177 = (x813-(x814*(x815%x816)));

    if (t177 != -16595393769093LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x818 = 48U;
	uint8_t x820 = 1U;
	static volatile uint64_t t178 = 73942313128326105LLU;

    t178 = (x817-(x818*(x819%x820)));

    if (t178 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x822 = INT64_MAX;
	uint64_t x823 = UINT64_MAX;
	int8_t x824 = 2;
	uint64_t t179 = 6569108301319704LLU;

    t179 = (x821-(x822*(x823%x824)));

    if (t179 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x825 = -3LL;
	volatile int8_t x826 = INT8_MAX;
	uint16_t x828 = UINT16_MAX;
	int64_t t180 = -998479885594392LL;

    t180 = (x825-(x826*(x827%x828)));

    if (t180 != -6038218LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x829 = 19400082414961LLU;
	int64_t x830 = -1LL;
	uint16_t x831 = UINT16_MAX;
	int32_t x832 = INT32_MIN;
	uint64_t t181 = 11436874749523019LLU;

    t181 = (x829-(x830*(x831%x832)));

    if (t181 != 19400082480496LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x834 = 3465178603933641LL;
	int8_t x835 = -1;
	static volatile int16_t x836 = INT16_MIN;
	volatile int64_t t182 = -3013796802494051LL;

    t182 = (x833-(x834*(x835%x836)));

    if (t182 != 3465178603933598LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x837 = 4;
	int32_t x839 = INT32_MAX;
	static int16_t x840 = INT16_MIN;
	int64_t t183 = -85497622LL;

    t183 = (x837-(x838*(x839%x840)));

    if (t183 != -585644587LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x841 = INT8_MAX;
	static uint16_t x843 = 3373U;
	volatile int16_t x844 = 2;
	static volatile int64_t t184 = -450LL;

    t184 = (x841-(x842*(x843%x844)));

    if (t184 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x849 = INT8_MIN;
	volatile int8_t x850 = -1;
	volatile int64_t x852 = INT64_MIN;
	volatile int64_t t185 = -358986904047383192LL;

    t185 = (x849-(x850*(x851%x852)));

    if (t185 != -143LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x865 = -20793313255671LL;
	int8_t x866 = -1;
	uint8_t x867 = 11U;

    t186 = (x865-(x866*(x867%x868)));

    if (t186 != -20793313255671LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x869 = -13;
	int16_t x870 = INT16_MIN;
	int16_t x871 = INT16_MAX;
	static uint32_t x872 = 7162U;

    t187 = (x869-(x870*(x871%x872)));

    if (t187 != 134971379U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x873 = -15;
	volatile int64_t x875 = -25237847LL;
	static volatile int64_t x876 = -1LL;
	int64_t t188 = -794LL;

    t188 = (x873-(x874*(x875%x876)));

    if (t188 != -15LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int8_t x877 = -6;
	volatile uint32_t x879 = 1U;
	volatile uint32_t x880 = 4303U;
	uint32_t t189 = 1885682U;

    t189 = (x877-(x878*(x879%x880)));

    if (t189 != 4294967291U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x881 = 396642854303618LLU;
	uint64_t x882 = UINT64_MAX;
	static int16_t x883 = INT16_MAX;
	volatile uint64_t t190 = 222095101048215LLU;

    t190 = (x881-(x882*(x883%x884)));

    if (t190 != 396642854336385LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x885 = UINT8_MAX;
	static int32_t x887 = -1;
	int64_t x888 = INT64_MIN;
	volatile int64_t t191 = 108LL;

    t191 = (x885-(x886*(x887%x888)));

    if (t191 != 286LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x889 = INT8_MIN;
	static volatile int8_t x890 = INT8_MAX;
	int8_t x892 = -1;
	volatile int32_t t192 = -10957;

    t192 = (x889-(x890*(x891%x892)));

    if (t192 != -128) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x893 = 6193331U;
	int8_t x895 = INT8_MIN;
	static uint64_t x896 = 18709758336LLU;
	uint64_t t193 = 11647299LLU;

    t193 = (x893-(x894*(x895%x896)));

    if (t193 != 10334278283291768499LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x901 = INT64_MIN;
	uint16_t x902 = UINT16_MAX;

    t194 = (x901-(x902*(x903%x904)));

    if (t194 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x909 = UINT32_MAX;
	int16_t x910 = INT16_MAX;
	int16_t x911 = 0;
	uint64_t x912 = UINT64_MAX;
	volatile uint64_t t195 = 116LLU;

    t195 = (x909-(x910*(x911%x912)));

    if (t195 != 4294967295LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x913 = 115782LL;
	volatile int32_t x914 = INT32_MIN;
	int64_t x915 = -11576LL;
	volatile uint16_t x916 = 10883U;
	int64_t t196 = 25LL;

    t196 = (x913-(x914*(x915%x916)));

    if (t196 != -1488206052282LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x921 = 17U;
	int8_t x922 = INT8_MIN;
	volatile int32_t x923 = 192737840;
	int16_t x924 = -1;

    t197 = (x921-(x922*(x923%x924)));

    if (t197 != 17) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x925 = INT8_MAX;
	uint64_t x926 = 15LLU;
	int32_t x927 = INT32_MIN;
	volatile uint64_t t198 = 32351920034495565LLU;

    t198 = (x925-(x926*(x927%x928)));

    if (t198 != 127LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x929 = -1;
	int8_t x930 = 28;
	static int64_t x931 = -963798806983421LL;
	int8_t x932 = -1;
	static int64_t t199 = 24240LL;

    t199 = (x929-(x930*(x931%x932)));

    if (t199 != -1LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

