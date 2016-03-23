
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

static volatile int8_t x5 = INT8_MIN;
int8_t x7 = INT8_MAX;
volatile int64_t t1 = 31277332LL;
int16_t x13 = 0;
int32_t x15 = INT32_MAX;
static int64_t x26 = 619488309750570LL;
volatile uint32_t x59 = 3U;
int16_t x66 = -1;
int64_t x68 = -1LL;
uint16_t x69 = 19U;
int16_t x77 = INT16_MIN;
int64_t t13 = 6217597438988LL;
uint64_t x88 = UINT64_MAX;
static int32_t x95 = INT32_MIN;
int64_t x96 = -1LL;
int64_t t17 = 216191634183LL;
volatile int64_t t18 = 32760874451682LL;
int64_t x104 = INT64_MIN;
int16_t x105 = INT16_MIN;
volatile uint8_t x106 = 15U;
static int8_t x107 = INT8_MIN;
static int32_t t20 = -54938;
int32_t x114 = -49373292;
static uint64_t t23 = 70760LLU;
int64_t x123 = INT64_MIN;
uint8_t x125 = 11U;
volatile uint8_t x126 = UINT8_MAX;
int64_t x133 = INT64_MAX;
uint16_t x135 = UINT16_MAX;
uint64_t x137 = 2014982LLU;
volatile uint16_t x138 = 189U;
volatile int64_t x139 = -28252671497LL;
int16_t x140 = INT16_MAX;
volatile uint64_t t28 = 115559LLU;
volatile int64_t x142 = -2700253661852LL;
int8_t x145 = INT8_MIN;
int8_t x147 = INT8_MIN;
uint16_t x148 = 612U;
volatile uint64_t x151 = 117629730450LLU;
volatile int8_t x153 = -60;
volatile int64_t x154 = 3157LL;
static int8_t x162 = INT8_MIN;
uint64_t t33 = 422LLU;
uint32_t x170 = 5U;
int64_t x172 = -1LL;
int8_t x178 = INT8_MAX;
volatile uint8_t x188 = UINT8_MAX;
uint64_t x189 = 162LLU;
volatile uint64_t t40 = 119645432LLU;
uint32_t x199 = 5803847U;
int16_t x212 = INT16_MIN;
static int32_t x215 = INT32_MIN;
volatile int8_t x216 = -6;
uint16_t x219 = 1310U;
int32_t x220 = -1;
uint16_t x222 = 1U;
int16_t x231 = 27;
volatile int8_t x235 = INT8_MIN;
uint32_t x237 = 94078592U;
static volatile int32_t x240 = -1;
static int32_t t52 = -108230272;
static volatile int64_t t53 = -918477311781LL;
int8_t x259 = -1;
volatile uint64_t t54 = 38985940506867397LLU;
int16_t x271 = -1;
int8_t x276 = INT8_MIN;
volatile int64_t t60 = -28LL;
static volatile int8_t x288 = -8;
int64_t t61 = 122663772201092198LL;
volatile uint8_t x296 = 33U;
volatile int64_t t63 = 463467702742913246LL;
volatile int32_t x298 = INT32_MIN;
int32_t t65 = -10010;
static uint32_t x305 = 934U;
int64_t x308 = -12LL;
static volatile uint16_t x320 = 23U;
volatile int32_t t69 = 150000651;
uint64_t x325 = 2419046063511LLU;
uint16_t x334 = 213U;
volatile int32_t x339 = 938943547;
static volatile int32_t x343 = 91;
static volatile int16_t x345 = -2;
volatile uint64_t x350 = UINT64_MAX;
int16_t x352 = 71;
volatile uint64_t t77 = 342562547718844991LLU;
int8_t x359 = -1;
volatile uint64_t t79 = 61LLU;
int32_t x372 = -1;
int64_t x374 = INT64_MIN;
int16_t x375 = INT16_MAX;
static volatile uint64_t t83 = 74816126313650502LLU;
static int64_t x388 = -77303383LL;
volatile int64_t t85 = -30717810617338LL;
int8_t x389 = -1;
volatile int32_t t86 = -1;
int64_t x394 = INT64_MAX;
volatile int64_t t87 = 55046LL;
volatile int8_t x400 = -1;
volatile int64_t t88 = 3LL;
int16_t x405 = 6;
uint16_t x409 = 21U;
static int64_t x411 = -882324LL;
volatile int8_t x413 = 46;
volatile int64_t x418 = -1972862643616326226LL;
int64_t t93 = 48429785192425LL;
static int32_t x426 = INT32_MAX;
int64_t t94 = -110878812657260LL;
uint16_t x434 = 54U;
uint8_t x437 = 3U;
static int32_t x443 = 73824107;
int64_t x444 = -1LL;
int8_t x449 = -1;
int16_t x460 = -9;
volatile int64_t t102 = 6941989439841840LL;
static uint64_t x463 = 940121LLU;
static uint64_t x469 = 4LLU;
static volatile uint8_t x474 = UINT8_MAX;
volatile int64_t x481 = INT64_MIN;
int32_t x485 = -1;
int8_t x488 = INT8_MAX;
uint64_t x493 = 39581LLU;
uint64_t t111 = 217137772627LLU;
int16_t x497 = INT16_MAX;
volatile int32_t t112 = 12049694;
static uint16_t x502 = UINT16_MAX;
static int32_t x503 = -2571;
int8_t x505 = INT8_MIN;
uint8_t x507 = 2U;
volatile int8_t x508 = INT8_MAX;
int16_t x510 = -1;
int64_t x511 = INT64_MIN;
int64_t t115 = 453595372901633127LL;
int8_t x520 = -21;
volatile uint32_t t119 = 25U;
volatile int64_t x543 = INT64_MIN;
int64_t t123 = -29608679231481039LL;
static int64_t x546 = INT64_MIN;
volatile int64_t x549 = 15115181002LL;
uint32_t x552 = UINT32_MAX;
static uint64_t x560 = 68971454LLU;
volatile int8_t x565 = -3;
int32_t x567 = -1;
int8_t x568 = INT8_MAX;
uint64_t x570 = UINT64_MAX;
volatile int64_t x575 = -1651LL;
volatile uint64_t t133 = 95418616LLU;
int32_t x595 = -58505;
uint64_t x602 = UINT64_MAX;
volatile uint64_t x610 = 3LLU;
int32_t x624 = -1;
int32_t x636 = -1;
volatile int32_t t147 = 361771713;
uint64_t x647 = 29656112672836200LLU;
uint64_t t148 = 36899579732LLU;
int64_t x650 = -228029291LL;
static volatile int16_t x660 = INT16_MIN;
int64_t x661 = -1LL;
static uint16_t x665 = 82U;
int32_t x669 = -477;
static int16_t x674 = INT16_MIN;
int64_t x675 = INT64_MIN;
volatile int64_t x684 = -1LL;
int16_t x686 = -1;
uint16_t x688 = UINT16_MAX;
int64_t x704 = -29424LL;
int32_t x707 = INT32_MIN;
static int32_t t163 = 22771;
volatile uint16_t x710 = 195U;
int32_t t164 = -5136200;
volatile int16_t x713 = -623;
uint8_t x714 = 10U;
volatile int64_t x716 = -1LL;
int32_t x719 = 37;
static uint32_t x728 = 1494891395U;
int8_t x730 = -16;
volatile int64_t x734 = INT64_MAX;
volatile int64_t x735 = -1LL;
int8_t x737 = 6;
uint64_t t171 = 2128790933201305LLU;
int16_t x745 = INT16_MIN;
volatile uint64_t x754 = 34LLU;
volatile uint64_t t174 = 5LLU;
static int16_t x759 = -1;
uint16_t x783 = UINT16_MAX;
int16_t x787 = -1;
int32_t t179 = 7;
static volatile uint64_t t180 = 10LLU;
int64_t x795 = INT64_MIN;
volatile uint16_t x796 = 92U;
volatile uint64_t x804 = 3710054LLU;
int64_t x805 = -1LL;
int32_t x809 = -1;
uint32_t x810 = UINT32_MAX;
uint32_t t185 = 194U;
int64_t x815 = INT64_MIN;
static int16_t x816 = 1;
static int32_t x823 = INT32_MIN;
volatile int64_t t188 = -907462LL;
static int64_t x826 = INT64_MIN;
uint32_t x832 = UINT32_MAX;
int16_t x842 = INT16_MIN;
volatile uint64_t t195 = 23309412476422LLU;
int8_t x853 = -62;
static int16_t x857 = INT16_MIN;
uint64_t x858 = UINT64_MAX;
uint32_t t198 = 72557157U;
static uint8_t x868 = 21U;
volatile uint32_t t199 = 13960363U;


