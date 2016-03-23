
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

int32_t x3 = INT32_MIN;
int64_t x9 = -1LL;
int64_t x10 = 384127LL;
volatile int16_t x13 = -59;
int64_t x22 = 253663559712853LL;
volatile int8_t x33 = -6;
int64_t x46 = 15LL;
int64_t x48 = 130075832236LL;
int16_t x51 = INT16_MAX;
static volatile uint8_t x61 = 14U;
int8_t x69 = INT8_MAX;
volatile int32_t x71 = 1;
int16_t x76 = -1;
int8_t x87 = INT8_MIN;
static uint8_t x96 = UINT8_MAX;
int16_t x99 = INT16_MIN;
static volatile int32_t t23 = -368986;
volatile int32_t t24 = -20482;
uint8_t x113 = 34U;
uint16_t x114 = UINT16_MAX;
static int64_t x133 = INT64_MAX;
static uint16_t x154 = 4311U;
uint64_t x155 = 1606552LLU;
volatile int8_t x159 = 13;
volatile int8_t x160 = INT8_MIN;
static volatile int32_t t33 = 42181;
uint8_t x163 = UINT8_MAX;
int32_t x170 = INT32_MIN;
int8_t x176 = INT8_MIN;
static int64_t x180 = INT64_MIN;
static int32_t x184 = -1;
int8_t x187 = INT8_MAX;
volatile int32_t t41 = INT32_MAX;
int8_t x196 = INT8_MIN;
uint64_t t42 = 18189290279132LLU;
int8_t x201 = 1;
int32_t x204 = INT32_MAX;
int16_t x210 = INT16_MIN;
int8_t x211 = 58;
uint8_t x213 = UINT8_MAX;
int32_t x214 = INT32_MIN;
int8_t x215 = INT8_MAX;
uint32_t x219 = 1262270U;
volatile int8_t x220 = -1;
static volatile int64_t t48 = INT64_MAX;
volatile int16_t x223 = -1;
int8_t x235 = INT8_MIN;
volatile uint64_t x239 = 97470782LLU;
volatile int32_t t53 = -235578;
volatile int32_t t54 = -2441;
volatile int8_t x253 = INT8_MIN;
volatile int32_t t56 = -231962;
static int64_t x260 = INT64_MIN;
uint32_t t59 = 1891U;
int32_t t61 = 1;
uint32_t x281 = UINT32_MAX;
static int64_t x289 = -1LL;
volatile int64_t t64 = 16428LL;
uint64_t x300 = 25333228244221LLU;
volatile int32_t t66 = 1;
int32_t x305 = 675800786;
uint64_t x309 = 829032LLU;
uint64_t t68 = 4220396000487153888LLU;
static volatile int64_t x316 = 4128LL;
uint64_t x320 = 90853994104LLU;
int64_t x322 = INT64_MIN;
volatile int32_t t71 = INT32_MIN;
int8_t x328 = INT8_MAX;
int32_t t73 = 250310;
int8_t x334 = INT8_MIN;
static volatile int32_t t74 = -21520723;
static int64_t x347 = -9LL;
uint16_t x348 = UINT16_MAX;
uint8_t x349 = 3U;
static int64_t x354 = -12562445572867150LL;
int32_t x356 = INT32_MAX;
uint32_t x359 = 21U;
int32_t x368 = 3529;
uint64_t x376 = 51400787072373LLU;
volatile uint64_t x379 = 171520381582304575LLU;
static int32_t x382 = -227120808;
static volatile int8_t x385 = -1;
volatile int32_t t87 = 6590;
int8_t x392 = 1;
static volatile uint8_t x406 = 17U;
int32_t t91 = -11358564;
int8_t x416 = INT8_MAX;
int8_t x418 = INT8_MIN;
volatile int32_t t95 = -45;
int64_t x426 = INT64_MAX;
int32_t x427 = -8;
static volatile uint64_t x431 = UINT64_MAX;
int8_t x434 = -1;
uint64_t x435 = UINT64_MAX;
static uint64_t x436 = UINT64_MAX;
static uint16_t x441 = UINT16_MAX;
static int16_t x443 = -258;
static volatile int32_t t100 = -5551515;
static int8_t x462 = INT8_MIN;
int16_t x471 = INT16_MIN;
static int64_t x473 = -1LL;
uint32_t x479 = 3U;
int64_t x480 = 753313LL;
volatile int32_t t109 = INT32_MIN;
int8_t x481 = INT8_MAX;
static uint8_t x485 = UINT8_MAX;
uint64_t x489 = 551811432749880496LLU;
static int8_t x495 = INT8_MAX;
static int16_t x500 = INT16_MAX;
volatile int32_t x505 = INT32_MIN;
int32_t x508 = 86645;
static int32_t t116 = -212974;
uint64_t x524 = 5048231417LLU;
int64_t x526 = 0LL;
static int16_t x535 = INT16_MIN;
volatile uint32_t x536 = 732498228U;
uint64_t t121 = 3289LLU;
int32_t x540 = -1;
volatile int32_t t123 = -9419333;
int16_t x550 = INT16_MIN;
int32_t t125 = -2;
static int16_t x554 = 8719;
int32_t x565 = INT32_MIN;
uint16_t x568 = UINT16_MAX;
uint32_t x572 = 258929U;
int64_t x578 = INT64_MAX;
volatile int16_t x590 = -1;
int32_t x594 = INT32_MAX;
uint8_t x595 = UINT8_MAX;
int8_t x600 = INT8_MIN;
static uint8_t x604 = 1U;
volatile int32_t t139 = 7;
uint64_t x615 = 31190099792576496LLU;
int32_t x617 = INT32_MAX;
volatile int8_t x619 = INT8_MAX;
static volatile int32_t t142 = -64967381;
volatile int32_t t143 = 41;
static int8_t x632 = -49;
int32_t x634 = INT32_MIN;
int32_t t145 = -48687;
int32_t t151 = -340432719;
int64_t x670 = -1LL;
static int16_t x671 = INT16_MIN;
uint8_t x673 = 43U;
uint32_t x681 = 304022U;
uint32_t t155 = 35501U;
static volatile uint32_t x689 = 383U;
int16_t x710 = -1;
uint8_t x712 = 10U;
static uint32_t x716 = 450714U;
int8_t x720 = 2;
static uint64_t x723 = UINT64_MAX;
volatile int32_t t164 = -15571;
int32_t x731 = -1;
static int8_t x732 = INT8_MIN;
uint8_t x737 = 7U;
volatile uint8_t x748 = 86U;
uint32_t x757 = UINT32_MAX;
static int8_t x759 = INT8_MIN;
uint32_t x764 = 296446U;
volatile int32_t t173 = INT32_MIN;
static int16_t x791 = -1;
int64_t x792 = INT64_MAX;
volatile int32_t x796 = INT32_MIN;
int8_t x816 = INT8_MIN;
static volatile int16_t x821 = INT16_MAX;
volatile int8_t x823 = INT8_MAX;
int16_t x835 = INT16_MIN;
uint64_t x837 = 7925811734198LLU;
int16_t x844 = 59;
int64_t x848 = -1LL;
uint64_t t190 = 50638LLU;
static uint32_t x853 = 1454189U;
static int32_t x854 = INT32_MIN;
volatile int32_t x859 = 216886285;
uint8_t x860 = 63U;
uint64_t x863 = 384028254853LLU;
int8_t x872 = INT8_MAX;
int32_t x882 = INT32_MIN;
volatile uint64_t x884 = 675905051187681259LLU;
uint64_t x891 = 69371LLU;
static int32_t t199 = INT32_MIN;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MIN;
	uint32_t x4 = 184753723U;
	uint32_t t0 = 102444855U;

    t0 = (x1^(x2>(x3+x4)));

    if (t0 != 4294967294U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	uint8_t x6 = 88U;
	int16_t x7 = INT16_MAX;
	volatile uint8_t x8 = 1U;
	int32_t t1 = -7629343;

    t1 = (x5^(x6>(x7+x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	static int64_t x11 = -1LL;
	int8_t x12 = -16;
	int64_t t2 = 7918117462LL;

    t2 = (x9^(x10>(x11+x12)));

    if (t2 != -2LL) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int8_t x14 = INT8_MIN;
	int16_t x15 = INT16_MAX;
	int64_t x16 = -16278LL;
	volatile int32_t t3 = 3589766;

    t3 = (x13^(x14>(x15+x16)));

    if (t3 != -59) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x21 = 190265U;
	uint64_t x23 = UINT64_MAX;
	uint64_t x24 = 1037878212443877526LLU;
	volatile uint32_t t4 = 7U;

    t4 = (x21^(x22>(x23+x24)));

    if (t4 != 190265U) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	uint64_t x26 = 994LLU;
	int32_t x27 = INT32_MAX;
	uint32_t x28 = UINT32_MAX;
	int32_t t5 = -37;

    t5 = (x25^(x26>(x27+x28)));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int8_t x29 = -1;
	static int8_t x30 = INT8_MIN;
	static uint64_t x31 = UINT64_MAX;
	int8_t x32 = INT8_MAX;
	static int32_t t6 = -492;

    t6 = (x29^(x30>(x31+x32)));

    if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x34 = 0U;
	static int64_t x35 = INT64_MAX;
	int32_t x36 = -783519;
	static int32_t t7 = 88710;

    t7 = (x33^(x34>(x35+x36)));

    if (t7 != -6) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x37 = 1929;
	int32_t x38 = -63915631;
	int8_t x39 = INT8_MIN;
	uint16_t x40 = 1024U;
	volatile int32_t t8 = 835307521;

    t8 = (x37^(x38>(x39+x40)));

    if (t8 != 1929) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = INT32_MIN;
	int16_t x42 = INT16_MIN;
	int16_t x43 = -1;
	int8_t x44 = INT8_MIN;
	static volatile int32_t t9 = INT32_MIN;

    t9 = (x41^(x42>(x43+x44)));

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x45 = 26211001776376LLU;
	uint32_t x47 = UINT32_MAX;
	uint64_t t10 = 78LLU;

    t10 = (x45^(x46>(x47+x48)));

    if (t10 != 26211001776376LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = 3582;
	int8_t x50 = -1;
	volatile int16_t x52 = INT16_MIN;
	static int32_t t11 = 3;

    t11 = (x49^(x50>(x51+x52)));

    if (t11 != 3582) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = UINT8_MAX;
	uint16_t x54 = 157U;
	static uint8_t x55 = 87U;
	int16_t x56 = INT16_MAX;
	int32_t t12 = -1447132;

    t12 = (x53^(x54>(x55+x56)));

    if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	static int8_t x58 = INT8_MIN;
	static int8_t x59 = INT8_MAX;
	static volatile int32_t x60 = INT32_MIN;
	static int32_t t13 = -1;

    t13 = (x57^(x58>(x59+x60)));

    if (t13 != -32767) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x62 = INT16_MIN;
	uint8_t x63 = 28U;
	static volatile uint64_t x64 = 6743LLU;
	int32_t t14 = -1979;

    t14 = (x61^(x62>(x63+x64)));

    if (t14 != 15) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint64_t x70 = 999343491LLU;
	uint32_t x72 = UINT32_MAX;
	int32_t t15 = -196;

    t15 = (x69^(x70>(x71+x72)));

    if (t15 != 126) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x73 = INT32_MAX;
	uint32_t x74 = 1178322192U;
	static int16_t x75 = 2092;
	volatile int32_t t16 = -1;

    t16 = (x73^(x74>(x75+x76)));

    if (t16 != 2147483646) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x77 = INT8_MAX;
	uint16_t x78 = 20U;
	uint32_t x79 = 1493U;
	volatile uint32_t x80 = 118U;
	volatile int32_t t17 = -20;

    t17 = (x77^(x78>(x79+x80)));

    if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x81 = 49;
	int32_t x82 = INT32_MIN;
	static int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	static volatile int32_t t18 = 104379921;

    t18 = (x81^(x82>(x83+x84)));

    if (t18 != 49) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MIN;
	int64_t x88 = 262795440104LL;
	volatile int32_t t19 = INT32_MAX;

    t19 = (x85^(x86>(x87+x88)));

    if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x93 = -2;
	volatile int16_t x94 = -1;
	static int16_t x95 = -12;
	static volatile int32_t t20 = -1808669;

    t20 = (x93^(x94>(x95+x96)));

    if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x97 = -119;
	static int64_t x98 = INT64_MIN;
	volatile uint16_t x100 = 13U;
	int32_t t21 = -1;

    t21 = (x97^(x98>(x99+x100)));

    if (t21 != -119) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x101 = -397;
	int16_t x102 = 4;
	volatile int32_t x103 = -1;
	volatile int8_t x104 = INT8_MIN;
	static volatile int32_t t22 = -3925;

    t22 = (x101^(x102>(x103+x104)));

    if (t22 != -398) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int32_t x105 = 5;
	volatile int8_t x106 = INT8_MAX;
	static uint32_t x107 = 7U;
	int64_t x108 = 3LL;

    t23 = (x105^(x106>(x107+x108)));

    if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MAX;
	static int64_t x110 = INT64_MIN;
	int8_t x111 = INT8_MAX;
	uint64_t x112 = UINT64_MAX;

    t24 = (x109^(x110>(x111+x112)));

    if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x115 = 33U;
	int64_t x116 = INT64_MIN;
	int32_t t25 = -861170417;

    t25 = (x113^(x114>(x115+x116)));

    if (t25 != 35) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MAX;
	static volatile uint64_t x119 = 29920LLU;
	int8_t x120 = INT8_MAX;
	volatile int64_t t26 = 11605433948636011LL;

    t26 = (x117^(x118>(x119+x120)));

    if (t26 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = -1;
	volatile int8_t x122 = INT8_MAX;
	uint32_t x123 = 11U;
	volatile int64_t x124 = INT64_MIN;
	int32_t t27 = -48;

    t27 = (x121^(x122>(x123+x124)));

    if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x134 = UINT64_MAX;
	volatile uint8_t x135 = UINT8_MAX;
	int8_t x136 = -1;
	int64_t t28 = -70407483473608616LL;

    t28 = (x133^(x134>(x135+x136)));

    if (t28 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x141 = 7869204038222297LLU;
	int16_t x142 = 91;
	int16_t x143 = INT16_MIN;
	volatile int64_t x144 = -1LL;
	uint64_t t29 = 470967LLU;

    t29 = (x141^(x142>(x143+x144)));

    if (t29 != 7869204038222296LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x145 = -1;
	int16_t x146 = INT16_MAX;
	int64_t x147 = -1LL;
	volatile int32_t x148 = INT32_MIN;
	int32_t t30 = 7876347;

    t30 = (x145^(x146>(x147+x148)));

    if (t30 != -2) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x149 = INT16_MIN;
	uint16_t x150 = 4U;
	uint32_t x151 = UINT32_MAX;
	static int32_t x152 = INT32_MIN;
	int32_t t31 = 12;

    t31 = (x149^(x150>(x151+x152)));

    if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x153 = INT64_MIN;
	int32_t x156 = INT32_MIN;
	volatile int64_t t32 = INT64_MIN;

    t32 = (x153^(x154>(x155+x156)));

    if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = -1;
	uint64_t x158 = 447087222LLU;

    t33 = (x157^(x158>(x159+x160)));

    if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x161 = 0U;
	int8_t x162 = INT8_MIN;
	int8_t x164 = 0;
	static int32_t t34 = -13;

    t34 = (x161^(x162>(x163+x164)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x165 = 115U;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = INT64_MIN;
	int8_t x168 = INT8_MAX;
	int32_t t35 = -88961194;

    t35 = (x165^(x166>(x167+x168)));

    if (t35 != 114) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x169 = -1;
	volatile int16_t x171 = INT16_MIN;
	uint32_t x172 = 245964U;
	static volatile int32_t t36 = -54757;

    t36 = (x169^(x170>(x171+x172)));

    if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x173 = -5LL;
	int8_t x174 = INT8_MIN;
	static uint16_t x175 = 0U;
	int64_t t37 = -1213232LL;

    t37 = (x173^(x174>(x175+x176)));

    if (t37 != -5LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x177 = 2;
	int32_t x178 = INT32_MIN;
	int16_t x179 = INT16_MAX;
	volatile int32_t t38 = -970571736;

    t38 = (x177^(x178>(x179+x180)));

    if (t38 != 3) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x181 = UINT8_MAX;
	volatile int32_t x182 = -1;
	static int64_t x183 = -3588LL;
	int32_t t39 = 291886;

    t39 = (x181^(x182>(x183+x184)));

    if (t39 != 254) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x185 = INT64_MAX;
	int32_t x186 = -1;
	int64_t x188 = -1LL;
	static volatile int64_t t40 = INT64_MAX;

    t40 = (x185^(x186>(x187+x188)));

    if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int32_t x189 = INT32_MAX;
	uint16_t x190 = 6U;
	uint16_t x191 = 92U;
	uint64_t x192 = 510456434378756359LLU;

    t41 = (x189^(x190>(x191+x192)));

    if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x193 = 14472387LLU;
	volatile int32_t x194 = INT32_MIN;
	uint64_t x195 = 1630098026038890LLU;

    t42 = (x193^(x194>(x195+x196)));

    if (t42 != 14472386LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x197 = 883U;
	volatile int8_t x198 = INT8_MIN;
	static uint16_t x199 = 1U;
	uint8_t x200 = 34U;
	volatile int32_t t43 = -1028922062;

    t43 = (x197^(x198>(x199+x200)));

    if (t43 != 883) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x202 = 1555954328U;
	volatile int32_t x203 = INT32_MIN;
	int32_t t44 = -691280;

    t44 = (x201^(x202>(x203+x204)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x205 = INT32_MIN;
	static uint8_t x206 = 6U;
	uint16_t x207 = 25927U;
	volatile uint64_t x208 = UINT64_MAX;
	static int32_t t45 = INT32_MIN;

    t45 = (x205^(x206>(x207+x208)));

    if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x209 = -1;
	static int16_t x212 = INT16_MIN;
	static volatile int32_t t46 = 40;

    t46 = (x209^(x210>(x211+x212)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t47 = 257;

    t47 = (x213^(x214>(x215+x216)));

    if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x217 = INT64_MAX;
	int16_t x218 = INT16_MAX;

    t48 = (x217^(x218>(x219+x220)));

    if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x221 = 4053875U;
	static int8_t x222 = INT8_MAX;
	uint8_t x224 = 1U;
	volatile uint32_t t49 = 5872U;

    t49 = (x221^(x222>(x223+x224)));

    if (t49 != 4053874U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x229 = INT32_MIN;
	int16_t x230 = 1;
	int16_t x231 = -1;
	int32_t x232 = INT32_MAX;
	int32_t t50 = INT32_MIN;

    t50 = (x229^(x230>(x231+x232)));

    if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint16_t x233 = UINT16_MAX;
	volatile int64_t x234 = INT64_MIN;
	int32_t x236 = -5604871;
	int32_t t51 = 11616040;

    t51 = (x233^(x234>(x235+x236)));

    if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = INT8_MIN;
	uint64_t x238 = UINT64_MAX;
	static volatile int16_t x240 = INT16_MIN;
	volatile int32_t t52 = -24890739;

    t52 = (x237^(x238>(x239+x240)));

    if (t52 != -127) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint16_t x241 = UINT16_MAX;
	volatile int64_t x242 = -611168010443LL;
	uint32_t x243 = UINT32_MAX;
	static int64_t x244 = INT64_MIN;

    t53 = (x241^(x242>(x243+x244)));

    if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x245 = INT16_MIN;
	static uint8_t x246 = UINT8_MAX;
	uint8_t x247 = UINT8_MAX;
	int8_t x248 = 63;

    t54 = (x245^(x246>(x247+x248)));

    if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x249 = 441719173U;
	volatile int16_t x250 = -1;
	int16_t x251 = INT16_MIN;
	uint64_t x252 = 83676860LLU;
	volatile uint32_t t55 = 41789U;

    t55 = (x249^(x250>(x251+x252)));

    if (t55 != 441719172U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x254 = 6413893U;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;

    t56 = (x253^(x254>(x255+x256)));

    if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x257 = INT16_MIN;
	volatile int64_t x258 = INT64_MAX;
	static uint16_t x259 = 0U;
	volatile int32_t t57 = 6354892;

    t57 = (x257^(x258>(x259+x260)));

    if (t57 != -32767) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x261 = UINT16_MAX;
	uint64_t x262 = UINT64_MAX;
	static int8_t x263 = 2;
	int64_t x264 = INT64_MIN;
	int32_t t58 = 75727;

    t58 = (x261^(x262>(x263+x264)));

    if (t58 != 65534) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x265 = 14U;
	int16_t x266 = -1;
	uint8_t x267 = 0U;
	volatile int8_t x268 = INT8_MIN;

    t59 = (x265^(x266>(x267+x268)));

    if (t59 != 15U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x273 = 35U;
	int64_t x274 = -1LL;
	volatile uint64_t x275 = UINT64_MAX;
	static int16_t x276 = 3;
	static int32_t t60 = 51;

    t60 = (x273^(x274>(x275+x276)));

    if (t60 != 34) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x277 = -1;
	int64_t x278 = INT64_MIN;
	int16_t x279 = -1;
	volatile uint8_t x280 = 4U;

    t61 = (x277^(x278>(x279+x280)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	static int64_t x284 = INT64_MAX;
	static volatile uint32_t t62 = UINT32_MAX;

    t62 = (x281^(x282>(x283+x284)));

    if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint16_t x285 = UINT16_MAX;
	volatile int8_t x286 = -1;
	int32_t x287 = -1;
	volatile uint8_t x288 = 0U;
	int32_t t63 = -2024;

    t63 = (x285^(x286>(x287+x288)));

    if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x290 = INT8_MIN;
	int8_t x291 = 59;
	volatile uint8_t x292 = 1U;

    t64 = (x289^(x290>(x291+x292)));

    if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x297 = INT64_MAX;
	int8_t x298 = INT8_MAX;
	volatile int32_t x299 = INT32_MIN;
	int64_t t65 = INT64_MAX;

    t65 = (x297^(x298>(x299+x300)));

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x301 = UINT16_MAX;
	uint16_t x302 = 3U;
	int64_t x303 = -1LL;
	int32_t x304 = 573941765;

    t66 = (x301^(x302>(x303+x304)));

    if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x306 = -1;
	int32_t x307 = -1033094;
	volatile int16_t x308 = -24;
	int32_t t67 = 426127;

    t67 = (x305^(x306>(x307+x308)));

    if (t67 != 675800787) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x310 = INT64_MAX;
	uint32_t x311 = UINT32_MAX;
	uint16_t x312 = 1662U;

    t68 = (x309^(x310>(x311+x312)));

    if (t68 != 829033LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint32_t x313 = 619U;
	volatile int8_t x314 = INT8_MIN;
	uint16_t x315 = 11U;
	volatile uint32_t t69 = 181291657U;

    t69 = (x313^(x314>(x315+x316)));

    if (t69 != 619U) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MAX;
	volatile int8_t x319 = INT8_MIN;
	volatile int32_t t70 = -18290;

    t70 = (x317^(x318>(x319+x320)));

    if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x321 = INT32_MIN;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = -41900LL;

    t71 = (x321^(x322>(x323+x324)));

    if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x325 = INT32_MAX;
	static int16_t x326 = INT16_MIN;
	int8_t x327 = INT8_MIN;
	volatile int32_t t72 = INT32_MAX;

    t72 = (x325^(x326>(x327+x328)));

    if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile uint16_t x329 = 738U;
	int8_t x330 = INT8_MAX;
	int32_t x331 = 1;
	int16_t x332 = INT16_MIN;

    t73 = (x329^(x330>(x331+x332)));

    if (t73 != 739) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x333 = -1;
	static int32_t x335 = -7;
	volatile int64_t x336 = -1LL;

    t74 = (x333^(x334>(x335+x336)));

    if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x337 = INT8_MIN;
	static volatile int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MAX;
	static uint64_t x340 = 10204260889LLU;
	static int32_t t75 = 2489;

    t75 = (x337^(x338>(x339+x340)));

    if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint8_t x341 = 2U;
	int64_t x342 = INT64_MIN;
	static volatile uint16_t x343 = UINT16_MAX;
	static int8_t x344 = 0;
	int32_t t76 = 0;

    t76 = (x341^(x342>(x343+x344)));

    if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint32_t x345 = UINT32_MAX;
	volatile int8_t x346 = -24;
	volatile uint32_t t77 = UINT32_MAX;

    t77 = (x345^(x346>(x347+x348)));

    if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x350 = UINT32_MAX;
	static int64_t x351 = 6LL;
	uint32_t x352 = 608217204U;
	int32_t t78 = -9197;

    t78 = (x349^(x350>(x351+x352)));

    if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x353 = 7952;
	int8_t x355 = -4;
	int32_t t79 = 0;

    t79 = (x353^(x354>(x355+x356)));

    if (t79 != 7952) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x357 = UINT16_MAX;
	volatile uint8_t x358 = UINT8_MAX;
	uint32_t x360 = 127U;
	int32_t t80 = 186177770;

    t80 = (x357^(x358>(x359+x360)));

    if (t80 != 65534) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x361 = -1;
	uint64_t x362 = 248236795008LLU;
	int8_t x363 = INT8_MIN;
	int64_t x364 = INT64_MAX;
	volatile int32_t t81 = 5;

    t81 = (x361^(x362>(x363+x364)));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x365 = -1LL;
	uint8_t x366 = 18U;
	uint64_t x367 = 134192947642LLU;
	volatile int64_t t82 = 650136LL;

    t82 = (x365^(x366>(x367+x368)));

    if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x369 = INT64_MAX;
	uint64_t x370 = UINT64_MAX;
	uint64_t x371 = UINT64_MAX;
	int64_t x372 = -12031250331159LL;
	volatile int64_t t83 = 103078098826886LL;

    t83 = (x369^(x370>(x371+x372)));

    if (t83 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x373 = INT8_MAX;
	int64_t x374 = INT64_MIN;
	uint8_t x375 = 0U;
	volatile int32_t t84 = 2;

    t84 = (x373^(x374>(x375+x376)));

    if (t84 != 126) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x377 = -1;
	volatile uint8_t x378 = 20U;
	volatile int32_t x380 = -1;
	static volatile int32_t t85 = 13809575;

    t85 = (x377^(x378>(x379+x380)));

    if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x381 = INT8_MAX;
	uint32_t x383 = 42972221U;
	volatile int32_t x384 = -1;
	volatile int32_t t86 = -413;

    t86 = (x381^(x382>(x383+x384)));

    if (t86 != 126) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x386 = 24U;
	volatile uint8_t x387 = 7U;
	volatile uint32_t x388 = UINT32_MAX;

    t87 = (x385^(x386>(x387+x388)));

    if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x389 = 233466802U;
	int8_t x390 = INT8_MIN;
	static int16_t x391 = INT16_MAX;
	volatile uint32_t t88 = 673U;

    t88 = (x389^(x390>(x391+x392)));

    if (t88 != 233466802U) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x397 = 60159113LLU;
	int8_t x398 = -1;
	volatile int16_t x399 = 2894;
	int8_t x400 = INT8_MIN;
	uint64_t t89 = 116139238040757LLU;

    t89 = (x397^(x398>(x399+x400)));

    if (t89 != 60159113LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x401 = 1;
	int32_t x402 = INT32_MIN;
	int8_t x403 = 7;
	uint64_t x404 = 6936LLU;
	int32_t t90 = 0;

    t90 = (x401^(x402>(x403+x404)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int16_t x405 = -1;
	int32_t x407 = 1;
	int32_t x408 = -1;

    t91 = (x405^(x406>(x407+x408)));

    if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint8_t x409 = 31U;
	int32_t x410 = INT32_MAX;
	volatile int64_t x411 = -1LL;
	int16_t x412 = 5;
	volatile int32_t t92 = -63;

    t92 = (x409^(x410>(x411+x412)));

    if (t92 != 30) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x413 = 43347LLU;
	int16_t x414 = INT16_MAX;
	uint32_t x415 = 8066018U;
	volatile uint64_t t93 = 14124361LLU;

    t93 = (x413^(x414>(x415+x416)));

    if (t93 != 43347LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x417 = -2062948054281LL;
	int64_t x419 = -35686442929396LL;
	int16_t x420 = -2;
	static volatile int64_t t94 = -64708LL;

    t94 = (x417^(x418>(x419+x420)));

    if (t94 != -2062948054282LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x421 = -15;
	volatile int8_t x422 = 0;
	int32_t x423 = 71540979;
	static int16_t x424 = INT16_MIN;

    t95 = (x421^(x422>(x423+x424)));

    if (t95 != -15) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x425 = INT16_MAX;
	static int16_t x428 = -1;
	volatile int32_t t96 = -387253;

    t96 = (x425^(x426>(x427+x428)));

    if (t96 != 32766) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x429 = INT32_MIN;
	int8_t x430 = -1;
	int16_t x432 = INT16_MAX;
	static int32_t t97 = 0;

    t97 = (x429^(x430>(x431+x432)));

    if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x433 = UINT32_MAX;
	static uint32_t t98 = 16117U;

    t98 = (x433^(x434>(x435+x436)));

    if (t98 != 4294967294U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x437 = 1U;
	int64_t x438 = INT64_MIN;
	uint32_t x439 = UINT32_MAX;
	uint32_t x440 = 3868402U;
	int32_t t99 = -265105;

    t99 = (x437^(x438>(x439+x440)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x442 = INT16_MAX;
	volatile uint64_t x444 = 3LLU;

    t100 = (x441^(x442>(x443+x444)));

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x445 = -1LL;
	int32_t x446 = 55;
	static uint64_t x447 = 704014237198965765LLU;
	int64_t x448 = -1LL;
	static int64_t t101 = -149795412426670LL;

    t101 = (x445^(x446>(x447+x448)));

    if (t101 != -1LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x449 = 135200486LLU;
	static int8_t x450 = -1;
	uint8_t x451 = 73U;
	int64_t x452 = INT64_MIN;
	volatile uint64_t t102 = 710803443LLU;

    t102 = (x449^(x450>(x451+x452)));

    if (t102 != 135200487LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x453 = -1;
	int8_t x454 = -1;
	int16_t x455 = INT16_MIN;
	static uint16_t x456 = 53U;
	static int32_t t103 = 7;

    t103 = (x453^(x454>(x455+x456)));

    if (t103 != -2) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x457 = INT16_MIN;
	volatile int16_t x458 = -1;
	uint16_t x459 = 1U;
	uint16_t x460 = 0U;
	volatile int32_t t104 = -20101;

    t104 = (x457^(x458>(x459+x460)));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	uint64_t x461 = 1312100098LLU;
	int32_t x463 = INT32_MIN;
	volatile int8_t x464 = INT8_MAX;
	static volatile uint64_t t105 = 2468254818178174LLU;

    t105 = (x461^(x462>(x463+x464)));

    if (t105 != 1312100099LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x465 = INT32_MAX;
	int32_t x466 = 908111;
	volatile uint64_t x467 = UINT64_MAX;
	volatile int16_t x468 = -1;
	volatile int32_t t106 = INT32_MAX;

    t106 = (x465^(x466>(x467+x468)));

    if (t106 != INT32_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x469 = INT32_MAX;
	volatile int16_t x470 = INT16_MAX;
	uint8_t x472 = 4U;
	int32_t t107 = 2;

    t107 = (x469^(x470>(x471+x472)));

    if (t107 != 2147483646) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x474 = UINT8_MAX;
	uint8_t x475 = UINT8_MAX;
	int32_t x476 = 24803;
	int64_t t108 = 1492874679416385989LL;

    t108 = (x473^(x474>(x475+x476)));

    if (t108 != -1LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x477 = INT32_MIN;
	static int8_t x478 = -15;

    t109 = (x477^(x478>(x479+x480)));

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x482 = UINT32_MAX;
	uint64_t x483 = 4LLU;
	uint8_t x484 = UINT8_MAX;
	static int32_t t110 = -6;

    t110 = (x481^(x482>(x483+x484)));

    if (t110 != 126) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x486 = INT32_MIN;
	static int32_t x487 = INT32_MIN;
	static int32_t x488 = INT32_MAX;
	int32_t t111 = 61141711;

    t111 = (x485^(x486>(x487+x488)));

    if (t111 != 255) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile uint64_t x490 = 1574342390405585775LLU;
	int16_t x491 = INT16_MIN;
	int64_t x492 = 164982578321549LL;
	volatile uint64_t t112 = 136331160312474481LLU;

    t112 = (x489^(x490>(x491+x492)));

    if (t112 != 551811432749880497LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x493 = 2568U;
	static volatile int64_t x494 = INT64_MIN;
	int32_t x496 = INT32_MIN;
	volatile int32_t t113 = 4;

    t113 = (x493^(x494>(x495+x496)));

    if (t113 != 2568) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint16_t x497 = 8525U;
	uint32_t x498 = 197271U;
	static uint64_t x499 = 6384LLU;
	int32_t t114 = 0;

    t114 = (x497^(x498>(x499+x500)));

    if (t114 != 8524) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x506 = INT32_MIN;
	int16_t x507 = -1;
	int32_t t115 = INT32_MIN;

    t115 = (x505^(x506>(x507+x508)));

    if (t115 != INT32_MIN) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x509 = INT8_MAX;
	uint32_t x510 = UINT32_MAX;
	int32_t x511 = INT32_MIN;
	int32_t x512 = INT32_MAX;

    t116 = (x509^(x510>(x511+x512)));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x513 = 189;
	uint8_t x514 = 0U;
	volatile uint64_t x515 = UINT64_MAX;
	volatile uint16_t x516 = 5014U;
	volatile int32_t t117 = 798;

    t117 = (x513^(x514>(x515+x516)));

    if (t117 != 189) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x521 = -1LL;
	uint64_t x522 = UINT64_MAX;
	volatile int64_t x523 = 221LL;
	volatile int64_t t118 = -2725078585272444543LL;

    t118 = (x521^(x522>(x523+x524)));

    if (t118 != -2LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x525 = INT32_MIN;
	uint64_t x527 = 1637746308LLU;
	volatile int64_t x528 = -311LL;
	int32_t t119 = INT32_MIN;

    t119 = (x525^(x526>(x527+x528)));

    if (t119 != INT32_MIN) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x529 = -68199853;
	static int8_t x530 = -1;
	uint8_t x531 = UINT8_MAX;
	int8_t x532 = 14;
	volatile int32_t t120 = -3613;

    t120 = (x529^(x530>(x531+x532)));

    if (t120 != -68199853) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint64_t x533 = UINT64_MAX;
	int8_t x534 = -1;

    t121 = (x533^(x534>(x535+x536)));

    if (t121 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x537 = 744549;
	static int16_t x538 = -3;
	volatile int16_t x539 = INT16_MIN;
	volatile int32_t t122 = -6495;

    t122 = (x537^(x538>(x539+x540)));

    if (t122 != 744548) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint16_t x541 = 3U;
	int8_t x542 = INT8_MIN;
	volatile int16_t x543 = -204;
	static volatile int64_t x544 = INT64_MAX;

    t123 = (x541^(x542>(x543+x544)));

    if (t123 != 3) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x545 = INT16_MIN;
	int8_t x546 = INT8_MIN;
	volatile int64_t x547 = INT64_MIN;
	volatile uint64_t x548 = 499LLU;
	volatile int32_t t124 = 513143721;

    t124 = (x545^(x546>(x547+x548)));

    if (t124 != -32767) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x549 = 1336;
	int16_t x551 = -1;
	int16_t x552 = INT16_MAX;

    t125 = (x549^(x550>(x551+x552)));

    if (t125 != 1336) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x553 = INT8_MAX;
	static int16_t x555 = INT16_MAX;
	static int8_t x556 = 36;
	int32_t t126 = 8257;

    t126 = (x553^(x554>(x555+x556)));

    if (t126 != 127) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x557 = -1;
	int64_t x558 = 371158444LL;
	uint32_t x559 = 242U;
	int32_t x560 = -17310590;
	volatile int32_t t127 = -445650044;

    t127 = (x557^(x558>(x559+x560)));

    if (t127 != -1) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x561 = INT16_MIN;
	volatile uint8_t x562 = UINT8_MAX;
	volatile int16_t x563 = 1;
	int8_t x564 = -1;
	volatile int32_t t128 = -28;

    t128 = (x561^(x562>(x563+x564)));

    if (t128 != -32767) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x566 = UINT8_MAX;
	int64_t x567 = INT64_MIN;
	int32_t t129 = -256499;

    t129 = (x565^(x566>(x567+x568)));

    if (t129 != -2147483647) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x569 = INT32_MIN;
	int8_t x570 = INT8_MAX;
	int16_t x571 = INT16_MAX;
	static int32_t t130 = INT32_MIN;

    t130 = (x569^(x570>(x571+x572)));

    if (t130 != INT32_MIN) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x573 = 109020319704LLU;
	static int16_t x574 = INT16_MIN;
	int32_t x575 = INT32_MIN;
	static int32_t x576 = INT32_MAX;
	uint64_t t131 = 126129724295138702LLU;

    t131 = (x573^(x574>(x575+x576)));

    if (t131 != 109020319704LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x577 = -8503891108882LL;
	uint8_t x579 = 58U;
	uint8_t x580 = 0U;
	volatile int64_t t132 = -111699144734561120LL;

    t132 = (x577^(x578>(x579+x580)));

    if (t132 != -8503891108881LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x581 = INT32_MIN;
	static int16_t x582 = -1;
	int64_t x583 = -1LL;
	int32_t x584 = -4538840;
	volatile int32_t t133 = 34412;

    t133 = (x581^(x582>(x583+x584)));

    if (t133 != -2147483647) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int64_t x585 = INT64_MAX;
	volatile int64_t x586 = -1LL;
	static int32_t x587 = -1;
	uint64_t x588 = 11210338LLU;
	static volatile int64_t t134 = 442647890390LL;

    t134 = (x585^(x586>(x587+x588)));

    if (t134 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x589 = -1;
	uint8_t x591 = 95U;
	int8_t x592 = INT8_MIN;
	volatile int32_t t135 = -20;

    t135 = (x589^(x590>(x591+x592)));

    if (t135 != -2) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x593 = INT8_MIN;
	uint64_t x596 = 724769628LLU;
	volatile int32_t t136 = -98252406;

    t136 = (x593^(x594>(x595+x596)));

    if (t136 != -127) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x597 = -2238501;
	uint8_t x598 = UINT8_MAX;
	static uint32_t x599 = UINT32_MAX;
	volatile int32_t t137 = -91265;

    t137 = (x597^(x598>(x599+x600)));

    if (t137 != -2238501) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x601 = 610357656LLU;
	uint32_t x602 = 49418968U;
	int16_t x603 = 236;
	uint64_t t138 = 188221LLU;

    t138 = (x601^(x602>(x603+x604)));

    if (t138 != 610357657LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x605 = INT16_MAX;
	static int32_t x606 = INT32_MIN;
	uint8_t x607 = 5U;
	int16_t x608 = INT16_MIN;

    t139 = (x605^(x606>(x607+x608)));

    if (t139 != 32767) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x609 = -1;
	int8_t x610 = INT8_MIN;
	volatile int16_t x611 = INT16_MIN;
	int8_t x612 = -1;
	volatile int32_t t140 = -4151465;

    t140 = (x609^(x610>(x611+x612)));

    if (t140 != -2) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x613 = INT32_MIN;
	volatile int16_t x614 = 16298;
	int16_t x616 = INT16_MIN;
	volatile int32_t t141 = INT32_MIN;

    t141 = (x613^(x614>(x615+x616)));

    if (t141 != INT32_MIN) { NG(); } else { ; }
	
}

void f142(void) {
    	static int8_t x618 = -1;
	static int32_t x620 = INT32_MIN;

    t142 = (x617^(x618>(x619+x620)));

    if (t142 != 2147483646) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x621 = INT8_MIN;
	uint8_t x622 = UINT8_MAX;
	uint8_t x623 = 52U;
	int16_t x624 = -1;

    t143 = (x621^(x622>(x623+x624)));

    if (t143 != -127) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x629 = INT16_MIN;
	static uint64_t x630 = UINT64_MAX;
	int64_t x631 = -42464790LL;
	int32_t t144 = 2082;

    t144 = (x629^(x630>(x631+x632)));

    if (t144 != -32767) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x633 = 29;
	uint16_t x635 = 597U;
	static volatile int8_t x636 = INT8_MIN;

    t145 = (x633^(x634>(x635+x636)));

    if (t145 != 29) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x641 = 1741U;
	static int16_t x642 = INT16_MIN;
	int64_t x643 = -19LL;
	int8_t x644 = INT8_MIN;
	volatile int32_t t146 = 12089;

    t146 = (x641^(x642>(x643+x644)));

    if (t146 != 1741) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x645 = -1LL;
	static volatile int64_t x646 = -1047LL;
	int16_t x647 = -1;
	uint16_t x648 = 355U;
	volatile int64_t t147 = -127157375720LL;

    t147 = (x645^(x646>(x647+x648)));

    if (t147 != -1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x649 = -1;
	int16_t x650 = INT16_MAX;
	uint32_t x651 = 3351U;
	int64_t x652 = INT64_MIN;
	volatile int32_t t148 = 21346;

    t148 = (x649^(x650>(x651+x652)));

    if (t148 != -2) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x653 = 0U;
	int8_t x654 = -22;
	int8_t x655 = -28;
	int16_t x656 = 139;
	volatile int32_t t149 = 89719;

    t149 = (x653^(x654>(x655+x656)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x657 = -1;
	int16_t x658 = 0;
	uint8_t x659 = 29U;
	int32_t x660 = -950;
	int32_t t150 = 37;

    t150 = (x657^(x658>(x659+x660)));

    if (t150 != -2) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x661 = INT32_MAX;
	int64_t x662 = -58890518304LL;
	uint64_t x663 = 87338591LLU;
	int16_t x664 = INT16_MIN;

    t151 = (x661^(x662>(x663+x664)));

    if (t151 != 2147483646) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x665 = UINT16_MAX;
	int64_t x666 = INT64_MIN;
	int8_t x667 = -30;
	volatile int8_t x668 = INT8_MAX;
	int32_t t152 = 46606954;

    t152 = (x665^(x666>(x667+x668)));

    if (t152 != 65535) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x669 = -9;
	int64_t x672 = -1LL;
	int32_t t153 = -112603;

    t153 = (x669^(x670>(x671+x672)));

    if (t153 != -10) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x674 = 1;
	int8_t x675 = INT8_MAX;
	volatile int16_t x676 = INT16_MIN;
	volatile int32_t t154 = -105;

    t154 = (x673^(x674>(x675+x676)));

    if (t154 != 42) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x682 = UINT8_MAX;
	static uint32_t x683 = 13861336U;
	int16_t x684 = INT16_MAX;

    t155 = (x681^(x682>(x683+x684)));

    if (t155 != 304022U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x685 = 0;
	volatile int8_t x686 = INT8_MIN;
	uint16_t x687 = 4967U;
	uint16_t x688 = 12521U;
	int32_t t156 = -333752587;

    t156 = (x685^(x686>(x687+x688)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint16_t x690 = 22U;
	static int32_t x691 = -1;
	uint64_t x692 = UINT64_MAX;
	uint32_t t157 = 234U;

    t157 = (x689^(x690>(x691+x692)));

    if (t157 != 383U) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x693 = -1;
	int16_t x694 = 1;
	volatile uint8_t x695 = 20U;
	int64_t x696 = INT64_MIN;
	volatile int32_t t158 = -15183085;

    t158 = (x693^(x694>(x695+x696)));

    if (t158 != -2) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x697 = -2;
	static int64_t x698 = INT64_MIN;
	uint32_t x699 = 283U;
	volatile int64_t x700 = 0LL;
	int32_t t159 = -116088312;

    t159 = (x697^(x698>(x699+x700)));

    if (t159 != -2) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x709 = 18894U;
	static int8_t x711 = INT8_MIN;
	int32_t t160 = -17930192;

    t160 = (x709^(x710>(x711+x712)));

    if (t160 != 18895) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x713 = UINT32_MAX;
	int32_t x714 = INT32_MIN;
	volatile int32_t x715 = -1;
	uint32_t t161 = 14010U;

    t161 = (x713^(x714>(x715+x716)));

    if (t161 != 4294967294U) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x717 = INT64_MIN;
	uint8_t x718 = 28U;
	static volatile uint64_t x719 = UINT64_MAX;
	static int64_t t162 = -3536LL;

    t162 = (x717^(x718>(x719+x720)));

    if (t162 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x721 = -14726201132272LL;
	int32_t x722 = 495137;
	int8_t x724 = 1;
	volatile int64_t t163 = 3434644126696LL;

    t163 = (x721^(x722>(x723+x724)));

    if (t163 != -14726201132271LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x725 = 19;
	int8_t x726 = INT8_MIN;
	static volatile uint16_t x727 = UINT16_MAX;
	uint32_t x728 = UINT32_MAX;

    t164 = (x725^(x726>(x727+x728)));

    if (t164 != 18) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x729 = -527;
	volatile uint32_t x730 = 4U;
	volatile int32_t t165 = 250;

    t165 = (x729^(x730>(x731+x732)));

    if (t165 != -527) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x738 = 1;
	static int16_t x739 = INT16_MIN;
	static volatile int32_t x740 = -10;
	int32_t t166 = -2589863;

    t166 = (x737^(x738>(x739+x740)));

    if (t166 != 6) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x745 = INT16_MIN;
	int64_t x746 = -1LL;
	volatile int32_t x747 = -1;
	int32_t t167 = 2494087;

    t167 = (x745^(x746>(x747+x748)));

    if (t167 != -32768) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x749 = -8215LL;
	static int16_t x750 = INT16_MAX;
	int8_t x751 = 15;
	int16_t x752 = INT16_MIN;
	int64_t t168 = -23063773LL;

    t168 = (x749^(x750>(x751+x752)));

    if (t168 != -8216LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x758 = INT8_MIN;
	int8_t x760 = INT8_MAX;
	static uint32_t t169 = UINT32_MAX;

    t169 = (x757^(x758>(x759+x760)));

    if (t169 != UINT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x761 = INT8_MAX;
	int32_t x762 = INT32_MAX;
	uint64_t x763 = UINT64_MAX;
	int32_t t170 = -9500;

    t170 = (x761^(x762>(x763+x764)));

    if (t170 != 126) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x765 = INT8_MIN;
	int8_t x766 = INT8_MIN;
	int32_t x767 = INT32_MIN;
	static uint32_t x768 = 40U;
	volatile int32_t t171 = 7;

    t171 = (x765^(x766>(x767+x768)));

    if (t171 != -127) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x773 = 16U;
	static volatile int64_t x774 = 13472917LL;
	static int32_t x775 = 179;
	volatile uint64_t x776 = 72LLU;
	int32_t t172 = 2732173;

    t172 = (x773^(x774>(x775+x776)));

    if (t172 != 17) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x777 = INT32_MIN;
	volatile int64_t x778 = 52520471157973LL;
	volatile uint64_t x779 = 37313284873235187LLU;
	volatile int32_t x780 = INT32_MIN;

    t173 = (x777^(x778>(x779+x780)));

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint64_t x781 = 0LLU;
	uint8_t x782 = UINT8_MAX;
	int8_t x783 = INT8_MAX;
	uint32_t x784 = 98U;
	volatile uint64_t t174 = 39269350440LLU;

    t174 = (x781^(x782>(x783+x784)));

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x785 = INT8_MIN;
	uint64_t x786 = 62791LLU;
	uint8_t x787 = 24U;
	static int32_t x788 = -1;
	static volatile int32_t t175 = 42;

    t175 = (x785^(x786>(x787+x788)));

    if (t175 != -127) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x789 = UINT16_MAX;
	uint32_t x790 = 13U;
	volatile int32_t t176 = 3845709;

    t176 = (x789^(x790>(x791+x792)));

    if (t176 != 65535) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x793 = 8U;
	volatile int16_t x794 = INT16_MIN;
	uint16_t x795 = UINT16_MAX;
	static int32_t t177 = -2;

    t177 = (x793^(x794>(x795+x796)));

    if (t177 != 9) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x797 = INT64_MIN;
	volatile int8_t x798 = 1;
	int8_t x799 = INT8_MIN;
	static volatile int8_t x800 = INT8_MIN;
	volatile int64_t t178 = 56934LL;

    t178 = (x797^(x798>(x799+x800)));

    if (t178 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x801 = -330596614;
	static uint64_t x802 = 199618577560567203LLU;
	static uint8_t x803 = 15U;
	uint8_t x804 = 14U;
	volatile int32_t t179 = -4052389;

    t179 = (x801^(x802>(x803+x804)));

    if (t179 != -330596613) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x805 = UINT16_MAX;
	uint16_t x806 = 0U;
	volatile int64_t x807 = INT64_MIN;
	uint64_t x808 = 3907364343901LLU;
	int32_t t180 = -74501160;

    t180 = (x805^(x806>(x807+x808)));

    if (t180 != 65535) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x809 = -1;
	int64_t x810 = INT64_MIN;
	volatile uint64_t x811 = 59210LLU;
	static int32_t x812 = INT32_MIN;
	volatile int32_t t181 = 15781966;

    t181 = (x809^(x810>(x811+x812)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x813 = INT16_MIN;
	volatile int64_t x814 = INT64_MAX;
	volatile int64_t x815 = 1508041077380333591LL;
	int32_t t182 = 45335;

    t182 = (x813^(x814>(x815+x816)));

    if (t182 != -32767) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x817 = INT32_MAX;
	volatile uint64_t x818 = 1763149822329109LLU;
	int16_t x819 = -1;
	volatile uint16_t x820 = UINT16_MAX;
	int32_t t183 = 445541909;

    t183 = (x817^(x818>(x819+x820)));

    if (t183 != 2147483646) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x822 = INT16_MIN;
	int16_t x824 = -1;
	int32_t t184 = -859146;

    t184 = (x821^(x822>(x823+x824)));

    if (t184 != 32767) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x825 = 3344071664LLU;
	volatile int8_t x826 = INT8_MIN;
	uint32_t x827 = 1510U;
	volatile int16_t x828 = INT16_MAX;
	volatile uint64_t t185 = 260221441LLU;

    t185 = (x825^(x826>(x827+x828)));

    if (t185 != 3344071665LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static volatile uint16_t x833 = 11U;
	static uint8_t x834 = 26U;
	uint16_t x836 = UINT16_MAX;
	volatile int32_t t186 = -241;

    t186 = (x833^(x834>(x835+x836)));

    if (t186 != 11) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint64_t x838 = 106LLU;
	uint8_t x839 = 20U;
	uint16_t x840 = UINT16_MAX;
	uint64_t t187 = 238214188318971352LLU;

    t187 = (x837^(x838>(x839+x840)));

    if (t187 != 7925811734198LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x841 = INT32_MAX;
	int8_t x842 = INT8_MIN;
	int32_t x843 = 146941;
	static volatile int32_t t188 = INT32_MAX;

    t188 = (x841^(x842>(x843+x844)));

    if (t188 != INT32_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x845 = INT16_MIN;
	static uint64_t x846 = 1239131940LLU;
	int16_t x847 = -48;
	static int32_t t189 = 8616494;

    t189 = (x845^(x846>(x847+x848)));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x849 = 7283065403466996LLU;
	static uint64_t x850 = 46055682672677541LLU;
	volatile int16_t x851 = 5245;
	int16_t x852 = 269;

    t190 = (x849^(x850>(x851+x852)));

    if (t190 != 7283065403466997LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint16_t x855 = UINT16_MAX;
	uint16_t x856 = 145U;
	uint32_t t191 = 101839U;

    t191 = (x853^(x854>(x855+x856)));

    if (t191 != 1454189U) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x857 = -1;
	int64_t x858 = 1206854749358329LL;
	volatile int32_t t192 = 9109;

    t192 = (x857^(x858>(x859+x860)));

    if (t192 != -2) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x861 = -34LL;
	volatile int64_t x862 = INT64_MIN;
	volatile int8_t x864 = -1;
	static volatile int64_t t193 = -8553LL;

    t193 = (x861^(x862>(x863+x864)));

    if (t193 != -33LL) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x865 = 8U;
	int16_t x866 = 7;
	int8_t x867 = -6;
	volatile int8_t x868 = INT8_MIN;
	int32_t t194 = -921566805;

    t194 = (x865^(x866>(x867+x868)));

    if (t194 != 9) { NG(); } else { ; }
	
}

void f195(void) {
    	static int64_t x869 = 1LL;
	int16_t x870 = -12;
	uint32_t x871 = UINT32_MAX;
	int64_t t195 = -157957827LL;

    t195 = (x869^(x870>(x871+x872)));

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x873 = 90U;
	static volatile int64_t x874 = INT64_MIN;
	volatile uint32_t x875 = 65825786U;
	static volatile int32_t x876 = INT32_MIN;
	volatile int32_t t196 = -14;

    t196 = (x873^(x874>(x875+x876)));

    if (t196 != 90) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x877 = 3131351334633LLU;
	static volatile uint8_t x878 = 0U;
	volatile int32_t x879 = INT32_MIN;
	int8_t x880 = 1;
	uint64_t t197 = 65058746781420LLU;

    t197 = (x877^(x878>(x879+x880)));

    if (t197 != 3131351334632LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x881 = 1;
	volatile uint64_t x883 = 365175LLU;
	int32_t t198 = 31;

    t198 = (x881^(x882>(x883+x884)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x889 = INT32_MIN;
	int8_t x890 = 0;
	int16_t x892 = INT16_MAX;

    t199 = (x889^(x890>(x891+x892)));

    if (t199 != INT32_MIN) { NG(); } else { ; }
	
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