void f0(void) {
    	volatile uint64_t x1 = 107LLU;
	volatile int8_t x2 = INT8_MIN;
	uint32_t x3 = 3U;
	int8_t x4 = INT8_MAX;
	volatile uint64_t t0 = 2777615870902926157LLU;

    t0 = ((x1-(x2%x3))&x4);

    if (t0 != 105LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x6 = -148458812525LL;
	uint8_t x8 = UINT8_MAX;

    t1 = ((x5-(x6%x7))&x8);

    if (t1 != 224LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x14 = 1900677LLU;
	uint32_t x16 = 6U;
	uint64_t t2 = 11478252LLU;

    t2 = ((x13-(x14%x15))&x16);

    if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x25 = 80538U;
	int32_t x27 = -1;
	uint8_t x28 = 59U;
	int64_t t3 = -1LL;

    t3 = ((x25-(x26%x27))&x28);

    if (t3 != 26LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x29 = 10;
	volatile uint8_t x30 = 3U;
	int64_t x31 = INT64_MIN;
	int8_t x32 = 1;
	int64_t t4 = 2822311LL;

    t4 = ((x29-(x30%x31))&x32);

    if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x33 = -1LL;
	int16_t x34 = INT16_MIN;
	volatile int8_t x35 = -1;
	int8_t x36 = -1;
	volatile int64_t t5 = 201874241LL;

    t5 = ((x33-(x34%x35))&x36);

    if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x37 = INT16_MAX;
	volatile int8_t x38 = 1;
	static int32_t x39 = 136978;
	int32_t x40 = -32;
	volatile int32_t t6 = -140158480;

    t6 = ((x37-(x38%x39))&x40);

    if (t6 != 32736) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = -618604017;
	uint64_t x42 = 15024816664LLU;
	uint16_t x43 = UINT16_MAX;
	int32_t x44 = -10423376;
	volatile uint64_t t7 = 4598575LLU;

    t7 = ((x41-(x42%x43))&x44);

    if (t7 != 18446744073090945056LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x49 = UINT32_MAX;
	uint32_t x50 = 717399027U;
	static int8_t x51 = 1;
	static uint32_t x52 = 1293746472U;
	volatile uint32_t t8 = 4275U;

    t8 = ((x49-(x50%x51))&x52);

    if (t8 != 1293746472U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x53 = 21815934370484584LLU;
	static int8_t x54 = 0;
	static volatile int8_t x55 = INT8_MAX;
	int32_t x56 = INT32_MIN;
	volatile uint64_t t9 = 1948023822982471124LLU;

    t9 = ((x53-(x54%x55))&x56);

    if (t9 != 21815934192713728LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x57 = 7532475022LLU;
	volatile uint64_t x58 = 4986539408LLU;
	int64_t x60 = 49391137LL;
	volatile uint64_t t10 = 13544143974289LLU;

    t10 = ((x57-(x58%x59))&x60);

    if (t10 != 15737344LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x65 = -1;
	static uint32_t x67 = 4889U;
	int64_t t11 = -32LL;

    t11 = ((x65-(x66%x67))&x68);

    if (t11 != 4294966944LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x70 = INT16_MIN;
	int16_t x71 = -1;
	uint8_t x72 = 18U;
	int32_t t12 = 1;

    t12 = ((x69-(x70%x71))&x72);

    if (t12 != 18) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x78 = INT16_MAX;
	static int16_t x79 = -1;
	int64_t x80 = INT64_MAX;

    t13 = ((x77-(x78%x79))&x80);

    if (t13 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int8_t x81 = INT8_MAX;
	int64_t x82 = INT64_MIN;
	int8_t x83 = -58;
	uint64_t x84 = UINT64_MAX;
	volatile uint64_t t14 = 0LLU;

    t14 = ((x81-(x82%x83))&x84);

    if (t14 != 139LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x85 = INT32_MIN;
	uint32_t x86 = 0U;
	int32_t x87 = INT32_MAX;
	volatile uint64_t t15 = 61537364LLU;

    t15 = ((x85-(x86%x87))&x88);

    if (t15 != 2147483648LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint8_t x89 = UINT8_MAX;
	static int32_t x90 = -1;
	uint8_t x91 = UINT8_MAX;
	int64_t x92 = -491154316064985685LL;
	int64_t t16 = -384456LL;

    t16 = ((x89-(x90%x91))&x92);

    if (t16 != 256LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x93 = -874609763LL;
	int8_t x94 = INT8_MAX;

    t17 = ((x93-(x94%x95))&x96);

    if (t17 != -874609890LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x97 = -1;
	int64_t x98 = INT64_MIN;
	static uint16_t x99 = 2U;
	int16_t x100 = INT16_MAX;

    t18 = ((x97-(x98%x99))&x100);

    if (t18 != 32767LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x101 = -24453196;
	volatile int16_t x102 = 3;
	static int64_t x103 = 32372200068LL;
	int64_t t19 = INT64_MIN;

    t19 = ((x101-(x102%x103))&x104);

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x108 = 56U;

    t20 = ((x105-(x106%x107))&x108);

    if (t20 != 48) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x109 = 6284U;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = 22528088128LL;
	int64_t x112 = INT64_MAX;
	volatile int64_t t21 = -2694188575329134420LL;

    t21 = ((x109-(x110%x111))&x112);

    if (t21 != 6029LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x113 = UINT32_MAX;
	volatile int64_t x115 = INT64_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int64_t t22 = -1726763549100082539LL;

    t22 = ((x113-(x114%x115))&x116);

    if (t22 != 107LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x117 = 1;
	static uint64_t x118 = UINT64_MAX;
	int16_t x119 = -20;
	int8_t x120 = -1;

    t23 = ((x117-(x118%x119))&x120);

    if (t23 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int64_t x121 = INT64_MAX;
	uint16_t x122 = 9249U;
	int32_t x124 = INT32_MIN;
	volatile int64_t t24 = 25882984534260LL;

    t24 = ((x121-(x122%x123))&x124);

    if (t24 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int16_t x127 = INT16_MAX;
	uint16_t x128 = UINT16_MAX;
	static int32_t t25 = 0;

    t25 = ((x125-(x126%x127))&x128);

    if (t25 != 65292) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x129 = 0U;
	int64_t x130 = -1LL;
	uint32_t x131 = 15U;
	int16_t x132 = 1376;
	static int64_t t26 = -177298029LL;

    t26 = ((x129-(x130%x131))&x132);

    if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x134 = 18U;
	uint8_t x136 = 1U;
	volatile int64_t t27 = -320691213713LL;

    t27 = ((x133-(x134%x135))&x136);

    if (t27 != 1LL) { NG(); } else { ; }
	
}

void f28(void) {
    

    t28 = ((x137-(x138%x139))&x140);

    if (t28 != 15945LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x141 = -1;
	int16_t x143 = INT16_MAX;
	int32_t x144 = INT32_MIN;
	int64_t t29 = -1842518335406043630LL;

    t29 = ((x141-(x142%x143))&x144);

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x146 = UINT64_MAX;
	volatile uint64_t t30 = 2747019347319772LLU;

    t30 = ((x145-(x146%x147))&x148);

    if (t30 != 512LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x149 = INT16_MIN;
	int8_t x150 = -5;
	int16_t x152 = -1;
	volatile uint64_t t31 = 13LLU;

    t31 = ((x149-(x150%x151))&x152);

    if (t31 != 18446743968915217137LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x155 = INT32_MIN;
	volatile int16_t x156 = -1;
	int64_t t32 = -5LL;

    t32 = ((x153-(x154%x155))&x156);

    if (t32 != -3217LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x161 = 1007;
	static uint64_t x163 = UINT64_MAX;
	int16_t x164 = INT16_MIN;

    t33 = ((x161-(x162%x163))&x164);

    if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x169 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	int64_t t34 = -3223054898211840LL;

    t34 = ((x169-(x170%x171))&x172);

    if (t34 != 2147483643LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x173 = 125U;
	static int16_t x174 = -5962;
	int64_t x175 = 3LL;
	static int16_t x176 = 1119;
	static int64_t t35 = 7LL;

    t35 = ((x173-(x174%x175))&x176);

    if (t35 != 94LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x177 = INT8_MIN;
	volatile int8_t x179 = -1;
	int32_t x180 = INT32_MIN;
	int32_t t36 = INT32_MIN;

    t36 = ((x177-(x178%x179))&x180);

    if (t36 != INT32_MIN) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x181 = -3;
	int16_t x182 = INT16_MAX;
	static int32_t x183 = -43;
	int8_t x184 = INT8_MAX;
	static int32_t t37 = -74050;

    t37 = ((x181-(x182%x183))&x184);

    if (t37 != 124) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x185 = 14U;
	volatile int64_t x186 = -1LL;
	uint32_t x187 = 678488713U;
	int64_t t38 = 24308022LL;

    t38 = ((x185-(x186%x187))&x188);

    if (t38 != 15LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x190 = 124020916U;
	int8_t x191 = INT8_MAX;
	uint8_t x192 = 3U;
	volatile uint64_t t39 = 14455LLU;

    t39 = ((x189-(x190%x191))&x192);

    if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x193 = -1LL;
	uint64_t x194 = 2947411421821025739LLU;
	int8_t x195 = -34;
	uint64_t x196 = UINT64_MAX;

    t40 = ((x193-(x194%x195))&x196);

    if (t40 != 15499332651888525876LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x197 = -1LL;
	uint32_t x198 = UINT32_MAX;
	static volatile int16_t x200 = INT16_MIN;
	int64_t t41 = 19207541513398188LL;

    t41 = ((x197-(x198%x199))&x200);

    if (t41 != -131072LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x201 = 1;
	volatile int8_t x202 = -1;
	static uint32_t x203 = UINT32_MAX;
	volatile int64_t x204 = INT64_MIN;
	volatile int64_t t42 = -3092058757931908LL;

    t42 = ((x201-(x202%x203))&x204);

    if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x205 = -1;
	static uint8_t x206 = UINT8_MAX;
	int32_t x207 = INT32_MAX;
	uint16_t x208 = 747U;
	volatile int32_t t43 = -6;

    t43 = ((x205-(x206%x207))&x208);

    if (t43 != 512) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x209 = INT16_MAX;
	volatile int32_t x210 = INT32_MIN;
	static uint64_t x211 = 1549113943LLU;
	volatile uint64_t t44 = 8623972LLU;

    t44 = ((x209-(x210%x211))&x212);

    if (t44 != 18446744073462874112LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	int64_t t45 = 113LL;

    t45 = ((x213-(x214%x215))&x216);

    if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x217 = 4U;
	uint8_t x218 = 15U;
	int32_t t46 = 3883;

    t46 = ((x217-(x218%x219))&x220);

    if (t46 != -11) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x221 = 2LL;
	uint64_t x223 = 2302043LLU;
	volatile int64_t x224 = INT64_MIN;
	uint64_t t47 = 175868004LLU;

    t47 = ((x221-(x222%x223))&x224);

    if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x225 = INT64_MAX;
	static volatile uint64_t x226 = 6LLU;
	int64_t x227 = 9LL;
	static int8_t x228 = -1;
	uint64_t t48 = 1LLU;

    t48 = ((x225-(x226%x227))&x228);

    if (t48 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x229 = -1LL;
	uint8_t x230 = 79U;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t49 = 60LL;

    t49 = ((x229-(x230%x231))&x232);

    if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x233 = 13;
	int32_t x234 = INT32_MAX;
	int8_t x236 = -1;
	volatile int32_t t50 = -3;

    t50 = ((x233-(x234%x235))&x236);

    if (t50 != -114) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x238 = 0U;
	int8_t x239 = INT8_MIN;
	uint32_t t51 = 0U;

    t51 = ((x237-(x238%x239))&x240);

    if (t51 != 94078592U) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x241 = 0U;
	uint8_t x242 = 55U;
	int32_t x243 = INT32_MIN;
	int16_t x244 = INT16_MIN;

    t52 = ((x241-(x242%x243))&x244);

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x245 = 4U;
	int8_t x246 = 1;
	int64_t x247 = INT64_MAX;
	int32_t x248 = -2494;

    t53 = ((x245-(x246%x247))&x248);

    if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static int16_t x257 = -1;
	int8_t x258 = INT8_MIN;
	uint64_t x260 = 22341314LLU;

    t54 = ((x257-(x258%x259))&x260);

    if (t54 != 22341314LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x261 = INT32_MIN;
	static uint64_t x262 = 7581102713LLU;
	uint8_t x263 = 3U;
	int32_t x264 = -33727007;
	volatile uint64_t t55 = 666175028006LLU;

    t55 = ((x261-(x262%x263))&x264);

    if (t55 != 18446744071528340960LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x265 = INT16_MAX;
	int64_t x266 = -29516900096350LL;
	volatile int64_t x267 = -1LL;
	int32_t x268 = INT32_MIN;
	int64_t t56 = 473309LL;

    t56 = ((x265-(x266%x267))&x268);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x269 = 0U;
	int16_t x270 = INT16_MAX;
	uint16_t x272 = 4822U;
	volatile int32_t t57 = -276;

    t57 = ((x269-(x270%x271))&x272);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x273 = 0LLU;
	static uint32_t x274 = 586353U;
	int16_t x275 = 1;
	uint64_t t58 = 8120913760275516LLU;

    t58 = ((x273-(x274%x275))&x276);

    if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x277 = UINT64_MAX;
	uint8_t x278 = 25U;
	static uint8_t x279 = 59U;
	int32_t x280 = 505790;
	uint64_t t59 = 46029LLU;

    t59 = ((x277-(x278%x279))&x280);

    if (t59 != 505766LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x281 = -1;
	volatile int64_t x282 = 12058446029788LL;
	int32_t x283 = INT32_MIN;
	int8_t x284 = 0;

    t60 = ((x281-(x282%x283))&x284);

    if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x285 = 5323U;
	int16_t x286 = -1;
	int64_t x287 = -1LL;

    t61 = ((x285-(x286%x287))&x288);

    if (t61 != 5320LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x289 = INT16_MIN;
	volatile int8_t x290 = 2;
	int16_t x291 = -1;
	volatile int16_t x292 = INT16_MIN;
	int32_t t62 = 3173639;

    t62 = ((x289-(x290%x291))&x292);

    if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x293 = INT32_MIN;
	int64_t x294 = -1LL;
	volatile int64_t x295 = INT64_MIN;

    t63 = ((x293-(x294%x295))&x296);

    if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x297 = 7570;
	volatile uint16_t x299 = 26U;
	int64_t x300 = INT64_MIN;
	int64_t t64 = -3978308868320LL;

    t64 = ((x297-(x298%x299))&x300);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x301 = -761988;
	int32_t x302 = INT32_MIN;
	int32_t x303 = -1;
	volatile uint16_t x304 = 0U;

    t65 = ((x301-(x302%x303))&x304);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x306 = INT64_MIN;
	int16_t x307 = 240;
	int64_t t66 = -126819820729LL;

    t66 = ((x305-(x306%x307))&x308);

    if (t66 != 1060LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x309 = INT16_MIN;
	uint16_t x310 = UINT16_MAX;
	volatile uint8_t x311 = 13U;
	int8_t x312 = INT8_MIN;
	volatile int32_t t67 = 10702;

    t67 = ((x309-(x310%x311))&x312);

    if (t67 != -32896) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x313 = UINT16_MAX;
	uint16_t x314 = 436U;
	static int16_t x315 = INT16_MIN;
	static uint64_t x316 = UINT64_MAX;
	uint64_t t68 = 251943LLU;

    t68 = ((x313-(x314%x315))&x316);

    if (t68 != 65099LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x317 = 7;
	uint8_t x318 = 4U;
	int16_t x319 = -1;

    t69 = ((x317-(x318%x319))&x320);

    if (t69 != 7) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x321 = -5823971LL;
	int32_t x322 = 0;
	uint16_t x323 = 54U;
	static int64_t x324 = -2533931856019LL;
	int64_t t70 = -64034673131939LL;

    t70 = ((x321-(x322%x323))&x324);

    if (t70 != -2533936070131LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x326 = -927591;
	int64_t x327 = 57LL;
	static int64_t x328 = 188801172162814LL;
	static volatile uint64_t t71 = 2736228841916932211LLU;

    t71 = ((x325-(x326%x327))&x328);

    if (t71 != 2414614710452LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x329 = 3838482975LL;
	uint8_t x330 = 1U;
	static uint32_t x331 = UINT32_MAX;
	volatile int64_t x332 = -1LL;
	int64_t t72 = 764173858028LL;

    t72 = ((x329-(x330%x331))&x332);

    if (t72 != 3838482974LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint16_t x333 = UINT16_MAX;
	int16_t x335 = -1955;
	volatile int32_t x336 = INT32_MAX;
	int32_t t73 = -1344445;

    t73 = ((x333-(x334%x335))&x336);

    if (t73 != 65322) { NG(); } else { ; }
	
}

void f74(void) {
    	static int64_t x337 = INT64_MIN;
	int8_t x338 = -1;
	static int16_t x340 = INT16_MIN;
	int64_t t74 = INT64_MIN;

    t74 = ((x337-(x338%x339))&x340);

    if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x341 = 698;
	int32_t x342 = -3922;
	static int16_t x344 = 7;
	volatile int32_t t75 = 54433;

    t75 = ((x341-(x342%x343))&x344);

    if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x346 = UINT8_MAX;
	static int64_t x347 = -1LL;
	static uint8_t x348 = 33U;
	int64_t t76 = 345866479LL;

    t76 = ((x345-(x346%x347))&x348);

    if (t76 != 32LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x349 = UINT16_MAX;
	static int8_t x351 = -5;

    t77 = ((x349-(x350%x351))&x352);

    if (t77 != 67LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x353 = UINT8_MAX;
	static volatile uint32_t x354 = 12707878U;
	uint8_t x355 = 5U;
	uint64_t x356 = 3676931699665LLU;
	uint64_t t78 = 205108282655549694LLU;

    t78 = ((x353-(x354%x355))&x356);

    if (t78 != 208LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint64_t x357 = 1001339LLU;
	int16_t x358 = -1;
	int16_t x360 = -1;

    t79 = ((x357-(x358%x359))&x360);

    if (t79 != 1001339LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x361 = -19;
	int32_t x362 = INT32_MIN;
	volatile int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MIN;
	volatile int32_t t80 = INT32_MIN;

    t80 = ((x361-(x362%x363))&x364);

    if (t80 != INT32_MIN) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x365 = INT32_MIN;
	int64_t x366 = 1010028910681029689LL;
	uint16_t x367 = UINT16_MAX;
	uint8_t x368 = UINT8_MAX;
	static volatile int64_t t81 = 16369025081LL;

    t81 = ((x365-(x366%x367))&x368);

    if (t81 != 205LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x369 = 9834515U;
	uint16_t x370 = UINT16_MAX;
	uint8_t x371 = 13U;
	volatile uint32_t t82 = 3904U;

    t82 = ((x369-(x370%x371))&x372);

    if (t82 != 9834513U) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint64_t x373 = UINT64_MAX;
	volatile int64_t x376 = -1LL;

    t83 = ((x373-(x374%x375))&x376);

    if (t83 != 7LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x381 = INT16_MIN;
	uint8_t x382 = 22U;
	static uint64_t x383 = 3333557988643LLU;
	int64_t x384 = -1LL;
	volatile uint64_t t84 = 906LLU;

    t84 = ((x381-(x382%x383))&x384);

    if (t84 != 18446744073709518826LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x385 = 0LL;
	uint8_t x386 = 50U;
	int16_t x387 = INT16_MIN;

    t85 = ((x385-(x386%x387))&x388);

    if (t85 != -77303416LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x390 = INT32_MIN;
	static int8_t x391 = INT8_MAX;
	static uint16_t x392 = 1U;

    t86 = ((x389-(x390%x391))&x392);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x393 = 0;
	volatile uint16_t x395 = UINT16_MAX;
	int32_t x396 = INT32_MIN;

    t87 = ((x393-(x394%x395))&x396);

    if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x397 = INT32_MIN;
	volatile uint32_t x398 = 820139745U;
	static volatile int64_t x399 = INT64_MIN;

    t88 = ((x397-(x398%x399))&x400);

    if (t88 != -2967623393LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int8_t x401 = INT8_MIN;
	int8_t x402 = 6;
	int32_t x403 = -1;
	static int64_t x404 = -650LL;
	int64_t t89 = -1982501LL;

    t89 = ((x401-(x402%x403))&x404);

    if (t89 != -768LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint8_t x406 = UINT8_MAX;
	static uint16_t x407 = 887U;
	int64_t x408 = -360LL;
	volatile int64_t t90 = -21528772204589LL;

    t90 = ((x405-(x406%x407))&x408);

    if (t90 != -512LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x410 = -831319166420453563LL;
	int8_t x412 = -1;
	static int64_t t91 = -2161122640831696947LL;

    t91 = ((x409-(x410%x411))&x412);

    if (t91 != 272620LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x414 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	int32_t x416 = 312072;
	volatile int32_t t92 = 42;

    t92 = ((x413-(x414%x415))&x416);

    if (t92 != 312072) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	uint8_t x419 = 14U;
	static uint32_t x420 = 22280932U;

    t93 = ((x417-(x418%x419))&x420);

    if (t93 != 65536LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int64_t x425 = -2047011LL;
	uint16_t x427 = 2U;
	int8_t x428 = INT8_MAX;

    t94 = ((x425-(x426%x427))&x428);

    if (t94 != 92LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x429 = INT8_MIN;
	uint16_t x430 = 17U;
	static int8_t x431 = INT8_MIN;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t95 = 73LLU;

    t95 = ((x429-(x430%x431))&x432);

    if (t95 != 18446744073709551471LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x433 = -1;
	int32_t x435 = INT32_MAX;
	int64_t x436 = 6LL;
	volatile int64_t t96 = -31LL;

    t96 = ((x433-(x434%x435))&x436);

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x438 = 0;
	static volatile int8_t x439 = INT8_MIN;
	static uint32_t x440 = UINT32_MAX;
	uint32_t t97 = 654126U;

    t97 = ((x437-(x438%x439))&x440);

    if (t97 != 3U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x441 = -25;
	volatile int8_t x442 = INT8_MIN;
	int64_t t98 = -393684583661711034LL;

    t98 = ((x441-(x442%x443))&x444);

    if (t98 != 103LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x445 = 8038U;
	uint8_t x446 = UINT8_MAX;
	int32_t x447 = INT32_MAX;
	int16_t x448 = 115;
	int32_t t99 = 234;

    t99 = ((x445-(x446%x447))&x448);

    if (t99 != 99) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x450 = INT64_MIN;
	int8_t x451 = INT8_MIN;
	uint32_t x452 = UINT32_MAX;
	volatile int64_t t100 = 35453517290822LL;

    t100 = ((x449-(x450%x451))&x452);

    if (t100 != 4294967295LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x453 = -65;
	int64_t x454 = INT64_MIN;
	volatile uint64_t x455 = 619995969LLU;
	int16_t x456 = -1;
	static uint64_t t101 = 4356077736LLU;

    t101 = ((x453-(x454%x455))&x456);

    if (t101 != 18446744073510247551LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x457 = UINT32_MAX;
	int16_t x458 = 8;
	static volatile int64_t x459 = 56767LL;

    t102 = ((x457-(x458%x459))&x460);

    if (t102 != 4294967287LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x461 = INT16_MAX;
	volatile uint16_t x462 = 356U;
	int32_t x464 = INT32_MIN;
	uint64_t t103 = 234LLU;

    t103 = ((x461-(x462%x463))&x464);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x465 = INT64_MIN;
	volatile int16_t x466 = 13067;
	volatile int8_t x467 = -1;
	int64_t x468 = -55514424368LL;
	volatile int64_t t104 = INT64_MIN;

    t104 = ((x465-(x466%x467))&x468);

    if (t104 != INT64_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x470 = INT64_MIN;
	int64_t x471 = INT64_MIN;
	int8_t x472 = INT8_MIN;
	uint64_t t105 = 3727LLU;

    t105 = ((x469-(x470%x471))&x472);

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x473 = 8985452497492433325LLU;
	uint8_t x475 = UINT8_MAX;
	int32_t x476 = INT32_MIN;
	static volatile uint64_t t106 = 13004753897LLU;

    t106 = ((x473-(x474%x475))&x476);

    if (t106 != 8985452497439031296LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x477 = -1581991473LL;
	int64_t x478 = 2613183496924LL;
	static volatile uint8_t x479 = 7U;
	int16_t x480 = INT16_MIN;
	int64_t t107 = 36720870318LL;

    t107 = ((x477-(x478%x479))&x480);

    if (t107 != -1582006272LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x482 = -1;
	volatile int64_t x483 = INT64_MAX;
	int64_t x484 = INT64_MIN;
	volatile int64_t t108 = INT64_MIN;

    t108 = ((x481-(x482%x483))&x484);

    if (t108 != INT64_MIN) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x486 = 1824456;
	volatile int16_t x487 = INT16_MAX;
	int32_t t109 = 4;

    t109 = ((x485-(x486%x487))&x488);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x489 = 503689U;
	uint8_t x490 = 2U;
	int8_t x491 = -1;
	int64_t x492 = -1LL;
	volatile int64_t t110 = -218615331LL;

    t110 = ((x489-(x490%x491))&x492);

    if (t110 != 503689LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x494 = INT8_MIN;
	int32_t x495 = -517304;
	int16_t x496 = -346;

    t111 = ((x493-(x494%x495))&x496);

    if (t111 != 39428LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x498 = INT32_MIN;
	static int8_t x499 = INT8_MAX;
	int8_t x500 = INT8_MIN;

    t112 = ((x497-(x498%x499))&x500);

    if (t112 != 32768) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x501 = 49644104U;
	int32_t x504 = -1;
	static uint32_t t113 = 3533194U;

    t113 = ((x501-(x502%x503))&x504);

    if (t113 != 49642844U) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x506 = 2033865045417495258LL;
	int64_t t114 = 19455430947LL;

    t114 = ((x505-(x506%x507))&x508);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int64_t x509 = INT64_MIN;
	int16_t x512 = -1;

    t115 = ((x509-(x510%x511))&x512);

    if (t115 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x513 = INT16_MAX;
	uint32_t x514 = 123537813U;
	int16_t x515 = INT16_MIN;
	static volatile uint16_t x516 = 243U;
	volatile uint32_t t116 = 1801837468U;

    t116 = ((x513-(x514%x515))&x516);

    if (t116 != 98U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x517 = UINT8_MAX;
	int8_t x518 = 1;
	uint8_t x519 = 1U;
	static int32_t t117 = 682825346;

    t117 = ((x517-(x518%x519))&x520);

    if (t117 != 235) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile uint64_t x521 = 753039112847LLU;
	int16_t x522 = -1;
	volatile int16_t x523 = -1;
	static uint32_t x524 = UINT32_MAX;
	uint64_t t118 = 28480850674LLU;

    t118 = ((x521-(x522%x523))&x524);

    if (t118 != 1419836047LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static int16_t x525 = INT16_MIN;
	int16_t x526 = -5211;
	static uint32_t x527 = 2033U;
	uint16_t x528 = UINT16_MAX;

    t119 = ((x525-(x526%x527))&x528);

    if (t119 != 31209U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = 2179;
	static uint64_t x530 = 11190435LLU;
	uint32_t x531 = 69423U;
	int32_t x532 = INT32_MIN;
	static uint64_t t120 = 180634394LLU;

    t120 = ((x529-(x530%x531))&x532);

    if (t120 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x533 = UINT32_MAX;
	int64_t x534 = INT64_MIN;
	static uint8_t x535 = UINT8_MAX;
	int32_t x536 = INT32_MIN;
	int64_t t121 = 286418584372LL;

    t121 = ((x533-(x534%x535))&x536);

    if (t121 != 4294967296LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x537 = 4236U;
	int64_t x538 = INT64_MIN;
	uint32_t x539 = 59322U;
	uint64_t x540 = 36631LLU;
	volatile uint64_t t122 = 18649482160LLU;

    t122 = ((x537-(x538%x539))&x540);

    if (t122 != 1558LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x541 = -392;
	int16_t x542 = INT16_MIN;
	volatile uint8_t x544 = 0U;

    t123 = ((x541-(x542%x543))&x544);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x545 = 126528U;
	uint16_t x547 = 5420U;
	uint64_t x548 = UINT64_MAX;
	static uint64_t t124 = 0LLU;

    t124 = ((x545-(x546%x547))&x548);

    if (t124 != 126796LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x550 = INT32_MIN;
	int32_t x551 = INT32_MIN;
	volatile int64_t t125 = -209536028051017LL;

    t125 = ((x549-(x550%x551))&x552);

    if (t125 != 2230279114LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x553 = 1;
	uint32_t x554 = 2U;
	volatile int8_t x555 = 9;
	int64_t x556 = INT64_MIN;
	volatile int64_t t126 = -5611257743320980LL;

    t126 = ((x553-(x554%x555))&x556);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x557 = 281U;
	static uint32_t x558 = 7U;
	int64_t x559 = -1LL;
	uint64_t t127 = 51250363131005LLU;

    t127 = ((x557-(x558%x559))&x560);

    if (t127 != 280LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x561 = INT32_MIN;
	uint32_t x562 = 423146583U;
	int16_t x563 = -6833;
	static volatile int16_t x564 = -1;
	volatile uint32_t t128 = 9U;

    t128 = ((x561-(x562%x563))&x564);

    if (t128 != 1724337065U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x566 = 1702U;
	volatile int32_t t129 = -43;

    t129 = ((x565-(x566%x567))&x568);

    if (t129 != 125) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x569 = -1;
	uint64_t x571 = UINT64_MAX;
	uint8_t x572 = 7U;
	uint64_t t130 = 10896LLU;

    t130 = ((x569-(x570%x571))&x572);

    if (t130 != 7LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x573 = 359592286621863598LL;
	volatile int8_t x574 = -1;
	uint64_t x576 = 2372290198125553LLU;
	volatile uint64_t t131 = 83LLU;

    t131 = ((x573-(x574%x575))&x576);

    if (t131 != 2257321129413281LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x577 = -999669617895969LL;
	int16_t x578 = INT16_MIN;
	int32_t x579 = -1;
	volatile uint16_t x580 = UINT16_MAX;
	volatile int64_t t132 = 246364583084390LL;

    t132 = ((x577-(x578%x579))&x580);

    if (t132 != 21983LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x581 = -1;
	uint64_t x582 = 31530034313663LLU;
	uint64_t x583 = 57LLU;
	int8_t x584 = 17;

    t133 = ((x581-(x582%x583))&x584);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x585 = 950570LLU;
	int16_t x586 = INT16_MIN;
	volatile int32_t x587 = -1;
	int8_t x588 = 2;
	uint64_t t134 = 1553663040869741LLU;

    t134 = ((x585-(x586%x587))&x588);

    if (t134 != 2LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x589 = UINT8_MAX;
	int16_t x590 = INT16_MIN;
	int16_t x591 = -1;
	static volatile int16_t x592 = INT16_MIN;
	volatile int32_t t135 = -3381;

    t135 = ((x589-(x590%x591))&x592);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int64_t x593 = INT64_MAX;
	static uint16_t x594 = 3926U;
	volatile int32_t x596 = -1;
	volatile int64_t t136 = -41313LL;

    t136 = ((x593-(x594%x595))&x596);

    if (t136 != 9223372036854771881LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x597 = INT64_MAX;
	uint8_t x598 = 70U;
	int32_t x599 = -1;
	volatile int64_t x600 = INT64_MIN;
	int64_t t137 = -13158239LL;

    t137 = ((x597-(x598%x599))&x600);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x601 = 2U;
	uint8_t x603 = 15U;
	volatile int8_t x604 = INT8_MIN;
	uint64_t t138 = 1118784610250192LLU;

    t138 = ((x601-(x602%x603))&x604);

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x605 = INT64_MIN;
	uint64_t x606 = 5548599020LLU;
	int32_t x607 = INT32_MAX;
	static uint8_t x608 = 19U;
	volatile uint64_t t139 = 25668LLU;

    t139 = ((x605-(x606%x607))&x608);

    if (t139 != 18LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x609 = -1LL;
	static uint64_t x611 = 473590258LLU;
	static int32_t x612 = INT32_MIN;
	volatile uint64_t t140 = 1528916273937LLU;

    t140 = ((x609-(x610%x611))&x612);

    if (t140 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x617 = UINT32_MAX;
	int8_t x618 = INT8_MIN;
	uint16_t x619 = 5U;
	uint8_t x620 = 123U;
	uint32_t t141 = 152U;

    t141 = ((x617-(x618%x619))&x620);

    if (t141 != 2U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x621 = 3;
	uint64_t x622 = UINT64_MAX;
	static uint16_t x623 = 1U;
	uint64_t t142 = 3093282019916986997LLU;

    t142 = ((x621-(x622%x623))&x624);

    if (t142 != 3LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x625 = UINT8_MAX;
	int64_t x626 = 234482LL;
	int8_t x627 = INT8_MAX;
	int64_t x628 = -1LL;
	volatile int64_t t143 = -317575LL;

    t143 = ((x625-(x626%x627))&x628);

    if (t143 != 215LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x629 = INT8_MIN;
	static int16_t x630 = 20;
	int16_t x631 = -3147;
	static int8_t x632 = 7;
	volatile int32_t t144 = 0;

    t144 = ((x629-(x630%x631))&x632);

    if (t144 != 4) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x633 = 251944;
	uint64_t x634 = 103LLU;
	int64_t x635 = -1LL;
	static uint64_t t145 = 4391LLU;

    t145 = ((x633-(x634%x635))&x636);

    if (t145 != 251841LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int64_t x637 = -1LL;
	static volatile int64_t x638 = 7LL;
	int8_t x639 = 5;
	uint8_t x640 = 50U;
	volatile int64_t t146 = 106LL;

    t146 = ((x637-(x638%x639))&x640);

    if (t146 != 48LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x641 = -1;
	static uint16_t x642 = 24U;
	static uint8_t x643 = 15U;
	int32_t x644 = -1;

    t147 = ((x641-(x642%x643))&x644);

    if (t147 != -10) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x645 = UINT64_MAX;
	uint32_t x646 = 3764459U;
	int64_t x648 = INT64_MIN;

    t148 = ((x645-(x646%x647))&x648);

    if (t148 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int64_t x649 = -3487279312779695342LL;
	volatile int16_t x651 = INT16_MIN;
	int32_t x652 = 3;
	static volatile int64_t t149 = -10466908296617172LL;

    t149 = ((x649-(x650%x651))&x652);

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x653 = -104LL;
	int32_t x654 = INT32_MIN;
	int16_t x655 = -1;
	int16_t x656 = INT16_MAX;
	static int64_t t150 = -116LL;

    t150 = ((x653-(x654%x655))&x656);

    if (t150 != 32664LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x657 = 763057613;
	int16_t x658 = INT16_MIN;
	static volatile int32_t x659 = INT32_MAX;
	int32_t t151 = 217235;

    t151 = ((x657-(x658%x659))&x660);

    if (t151 != 763068416) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x662 = 1U;
	uint64_t x663 = 542699201810777835LLU;
	static int8_t x664 = INT8_MAX;
	uint64_t t152 = 2394650867300412641LLU;

    t152 = ((x661-(x662%x663))&x664);

    if (t152 != 126LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x666 = -23;
	int8_t x667 = -1;
	int8_t x668 = -2;
	volatile int32_t t153 = -63106;

    t153 = ((x665-(x666%x667))&x668);

    if (t153 != 82) { NG(); } else { ; }
	
}

void f154(void) {
    	static int8_t x670 = INT8_MAX;
	int32_t x671 = INT32_MAX;
	static int32_t x672 = 2008;
	volatile int32_t t154 = 816537;

    t154 = ((x669-(x670%x671))&x672);

    if (t154 != 1408) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int32_t x673 = -1;
	uint32_t x676 = UINT32_MAX;
	volatile int64_t t155 = -3128302736849470LL;

    t155 = ((x673-(x674%x675))&x676);

    if (t155 != 32767LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x677 = 1;
	int16_t x678 = -1;
	uint32_t x679 = 3578673U;
	int8_t x680 = INT8_MAX;
	uint32_t t156 = 765103U;

    t156 = ((x677-(x678%x679))&x680);

    if (t156 != 50U) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x681 = INT8_MIN;
	uint32_t x682 = 18622156U;
	uint8_t x683 = 47U;
	volatile int64_t t157 = -1910269801829LL;

    t157 = ((x681-(x682%x683))&x684);

    if (t157 != 4294967164LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x685 = 5080;
	static uint64_t x687 = UINT64_MAX;
	uint64_t t158 = 185740LLU;

    t158 = ((x685-(x686%x687))&x688);

    if (t158 != 5080LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int16_t x689 = INT16_MIN;
	static uint32_t x690 = UINT32_MAX;
	int64_t x691 = 2405892763LL;
	volatile uint8_t x692 = UINT8_MAX;
	int64_t t159 = 7LL;

    t159 = ((x689-(x690%x691))&x692);

    if (t159 != 156LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x693 = INT64_MIN;
	uint32_t x694 = 0U;
	int64_t x695 = -3LL;
	int32_t x696 = INT32_MIN;
	int64_t t160 = INT64_MIN;

    t160 = ((x693-(x694%x695))&x696);

    if (t160 != INT64_MIN) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x697 = UINT16_MAX;
	int64_t x698 = -294LL;
	uint16_t x699 = 102U;
	volatile int16_t x700 = INT16_MAX;
	volatile int64_t t161 = 12592049373654126LL;

    t161 = ((x697-(x698%x699))&x700);

    if (t161 != 89LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x701 = INT8_MIN;
	static int32_t x702 = INT32_MAX;
	uint8_t x703 = 5U;
	int64_t t162 = -7046089198275LL;

    t162 = ((x701-(x702%x703))&x704);

    if (t162 != -29424LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x705 = -472082567;
	volatile int16_t x706 = -1;
	static int8_t x708 = INT8_MIN;

    t163 = ((x705-(x706%x707))&x708);

    if (t163 != -472082688) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int16_t x709 = -31;
	int32_t x711 = INT32_MIN;
	static volatile int8_t x712 = INT8_MAX;

    t164 = ((x709-(x710%x711))&x712);

    if (t164 != 30) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x715 = INT32_MAX;
	static int64_t t165 = -1511874370438447036LL;

    t165 = ((x713-(x714%x715))&x716);

    if (t165 != -633LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x717 = UINT8_MAX;
	int8_t x718 = INT8_MAX;
	volatile int64_t x720 = -617881470256284705LL;
	volatile int64_t t166 = 2980839899LL;

    t166 = ((x717-(x718%x719))&x720);

    if (t166 != 207LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x721 = -3299736072217LL;
	int16_t x722 = -1;
	volatile int8_t x723 = -1;
	volatile int32_t x724 = INT32_MIN;
	static volatile int64_t t167 = -391385665728813984LL;

    t167 = ((x721-(x722%x723))&x724);

    if (t167 != -3300682366976LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x725 = 1798922U;
	uint16_t x726 = UINT16_MAX;
	volatile uint8_t x727 = UINT8_MAX;
	volatile uint32_t t168 = 2791U;

    t168 = ((x725-(x726%x727))&x728);

    if (t168 != 1716994U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x729 = -1;
	int16_t x731 = -1;
	int8_t x732 = INT8_MAX;
	int32_t t169 = -360728;

    t169 = ((x729-(x730%x731))&x732);

    if (t169 != 127) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x733 = 15U;
	uint8_t x736 = UINT8_MAX;
	int64_t t170 = -66313357978LL;

    t170 = ((x733-(x734%x735))&x736);

    if (t170 != 15LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int32_t x738 = -1;
	static volatile uint64_t x739 = 683571808LLU;
	uint32_t x740 = 4U;

    t171 = ((x737-(x738%x739))&x740);

    if (t171 != 4LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x746 = -1;
	volatile int64_t x747 = -1LL;
	int32_t x748 = -1;
	volatile int64_t t172 = -11766528128549318LL;

    t172 = ((x745-(x746%x747))&x748);

    if (t172 != -32768LL) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int8_t x749 = 6;
	volatile uint32_t x750 = UINT32_MAX;
	uint8_t x751 = 71U;
	static uint32_t x752 = UINT32_MAX;
	volatile uint32_t t173 = 33135U;

    t173 = ((x749-(x750%x751))&x752);

    if (t173 != 4294967294U) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int64_t x753 = INT64_MIN;
	int32_t x755 = -159;
	int8_t x756 = -1;

    t174 = ((x753-(x754%x755))&x756);

    if (t174 != 9223372036854775774LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x757 = UINT16_MAX;
	volatile int32_t x758 = INT32_MIN;
	int32_t x760 = INT32_MIN;
	static volatile int32_t t175 = 1967;

    t175 = ((x757-(x758%x759))&x760);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x761 = -1;
	int16_t x762 = INT16_MIN;
	int8_t x763 = -1;
	volatile int32_t x764 = INT32_MIN;
	volatile int32_t t176 = INT32_MIN;

    t176 = ((x761-(x762%x763))&x764);

    if (t176 != INT32_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x777 = -1;
	volatile int64_t x778 = INT64_MAX;
	volatile int16_t x779 = -301;
	uint8_t x780 = 14U;
	static int64_t t177 = 1501702150LL;

    t177 = ((x777-(x778%x779))&x780);

    if (t177 != 10LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x781 = 1U;
	int16_t x782 = INT16_MIN;
	int32_t x784 = INT32_MAX;
	volatile uint32_t t178 = 2303U;

    t178 = ((x781-(x782%x783))&x784);

    if (t178 != 32769U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x785 = -1;
	volatile uint8_t x786 = 19U;
	static int8_t x788 = INT8_MIN;

    t179 = ((x785-(x786%x787))&x788);

    if (t179 != -128) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x789 = 11716U;
	uint16_t x790 = 1878U;
	volatile uint64_t x791 = 312968461LLU;
	uint32_t x792 = 52405U;

    t180 = ((x789-(x790%x791))&x792);

    if (t180 != 1060LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x793 = INT8_MIN;
	uint16_t x794 = UINT16_MAX;
	int64_t t181 = -996270975LL;

    t181 = ((x793-(x794%x795))&x796);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x797 = -88899306;
	int64_t x798 = -4300402793319LL;
	uint32_t x799 = 42U;
	int8_t x800 = INT8_MIN;
	volatile int64_t t182 = -2027951848946LL;

    t182 = ((x797-(x798%x799))&x800);

    if (t182 != -88899328LL) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x801 = -2;
	int16_t x802 = INT16_MIN;
	static int32_t x803 = INT32_MIN;
	static volatile uint64_t t183 = 80LLU;

    t183 = ((x801-(x802%x803))&x804);

    if (t183 != 7270LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x806 = INT8_MAX;
	uint8_t x807 = 104U;
	static int64_t x808 = INT64_MIN;
	volatile int64_t t184 = INT64_MIN;

    t184 = ((x805-(x806%x807))&x808);

    if (t184 != INT64_MIN) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x811 = 73934;
	uint16_t x812 = 8U;

    t185 = ((x809-(x810%x811))&x812);

    if (t185 != 8U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x813 = UINT64_MAX;
	int8_t x814 = -48;
	static uint64_t t186 = 106138LLU;

    t186 = ((x813-(x814%x815))&x816);

    if (t186 != 1LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint16_t x817 = 609U;
	int8_t x818 = INT8_MIN;
	uint32_t x819 = 22U;
	int8_t x820 = INT8_MIN;
	volatile uint32_t t187 = 10925U;

    t187 = ((x817-(x818%x819))&x820);

    if (t187 != 512U) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x821 = UINT16_MAX;
	int64_t x822 = INT64_MIN;
	int8_t x824 = -1;

    t188 = ((x821-(x822%x823))&x824);

    if (t188 != 65535LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x825 = -1;
	uint32_t x827 = UINT32_MAX;
	static int8_t x828 = 36;
	volatile int64_t t189 = -16LL;

    t189 = ((x825-(x826%x827))&x828);

    if (t189 != 36LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x829 = INT32_MIN;
	static uint32_t x830 = UINT32_MAX;
	int16_t x831 = INT16_MIN;
	volatile uint32_t t190 = 4U;

    t190 = ((x829-(x830%x831))&x832);

    if (t190 != 2147450881U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x833 = INT32_MAX;
	volatile uint64_t x834 = UINT64_MAX;
	int64_t x835 = INT64_MAX;
	uint16_t x836 = UINT16_MAX;
	uint64_t t191 = 392098017LLU;

    t191 = ((x833-(x834%x835))&x836);

    if (t191 != 65534LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x837 = UINT64_MAX;
	int8_t x838 = -1;
	volatile int16_t x839 = -1;
	int32_t x840 = 62003479;
	uint64_t t192 = 2852818LLU;

    t192 = ((x837-(x838%x839))&x840);

    if (t192 != 62003479LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x841 = 737873782925920LLU;
	volatile uint8_t x843 = 4U;
	int64_t x844 = -1LL;
	static volatile uint64_t t193 = 4941LLU;

    t193 = ((x841-(x842%x843))&x844);

    if (t193 != 737873782925920LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x845 = 10950050934LLU;
	int8_t x846 = INT8_MIN;
	static uint8_t x847 = 45U;
	volatile int16_t x848 = -1;
	uint64_t t194 = 277568782479703LLU;

    t194 = ((x845-(x846%x847))&x848);

    if (t194 != 10950050972LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x849 = INT64_MAX;
	int32_t x850 = 120818;
	uint64_t x851 = 10042385LLU;
	int32_t x852 = INT32_MAX;

    t195 = ((x849-(x850%x851))&x852);

    if (t195 != 2147362829LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x854 = INT16_MIN;
	uint32_t x855 = UINT32_MAX;
	int8_t x856 = INT8_MIN;
	uint32_t t196 = 52644962U;

    t196 = ((x853-(x854%x855))&x856);

    if (t196 != 32640U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x859 = INT32_MIN;
	uint16_t x860 = UINT16_MAX;
	volatile uint64_t t197 = 32459777LLU;

    t197 = ((x857-(x858%x859))&x860);

    if (t197 != 32769LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x861 = -1;
	uint16_t x862 = 7U;
	uint32_t x863 = UINT32_MAX;
	int16_t x864 = -1;

    t198 = ((x861-(x862%x863))&x864);

    if (t198 != 4294967288U) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x865 = -34;
	static volatile uint32_t x866 = UINT32_MAX;
	int8_t x867 = INT8_MAX;

    t199 = ((x865-(x866%x867))&x868);

    if (t199 != 5U) { NG(); } else { ; }
	
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

