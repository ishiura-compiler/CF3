
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

uint16_t x9 = UINT16_MAX;
int32_t t1 = 0;
volatile uint8_t x23 = UINT8_MAX;
volatile int32_t t3 = -5438496;
int64_t x40 = INT64_MAX;
int64_t x42 = 226274296566LL;
volatile uint64_t x44 = 132305287894718LLU;
int64_t x55 = -1LL;
int64_t x56 = INT64_MIN;
int32_t t9 = 33;
int8_t x72 = INT8_MIN;
int16_t x76 = INT16_MIN;
static int32_t t12 = -4167203;
volatile int64_t x83 = -121942306929LL;
int64_t x84 = INT64_MIN;
uint32_t x91 = 7659386U;
static uint8_t x94 = 6U;
volatile int32_t t16 = -351;
static int64_t x104 = INT64_MIN;
int32_t t19 = 1510;
int8_t x128 = -2;
uint16_t x132 = 379U;
int32_t x148 = INT32_MAX;
uint32_t x161 = 962U;
uint8_t x170 = UINT8_MAX;
int32_t x185 = -23599;
static volatile int32_t t34 = 1546;
static volatile uint16_t x193 = UINT16_MAX;
int32_t x197 = -4243701;
int32_t x201 = 52009447;
static int64_t x206 = INT64_MIN;
uint16_t x228 = UINT16_MAX;
int32_t t41 = 0;
static uint32_t x231 = 15U;
static volatile int32_t t43 = -6815817;
volatile int32_t x249 = -1;
uint64_t x250 = 1533490127712750LLU;
int16_t x264 = INT16_MAX;
int32_t t48 = 106015664;
volatile int32_t t49 = -10160;
static volatile int32_t x274 = INT32_MAX;
volatile uint16_t x275 = UINT16_MAX;
int32_t t50 = 2504;
int32_t x277 = INT32_MIN;
int16_t x278 = 1;
int32_t t51 = -604609;
int16_t x288 = INT16_MIN;
int32_t x297 = -780;
volatile int32_t t53 = 15985529;
int64_t x305 = 111332LL;
int32_t x313 = INT32_MAX;
volatile uint64_t x319 = 4555212884258LLU;
static uint16_t x323 = 87U;
int32_t x339 = 99;
uint16_t x348 = 127U;
volatile int32_t t64 = -2275;
uint16_t x365 = UINT16_MAX;
volatile int64_t x366 = -1LL;
uint16_t x378 = UINT16_MAX;
uint64_t x379 = 12979207LLU;
volatile int64_t x384 = INT64_MAX;
static int32_t x390 = INT32_MAX;
volatile uint32_t x391 = 515495931U;
int64_t x393 = INT64_MIN;
uint64_t x394 = 5445476732LLU;
static int16_t x409 = INT16_MAX;
int8_t x412 = INT8_MIN;
volatile int32_t x419 = 101243;
volatile int32_t t74 = -2049334;
uint8_t x422 = 8U;
static uint32_t x424 = 2715U;
uint8_t x428 = UINT8_MAX;
static int32_t t76 = -5779;
volatile int8_t x434 = 1;
static uint32_t x437 = 655335579U;
uint16_t x446 = UINT16_MAX;
int64_t x450 = -1LL;
static volatile uint64_t x453 = 926589763217177LLU;
int64_t x454 = INT64_MIN;
static int64_t x468 = INT64_MIN;
static volatile int32_t t84 = 75858880;
uint64_t x471 = 2898683689949LLU;
int8_t x472 = INT8_MIN;
static volatile int16_t x473 = 1552;
int32_t x479 = INT32_MAX;
int32_t t87 = 432522;
uint32_t x500 = 9980U;
uint16_t x505 = UINT16_MAX;
int8_t x508 = -14;
static int8_t x512 = INT8_MAX;
volatile int32_t t91 = -4331;
static int32_t x537 = -1;
static int32_t x542 = INT32_MIN;
int16_t x544 = INT16_MIN;
static volatile int32_t t96 = 29960;
int32_t x554 = 91842;
int64_t x570 = INT64_MAX;
static int32_t x575 = INT32_MIN;
int16_t x580 = INT16_MIN;
volatile int16_t x583 = INT16_MAX;
int32_t x584 = INT32_MIN;
int32_t t104 = -138666325;
int8_t x588 = INT8_MAX;
volatile int64_t x600 = INT64_MAX;
static uint8_t x606 = 61U;
int32_t t110 = 2;
volatile int32_t t111 = -5926592;
volatile int32_t t113 = 5648;
int32_t x642 = INT32_MIN;
volatile int32_t t114 = -2280733;
int64_t x648 = INT64_MIN;
volatile int16_t x658 = 641;
volatile int16_t x661 = -1;
static int16_t x666 = INT16_MIN;
static int32_t t119 = 476;
static int8_t x682 = 25;
volatile int64_t x697 = INT64_MAX;
int32_t x700 = 2810620;
uint32_t x701 = 25567626U;
static int32_t t124 = -1103206;
static uint64_t x713 = UINT64_MAX;
int32_t x716 = 3003172;
int32_t x726 = INT32_MIN;
volatile int8_t x729 = -1;
int32_t x731 = INT32_MIN;
static int8_t x746 = -1;
static uint64_t x751 = 1744740324016LLU;
static int32_t x758 = INT32_MAX;
uint16_t x760 = 2525U;
int16_t x763 = INT16_MIN;
int32_t t136 = 11;
uint64_t x765 = UINT64_MAX;
uint32_t x767 = 14432U;
int64_t x772 = INT64_MAX;
volatile int64_t x773 = INT64_MIN;
uint64_t x775 = 120800168088LLU;
static int32_t t139 = -1205633;
int16_t x785 = -1;
int8_t x792 = INT8_MIN;
int32_t x793 = INT32_MIN;
int8_t x802 = INT8_MIN;
int32_t t144 = -199214210;
int8_t x814 = 5;
volatile int32_t t146 = 210954376;
uint16_t x817 = UINT16_MAX;
static uint8_t x844 = UINT8_MAX;
int64_t x845 = INT64_MAX;
int32_t x854 = INT32_MIN;
int32_t x865 = -1;
volatile int32_t t152 = 0;
int16_t x878 = 1;
uint8_t x881 = UINT8_MAX;
int8_t x882 = -14;
int8_t x892 = INT8_MIN;
uint8_t x907 = 1U;
static volatile uint32_t x909 = 171964U;
int8_t x910 = -1;
int8_t x911 = 2;
int32_t x913 = 5721;
int64_t x917 = -1490LL;
int16_t x919 = -1;
int16_t x926 = INT16_MIN;
static uint32_t x937 = 7U;
volatile uint16_t x939 = 58U;
int32_t t166 = 125;
int8_t x977 = INT8_MIN;
int8_t x986 = INT8_MIN;
volatile int32_t t169 = -74;
uint32_t x992 = 35U;
static volatile int8_t x994 = 2;
volatile int32_t x1006 = INT32_MIN;
int32_t x1008 = INT32_MAX;
uint32_t x1022 = 552228644U;
static int64_t x1023 = INT64_MIN;
int16_t x1034 = -2974;
int32_t t176 = -3;
static volatile int32_t t177 = -216580143;
int8_t x1054 = INT8_MAX;
static int8_t x1057 = -1;
volatile int32_t x1061 = -1273179;
int64_t x1062 = INT64_MIN;
uint64_t x1063 = UINT64_MAX;
uint8_t x1064 = 8U;
int64_t x1065 = INT64_MIN;
int16_t x1066 = INT16_MIN;
uint32_t x1071 = 356193240U;
int32_t t183 = 1841165;
int32_t x1076 = 2047932;
volatile int32_t t184 = 1;
static int16_t x1082 = -3066;
int64_t x1084 = -3044825544817487LL;
uint64_t x1087 = 21335283213905955LLU;
int64_t x1088 = -191731650LL;
uint32_t x1093 = 101U;
int64_t x1111 = INT64_MIN;
int32_t t193 = 703334;
uint64_t x1121 = 74198533450LLU;
uint64_t x1123 = UINT64_MAX;
volatile uint32_t x1134 = UINT32_MAX;
volatile int8_t x1145 = INT8_MIN;
static int8_t x1146 = INT8_MAX;
uint64_t x1148 = 5148308488340LLU;
static int16_t x1153 = -1;
static int8_t x1155 = INT8_MIN;


void f0(void) {
    	int16_t x10 = INT16_MIN;
	volatile int8_t x11 = INT8_MAX;
	volatile int16_t x12 = INT16_MAX;
	static int32_t t0 = -14065;

    t0 = (x9==(x10%(x11%x12)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x13 = 3501564516LL;
	uint32_t x14 = 4326U;
	volatile int64_t x15 = -1LL;
	int16_t x16 = INT16_MAX;

    t1 = (x13==(x14%(x15%x16)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MIN;
	int32_t x19 = -1;
	uint32_t x20 = 266728810U;
	volatile int32_t t2 = -15461;

    t2 = (x17==(x18%(x19%x20)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint8_t x21 = UINT8_MAX;
	volatile int8_t x22 = INT8_MIN;
	int32_t x24 = -591777050;

    t3 = (x21==(x22%(x23%x24)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint16_t x29 = 18898U;
	static uint16_t x30 = 5U;
	volatile int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MAX;
	int32_t t4 = -259610;

    t4 = (x29==(x30%(x31%x32)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x33 = 668827253556126LLU;
	int64_t x34 = -27869343620422669LL;
	uint8_t x35 = 9U;
	static volatile int64_t x36 = INT64_MIN;
	int32_t t5 = -635;

    t5 = (x33==(x34%(x35%x36)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x37 = -225;
	static int64_t x38 = INT64_MIN;
	int16_t x39 = INT16_MIN;
	volatile int32_t t6 = -919;

    t6 = (x37==(x38%(x39%x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x41 = INT32_MIN;
	int16_t x43 = 15236;
	volatile int32_t t7 = -10981;

    t7 = (x41==(x42%(x43%x44)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x45 = 0U;
	int8_t x46 = 1;
	int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MAX;
	int32_t t8 = -848903601;

    t8 = (x45==(x46%(x47%x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x53 = 61;
	static int32_t x54 = INT32_MAX;

    t9 = (x53==(x54%(x55%x56)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int64_t x65 = INT64_MAX;
	static uint8_t x66 = 1U;
	int8_t x67 = 3;
	int32_t x68 = -103471829;
	volatile int32_t t10 = 74;

    t10 = (x65==(x66%(x67%x68)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x69 = 22557U;
	static int16_t x70 = INT16_MIN;
	static uint64_t x71 = 69LLU;
	int32_t t11 = 368384722;

    t11 = (x69==(x70%(x71%x72)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x73 = UINT32_MAX;
	int32_t x74 = -1;
	static volatile uint64_t x75 = UINT64_MAX;

    t12 = (x73==(x74%(x75%x76)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint16_t x81 = UINT16_MAX;
	static int16_t x82 = INT16_MAX;
	int32_t t13 = -669730045;

    t13 = (x81==(x82%(x83%x84)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x85 = 161U;
	int8_t x86 = INT8_MIN;
	int64_t x87 = -1LL;
	int32_t x88 = 14604;
	volatile int32_t t14 = 99;

    t14 = (x85==(x86%(x87%x88)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x89 = 96957LL;
	int16_t x90 = 108;
	volatile uint16_t x92 = 217U;
	int32_t t15 = -10;

    t15 = (x89==(x90%(x91%x92)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x93 = INT8_MIN;
	uint8_t x95 = 38U;
	volatile uint16_t x96 = 782U;

    t16 = (x93==(x94%(x95%x96)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x101 = INT16_MAX;
	int16_t x102 = -57;
	volatile int16_t x103 = INT16_MAX;
	int32_t t17 = -1337116;

    t17 = (x101==(x102%(x103%x104)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x105 = UINT32_MAX;
	static uint8_t x106 = 13U;
	static int8_t x107 = 2;
	int64_t x108 = INT64_MIN;
	volatile int32_t t18 = -24816;

    t18 = (x105==(x106%(x107%x108)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x109 = INT16_MIN;
	int16_t x110 = 946;
	static uint32_t x111 = 39173446U;
	int8_t x112 = INT8_MAX;

    t19 = (x109==(x110%(x111%x112)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x113 = INT16_MAX;
	int8_t x114 = -1;
	uint8_t x115 = 2U;
	uint16_t x116 = 38U;
	static volatile int32_t t20 = -7926425;

    t20 = (x113==(x114%(x115%x116)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x125 = -1LL;
	int16_t x126 = -1;
	int64_t x127 = -1LL;
	int32_t t21 = -2;

    t21 = (x125==(x126%(x127%x128)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x129 = 374331LLU;
	int32_t x130 = INT32_MIN;
	static uint64_t x131 = UINT64_MAX;
	int32_t t22 = 1330;

    t22 = (x129==(x130%(x131%x132)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x133 = 3U;
	int64_t x134 = INT64_MIN;
	static uint64_t x135 = UINT64_MAX;
	static int8_t x136 = INT8_MAX;
	int32_t t23 = -4029;

    t23 = (x133==(x134%(x135%x136)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x141 = 51U;
	int16_t x142 = -1;
	static int8_t x143 = INT8_MAX;
	int32_t x144 = INT32_MIN;
	int32_t t24 = -24456;

    t24 = (x141==(x142%(x143%x144)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MIN;
	uint16_t x147 = 457U;
	volatile int32_t t25 = 948902302;

    t25 = (x145==(x146%(x147%x148)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x149 = INT32_MAX;
	uint64_t x150 = UINT64_MAX;
	int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MIN;
	volatile int32_t t26 = -3394792;

    t26 = (x149==(x150%(x151%x152)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x153 = 34;
	int64_t x154 = INT64_MIN;
	int32_t x155 = -51;
	static uint64_t x156 = 8129517524129379946LLU;
	int32_t t27 = 0;

    t27 = (x153==(x154%(x155%x156)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x157 = INT32_MIN;
	static volatile int16_t x158 = 1;
	volatile int32_t x159 = -1;
	uint8_t x160 = UINT8_MAX;
	int32_t t28 = 11;

    t28 = (x157==(x158%(x159%x160)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x162 = -1LL;
	uint16_t x163 = UINT16_MAX;
	volatile int16_t x164 = INT16_MIN;
	int32_t t29 = 2411;

    t29 = (x161==(x162%(x163%x164)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x165 = INT64_MAX;
	uint8_t x166 = UINT8_MAX;
	int16_t x167 = -1;
	static int16_t x168 = -6785;
	volatile int32_t t30 = 15;

    t30 = (x165==(x166%(x167%x168)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x169 = 618;
	uint32_t x171 = UINT32_MAX;
	int64_t x172 = INT64_MAX;
	int32_t t31 = 145;

    t31 = (x169==(x170%(x171%x172)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x173 = 427U;
	int8_t x174 = INT8_MIN;
	int8_t x175 = -1;
	volatile int16_t x176 = -248;
	int32_t t32 = 417111730;

    t32 = (x173==(x174%(x175%x176)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint8_t x181 = 66U;
	int16_t x182 = 1965;
	volatile uint8_t x183 = 6U;
	uint64_t x184 = 73194850543LLU;
	int32_t t33 = -1065575983;

    t33 = (x181==(x182%(x183%x184)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x186 = -49600943731407LL;
	int64_t x187 = -791268429766LL;
	static uint64_t x188 = 8010517597379708LLU;

    t34 = (x185==(x186%(x187%x188)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x189 = INT16_MAX;
	static uint32_t x190 = 1U;
	static uint8_t x191 = 21U;
	int8_t x192 = 19;
	volatile int32_t t35 = 126;

    t35 = (x189==(x190%(x191%x192)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x194 = INT64_MIN;
	uint32_t x195 = 59U;
	volatile int8_t x196 = INT8_MIN;
	volatile int32_t t36 = 205;

    t36 = (x193==(x194%(x195%x196)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint32_t x198 = 13U;
	int16_t x199 = 3;
	int64_t x200 = INT64_MIN;
	volatile int32_t t37 = 1;

    t37 = (x197==(x198%(x199%x200)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x202 = 23;
	static int16_t x203 = INT16_MIN;
	static uint64_t x204 = 147273057141LLU;
	volatile int32_t t38 = -6080;

    t38 = (x201==(x202%(x203%x204)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x205 = -1877669656251103526LL;
	uint32_t x207 = 1U;
	static volatile int32_t x208 = -1;
	int32_t t39 = 8210428;

    t39 = (x205==(x206%(x207%x208)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x217 = INT16_MIN;
	uint16_t x218 = 268U;
	int16_t x219 = INT16_MIN;
	uint16_t x220 = 17735U;
	int32_t t40 = 94450049;

    t40 = (x217==(x218%(x219%x220)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x225 = -1;
	uint64_t x226 = 571985953LLU;
	int64_t x227 = 5864506LL;

    t41 = (x225==(x226%(x227%x228)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x229 = INT8_MAX;
	int16_t x230 = INT16_MAX;
	int16_t x232 = 899;
	volatile int32_t t42 = 387;

    t42 = (x229==(x230%(x231%x232)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint32_t x241 = 486U;
	static int64_t x242 = -1LL;
	int16_t x243 = -1;
	int64_t x244 = INT64_MIN;

    t43 = (x241==(x242%(x243%x244)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x251 = INT64_MAX;
	uint16_t x252 = 23U;
	int32_t t44 = -15884;

    t44 = (x249==(x250%(x251%x252)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x253 = INT8_MIN;
	int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	int16_t x256 = -3;
	int32_t t45 = 12009;

    t45 = (x253==(x254%(x255%x256)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x257 = INT32_MIN;
	static int64_t x258 = INT64_MAX;
	uint16_t x259 = 2U;
	int32_t x260 = -26;
	int32_t t46 = 23;

    t46 = (x257==(x258%(x259%x260)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x261 = UINT16_MAX;
	volatile int32_t x262 = 262;
	uint16_t x263 = UINT16_MAX;
	volatile int32_t t47 = -1;

    t47 = (x261==(x262%(x263%x264)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x265 = 225U;
	int8_t x266 = -2;
	static uint8_t x267 = 61U;
	static int8_t x268 = INT8_MIN;

    t48 = (x265==(x266%(x267%x268)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x269 = 391877215LLU;
	uint64_t x270 = 134LLU;
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = INT64_MIN;

    t49 = (x269==(x270%(x271%x272)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x273 = 4414127U;
	int16_t x276 = INT16_MAX;

    t50 = (x273==(x274%(x275%x276)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x279 = INT8_MAX;
	uint64_t x280 = 2217336533290679685LLU;

    t51 = (x277==(x278%(x279%x280)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x285 = INT16_MIN;
	volatile int16_t x286 = INT16_MIN;
	uint64_t x287 = 844197LLU;
	volatile int32_t t52 = 182547;

    t52 = (x285==(x286%(x287%x288)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x298 = 29;
	volatile int8_t x299 = 1;
	static int8_t x300 = INT8_MIN;

    t53 = (x297==(x298%(x299%x300)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x306 = INT16_MAX;
	int16_t x307 = INT16_MIN;
	int64_t x308 = INT64_MIN;
	static int32_t t54 = 31474308;

    t54 = (x305==(x306%(x307%x308)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x309 = -2152301LL;
	uint32_t x310 = 82U;
	static int16_t x311 = INT16_MIN;
	static uint64_t x312 = 6LLU;
	int32_t t55 = -68;

    t55 = (x309==(x310%(x311%x312)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	volatile int16_t x316 = INT16_MAX;
	int32_t t56 = 10259799;

    t56 = (x313==(x314%(x315%x316)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x317 = UINT32_MAX;
	uint16_t x318 = UINT16_MAX;
	uint32_t x320 = UINT32_MAX;
	int32_t t57 = 964;

    t57 = (x317==(x318%(x319%x320)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MIN;
	static volatile int32_t x324 = INT32_MIN;
	volatile int32_t t58 = -214;

    t58 = (x321==(x322%(x323%x324)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int8_t x325 = -1;
	uint8_t x326 = 2U;
	uint64_t x327 = 209263801798265LLU;
	int16_t x328 = 6764;
	volatile int32_t t59 = -17530505;

    t59 = (x325==(x326%(x327%x328)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x337 = 31;
	uint64_t x338 = UINT64_MAX;
	uint16_t x340 = UINT16_MAX;
	static int32_t t60 = 2;

    t60 = (x337==(x338%(x339%x340)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x341 = INT64_MAX;
	static int16_t x342 = INT16_MIN;
	int16_t x343 = INT16_MAX;
	uint64_t x344 = 448428390697LLU;
	volatile int32_t t61 = -14;

    t61 = (x341==(x342%(x343%x344)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x345 = 143LL;
	uint8_t x346 = 7U;
	uint8_t x347 = 2U;
	int32_t t62 = -222;

    t62 = (x345==(x346%(x347%x348)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint32_t x349 = 1U;
	uint64_t x350 = 745874869966467LLU;
	int16_t x351 = INT16_MIN;
	int8_t x352 = INT8_MAX;
	static int32_t t63 = 1;

    t63 = (x349==(x350%(x351%x352)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x357 = 28363U;
	uint16_t x358 = 4622U;
	int64_t x359 = -1LL;
	static uint8_t x360 = 6U;

    t64 = (x357==(x358%(x359%x360)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x367 = UINT16_MAX;
	int32_t x368 = INT32_MAX;
	volatile int32_t t65 = 334;

    t65 = (x365==(x366%(x367%x368)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x373 = INT32_MIN;
	static uint8_t x374 = 55U;
	uint64_t x375 = UINT64_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t66 = -1573750;

    t66 = (x373==(x374%(x375%x376)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x377 = INT16_MAX;
	int32_t x380 = INT32_MIN;
	int32_t t67 = 86;

    t67 = (x377==(x378%(x379%x380)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int64_t x381 = -7896LL;
	int8_t x382 = INT8_MIN;
	int32_t x383 = 6762;
	volatile int32_t t68 = 96878447;

    t68 = (x381==(x382%(x383%x384)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x385 = INT32_MIN;
	uint16_t x386 = 86U;
	int32_t x387 = INT32_MIN;
	volatile int64_t x388 = INT64_MAX;
	int32_t t69 = -13;

    t69 = (x385==(x386%(x387%x388)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x389 = -1;
	static int32_t x392 = 612;
	volatile int32_t t70 = -3;

    t70 = (x389==(x390%(x391%x392)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x395 = 1550U;
	int64_t x396 = INT64_MIN;
	int32_t t71 = 24;

    t71 = (x393==(x394%(x395%x396)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x401 = -17;
	volatile int8_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	volatile int8_t x404 = INT8_MIN;
	volatile int32_t t72 = -67028134;

    t72 = (x401==(x402%(x403%x404)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x410 = 62856LL;
	int32_t x411 = -1903;
	volatile int32_t t73 = -3800;

    t73 = (x409==(x410%(x411%x412)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x417 = INT64_MIN;
	uint16_t x418 = 133U;
	volatile int8_t x420 = -12;

    t74 = (x417==(x418%(x419%x420)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x421 = -1;
	int64_t x423 = 2LL;
	int32_t t75 = 6;

    t75 = (x421==(x422%(x423%x424)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x425 = 1;
	static int16_t x426 = INT16_MIN;
	static int64_t x427 = -1LL;

    t76 = (x425==(x426%(x427%x428)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x429 = -3;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = 155619LLU;
	int32_t x432 = 1604764;
	static volatile int32_t t77 = -63277965;

    t77 = (x429==(x430%(x431%x432)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x433 = 617802LL;
	volatile int16_t x435 = INT16_MAX;
	static volatile int32_t x436 = INT32_MIN;
	static volatile int32_t t78 = 810476260;

    t78 = (x433==(x434%(x435%x436)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x438 = 56U;
	volatile uint32_t x439 = 3483001U;
	static int64_t x440 = INT64_MIN;
	int32_t t79 = -63;

    t79 = (x437==(x438%(x439%x440)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint32_t x445 = UINT32_MAX;
	int16_t x447 = INT16_MIN;
	uint16_t x448 = 802U;
	int32_t t80 = 1225123;

    t80 = (x445==(x446%(x447%x448)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x449 = INT32_MIN;
	int8_t x451 = -1;
	uint8_t x452 = 2U;
	volatile int32_t t81 = 0;

    t81 = (x449==(x450%(x451%x452)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x455 = 7815599U;
	static uint8_t x456 = 48U;
	volatile int32_t t82 = 0;

    t82 = (x453==(x454%(x455%x456)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int16_t x457 = INT16_MAX;
	int64_t x458 = 2648602169356LL;
	int64_t x459 = 4203335325006184LL;
	volatile uint64_t x460 = 46133568LLU;
	static int32_t t83 = -78461258;

    t83 = (x457==(x458%(x459%x460)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x465 = 295347102202756179LLU;
	int8_t x466 = -1;
	static int16_t x467 = -150;

    t84 = (x465==(x466%(x467%x468)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static int16_t x469 = -6;
	int16_t x470 = INT16_MAX;
	volatile int32_t t85 = 0;

    t85 = (x469==(x470%(x471%x472)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int32_t x474 = 0;
	uint8_t x475 = UINT8_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t86 = 26;

    t86 = (x473==(x474%(x475%x476)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x477 = -86807939509LL;
	volatile int32_t x478 = -1;
	uint64_t x480 = 1257471573086708881LLU;

    t87 = (x477==(x478%(x479%x480)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint8_t x489 = 0U;
	int32_t x490 = 129332460;
	volatile int16_t x491 = INT16_MAX;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t88 = -50;

    t88 = (x489==(x490%(x491%x492)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x497 = 355255198364980LLU;
	volatile uint64_t x498 = UINT64_MAX;
	uint32_t x499 = 2392U;
	volatile int32_t t89 = -1;

    t89 = (x497==(x498%(x499%x500)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint16_t x506 = 32U;
	int32_t x507 = -1;
	volatile int32_t t90 = 128186313;

    t90 = (x505==(x506%(x507%x508)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static int16_t x509 = 853;
	int32_t x510 = -1;
	volatile int16_t x511 = INT16_MAX;

    t91 = (x509==(x510%(x511%x512)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x513 = -10451;
	int64_t x514 = INT64_MAX;
	int32_t x515 = INT32_MAX;
	volatile int8_t x516 = INT8_MIN;
	volatile int32_t t92 = 53243210;

    t92 = (x513==(x514%(x515%x516)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint8_t x529 = 3U;
	int32_t x530 = INT32_MIN;
	int16_t x531 = INT16_MIN;
	int16_t x532 = -1263;
	static volatile int32_t t93 = -2;

    t93 = (x529==(x530%(x531%x532)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x533 = -15485;
	int64_t x534 = 39340522874298LL;
	uint16_t x535 = UINT16_MAX;
	static uint8_t x536 = 12U;
	int32_t t94 = 3;

    t94 = (x533==(x534%(x535%x536)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int32_t x538 = 1796450;
	static int64_t x539 = 1772958433342974062LL;
	static int64_t x540 = INT64_MIN;
	int32_t t95 = -14347;

    t95 = (x537==(x538%(x539%x540)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x541 = INT32_MIN;
	int8_t x543 = -1;

    t96 = (x541==(x542%(x543%x544)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x549 = 937744347;
	uint8_t x550 = UINT8_MAX;
	static uint16_t x551 = 174U;
	uint32_t x552 = 1368587670U;
	int32_t t97 = -32189732;

    t97 = (x549==(x550%(x551%x552)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x553 = INT16_MIN;
	int8_t x555 = INT8_MIN;
	volatile uint8_t x556 = UINT8_MAX;
	volatile int32_t t98 = 33455622;

    t98 = (x553==(x554%(x555%x556)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x557 = INT8_MIN;
	int8_t x558 = INT8_MIN;
	int16_t x559 = INT16_MAX;
	int8_t x560 = INT8_MAX;
	int32_t t99 = -3;

    t99 = (x557==(x558%(x559%x560)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile int16_t x565 = -1;
	uint64_t x566 = UINT64_MAX;
	volatile uint64_t x567 = UINT64_MAX;
	volatile int16_t x568 = INT16_MIN;
	static volatile int32_t t100 = 34184;

    t100 = (x565==(x566%(x567%x568)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x569 = -1;
	int32_t x571 = 13;
	uint64_t x572 = 1098097937678LLU;
	volatile int32_t t101 = 60;

    t101 = (x569==(x570%(x571%x572)));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x573 = INT32_MIN;
	static uint64_t x574 = 476268LLU;
	static int32_t x576 = INT32_MAX;
	volatile int32_t t102 = 17458575;

    t102 = (x573==(x574%(x575%x576)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x577 = INT64_MIN;
	uint64_t x578 = UINT64_MAX;
	uint64_t x579 = 15341319586239112LLU;
	int32_t t103 = 867708319;

    t103 = (x577==(x578%(x579%x580)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x581 = 93U;
	static int32_t x582 = INT32_MAX;

    t104 = (x581==(x582%(x583%x584)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x585 = INT16_MIN;
	uint64_t x586 = 1741532332756LLU;
	int8_t x587 = -1;
	int32_t t105 = 66118;

    t105 = (x585==(x586%(x587%x588)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x593 = 4;
	static uint8_t x594 = UINT8_MAX;
	uint16_t x595 = 189U;
	uint16_t x596 = 79U;
	static volatile int32_t t106 = 0;

    t106 = (x593==(x594%(x595%x596)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x597 = 1114063960LL;
	uint8_t x598 = UINT8_MAX;
	int8_t x599 = INT8_MIN;
	volatile int32_t t107 = -1;

    t107 = (x597==(x598%(x599%x600)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int32_t x601 = 126720;
	uint8_t x602 = 1U;
	uint64_t x603 = UINT64_MAX;
	uint64_t x604 = 2845886905435LLU;
	static int32_t t108 = -349060462;

    t108 = (x601==(x602%(x603%x604)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x605 = INT16_MIN;
	int16_t x607 = INT16_MAX;
	volatile uint16_t x608 = UINT16_MAX;
	volatile int32_t t109 = 123835;

    t109 = (x605==(x606%(x607%x608)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x609 = 7;
	int8_t x610 = INT8_MIN;
	static uint32_t x611 = 495423U;
	int32_t x612 = -463468456;

    t110 = (x609==(x610%(x611%x612)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x613 = 5LLU;
	volatile uint8_t x614 = 69U;
	static volatile int32_t x615 = -22214746;
	volatile uint64_t x616 = 7LLU;

    t111 = (x613==(x614%(x615%x616)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x621 = UINT32_MAX;
	static volatile uint16_t x622 = UINT16_MAX;
	volatile int16_t x623 = INT16_MAX;
	uint64_t x624 = 235098338127LLU;
	volatile int32_t t112 = 31;

    t112 = (x621==(x622%(x623%x624)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static uint32_t x633 = 28U;
	int16_t x634 = INT16_MAX;
	static volatile int32_t x635 = -1;
	int64_t x636 = INT64_MIN;

    t113 = (x633==(x634%(x635%x636)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x641 = 103U;
	uint64_t x643 = UINT64_MAX;
	int32_t x644 = INT32_MIN;

    t114 = (x641==(x642%(x643%x644)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x645 = 161;
	static int64_t x646 = 2112020821574LL;
	uint32_t x647 = 618241U;
	int32_t t115 = -3485;

    t115 = (x645==(x646%(x647%x648)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x653 = 3310601265247LL;
	static int32_t x654 = INT32_MIN;
	int8_t x655 = INT8_MIN;
	int32_t x656 = INT32_MAX;
	static int32_t t116 = -2622178;

    t116 = (x653==(x654%(x655%x656)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x657 = -9632190;
	volatile int16_t x659 = INT16_MAX;
	uint16_t x660 = 9973U;
	int32_t t117 = 11288;

    t117 = (x657==(x658%(x659%x660)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x662 = 135U;
	int64_t x663 = -1LL;
	int8_t x664 = INT8_MIN;
	static volatile int32_t t118 = -1633615;

    t118 = (x661==(x662%(x663%x664)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x665 = INT32_MIN;
	volatile int16_t x667 = -1;
	int8_t x668 = INT8_MIN;

    t119 = (x665==(x666%(x667%x668)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x681 = INT32_MAX;
	int16_t x683 = 55;
	int16_t x684 = INT16_MAX;
	static volatile int32_t t120 = -11063;

    t120 = (x681==(x682%(x683%x684)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x689 = INT64_MAX;
	uint32_t x690 = 2408U;
	uint32_t x691 = UINT32_MAX;
	int64_t x692 = INT64_MIN;
	int32_t t121 = 1;

    t121 = (x689==(x690%(x691%x692)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x698 = 0U;
	uint32_t x699 = UINT32_MAX;
	volatile int32_t t122 = -8246;

    t122 = (x697==(x698%(x699%x700)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x702 = UINT8_MAX;
	static uint8_t x703 = UINT8_MAX;
	volatile int64_t x704 = INT64_MAX;
	int32_t t123 = 59514;

    t123 = (x701==(x702%(x703%x704)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x705 = 225098U;
	int64_t x706 = INT64_MAX;
	volatile int8_t x707 = INT8_MIN;
	uint16_t x708 = 2905U;

    t124 = (x705==(x706%(x707%x708)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x709 = -105;
	int64_t x710 = -1LL;
	volatile int32_t x711 = 203;
	int32_t x712 = INT32_MAX;
	int32_t t125 = -18118610;

    t125 = (x709==(x710%(x711%x712)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x714 = -1;
	volatile int16_t x715 = INT16_MIN;
	volatile int32_t t126 = -361783093;

    t126 = (x713==(x714%(x715%x716)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x721 = -29204200;
	uint64_t x722 = UINT64_MAX;
	int8_t x723 = INT8_MAX;
	static uint16_t x724 = 488U;
	volatile int32_t t127 = -31;

    t127 = (x721==(x722%(x723%x724)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x725 = INT16_MIN;
	static uint16_t x727 = UINT16_MAX;
	int8_t x728 = INT8_MIN;
	volatile int32_t t128 = 1667606;

    t128 = (x725==(x726%(x727%x728)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x730 = INT32_MIN;
	uint8_t x732 = UINT8_MAX;
	int32_t t129 = -129109207;

    t129 = (x729==(x730%(x731%x732)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x733 = 70U;
	uint32_t x734 = 115U;
	int32_t x735 = -549;
	static int64_t x736 = -5449LL;
	static volatile int32_t t130 = 0;

    t130 = (x733==(x734%(x735%x736)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x737 = UINT16_MAX;
	int8_t x738 = INT8_MAX;
	uint64_t x739 = UINT64_MAX;
	static uint16_t x740 = 11157U;
	static volatile int32_t t131 = -66562;

    t131 = (x737==(x738%(x739%x740)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x745 = INT8_MAX;
	int16_t x747 = -1;
	uint16_t x748 = 190U;
	int32_t t132 = -192263;

    t132 = (x745==(x746%(x747%x748)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x749 = UINT32_MAX;
	static int8_t x750 = INT8_MIN;
	volatile int32_t x752 = 102;
	volatile int32_t t133 = 34;

    t133 = (x749==(x750%(x751%x752)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int32_t x753 = -353161;
	static volatile int16_t x754 = -1;
	uint8_t x755 = UINT8_MAX;
	uint8_t x756 = 11U;
	int32_t t134 = 0;

    t134 = (x753==(x754%(x755%x756)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint8_t x757 = 62U;
	uint8_t x759 = UINT8_MAX;
	volatile int32_t t135 = -50;

    t135 = (x757==(x758%(x759%x760)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x761 = 28;
	volatile uint8_t x762 = 20U;
	uint8_t x764 = 116U;

    t136 = (x761==(x762%(x763%x764)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x766 = INT16_MIN;
	static int32_t x768 = INT32_MAX;
	int32_t t137 = -372127729;

    t137 = (x765==(x766%(x767%x768)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x769 = INT16_MAX;
	int32_t x770 = INT32_MIN;
	int16_t x771 = -1;
	volatile int32_t t138 = -1155249;

    t138 = (x769==(x770%(x771%x772)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x774 = 7677694170095LL;
	int16_t x776 = INT16_MIN;

    t139 = (x773==(x774%(x775%x776)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x786 = -9804;
	static int32_t x787 = INT32_MAX;
	uint16_t x788 = UINT16_MAX;
	volatile int32_t t140 = -220613775;

    t140 = (x785==(x786%(x787%x788)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x789 = -1;
	uint32_t x790 = 104107025U;
	uint64_t x791 = UINT64_MAX;
	static volatile int32_t t141 = 1027144;

    t141 = (x789==(x790%(x791%x792)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x794 = INT16_MIN;
	uint64_t x795 = 2LLU;
	volatile int16_t x796 = INT16_MIN;
	volatile int32_t t142 = -26592;

    t142 = (x793==(x794%(x795%x796)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x801 = 107243613;
	int16_t x803 = 2;
	static int32_t x804 = INT32_MAX;
	int32_t t143 = -40818;

    t143 = (x801==(x802%(x803%x804)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x805 = UINT64_MAX;
	uint32_t x806 = 226U;
	volatile int32_t x807 = -29918135;
	int16_t x808 = INT16_MIN;

    t144 = (x805==(x806%(x807%x808)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x809 = 136565;
	static uint16_t x810 = UINT16_MAX;
	int32_t x811 = -65087;
	uint32_t x812 = 5164U;
	int32_t t145 = -429648;

    t145 = (x809==(x810%(x811%x812)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x813 = INT16_MIN;
	volatile int64_t x815 = -14155778LL;
	int16_t x816 = -4418;

    t146 = (x813==(x814%(x815%x816)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x818 = -22214952809LL;
	static uint8_t x819 = UINT8_MAX;
	static uint32_t x820 = 61U;
	static volatile int32_t t147 = 1;

    t147 = (x817==(x818%(x819%x820)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x821 = INT64_MIN;
	int64_t x822 = 688708906LL;
	int64_t x823 = 24663323970887203LL;
	uint16_t x824 = UINT16_MAX;
	volatile int32_t t148 = 37;

    t148 = (x821==(x822%(x823%x824)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x841 = INT16_MIN;
	int32_t x842 = -1;
	int32_t x843 = -2;
	static volatile int32_t t149 = -50190;

    t149 = (x841==(x842%(x843%x844)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x846 = -546;
	int64_t x847 = INT64_MIN;
	int8_t x848 = 48;
	volatile int32_t t150 = 2272126;

    t150 = (x845==(x846%(x847%x848)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x853 = 346206676U;
	int64_t x855 = INT64_MIN;
	volatile uint64_t x856 = 57123481LLU;
	int32_t t151 = -178319;

    t151 = (x853==(x854%(x855%x856)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x866 = 30525668U;
	static uint8_t x867 = UINT8_MAX;
	volatile uint32_t x868 = 203U;

    t152 = (x865==(x866%(x867%x868)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x873 = UINT8_MAX;
	static int8_t x874 = -6;
	volatile int16_t x875 = -1;
	volatile uint32_t x876 = 131621U;
	int32_t t153 = 952906496;

    t153 = (x873==(x874%(x875%x876)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x877 = 13224;
	int8_t x879 = INT8_MIN;
	static int64_t x880 = INT64_MAX;
	volatile int32_t t154 = 1303440;

    t154 = (x877==(x878%(x879%x880)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static uint64_t x883 = 3739750463442823LLU;
	int32_t x884 = 5;
	volatile int32_t t155 = -39513592;

    t155 = (x881==(x882%(x883%x884)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int8_t x889 = 22;
	uint64_t x890 = 7673417840198605151LLU;
	uint32_t x891 = UINT32_MAX;
	volatile int32_t t156 = -111982;

    t156 = (x889==(x890%(x891%x892)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x905 = INT32_MIN;
	int8_t x906 = INT8_MIN;
	int8_t x908 = -7;
	int32_t t157 = -1;

    t157 = (x905==(x906%(x907%x908)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x912 = 28486U;
	volatile int32_t t158 = 74;

    t158 = (x909==(x910%(x911%x912)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x914 = UINT8_MAX;
	int16_t x915 = -1;
	uint16_t x916 = 29U;
	volatile int32_t t159 = -68909722;

    t159 = (x913==(x914%(x915%x916)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x918 = 407073888319LLU;
	volatile int16_t x920 = -3;
	volatile int32_t t160 = 2006884;

    t160 = (x917==(x918%(x919%x920)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x921 = INT16_MAX;
	int64_t x922 = 13301609131LL;
	volatile int16_t x923 = INT16_MIN;
	uint8_t x924 = 63U;
	int32_t t161 = 7;

    t161 = (x921==(x922%(x923%x924)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x925 = UINT64_MAX;
	uint8_t x927 = 96U;
	uint16_t x928 = UINT16_MAX;
	static volatile int32_t t162 = -1467;

    t162 = (x925==(x926%(x927%x928)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int8_t x929 = 19;
	int8_t x930 = -1;
	uint32_t x931 = UINT32_MAX;
	int32_t x932 = 523538713;
	int32_t t163 = 1;

    t163 = (x929==(x930%(x931%x932)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int64_t x938 = INT64_MIN;
	static uint16_t x940 = 7U;
	int32_t t164 = -25287462;

    t164 = (x937==(x938%(x939%x940)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile uint32_t x949 = 10U;
	static uint16_t x950 = 14U;
	int8_t x951 = -1;
	int64_t x952 = INT64_MAX;
	static int32_t t165 = -554229739;

    t165 = (x949==(x950%(x951%x952)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x965 = 1U;
	int64_t x966 = -1LL;
	int32_t x967 = INT32_MIN;
	volatile int64_t x968 = INT64_MAX;

    t166 = (x965==(x966%(x967%x968)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x969 = -3721;
	int16_t x970 = INT16_MAX;
	volatile int16_t x971 = INT16_MAX;
	int64_t x972 = -15519LL;
	int32_t t167 = -640152;

    t167 = (x969==(x970%(x971%x972)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x978 = INT16_MIN;
	volatile int16_t x979 = INT16_MIN;
	static volatile uint8_t x980 = 15U;
	int32_t t168 = 344;

    t168 = (x977==(x978%(x979%x980)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x985 = INT32_MIN;
	static int16_t x987 = INT16_MAX;
	uint32_t x988 = 15035987U;

    t169 = (x985==(x986%(x987%x988)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x989 = INT8_MAX;
	volatile int64_t x990 = INT64_MAX;
	volatile int16_t x991 = -1165;
	int32_t t170 = 1440371;

    t170 = (x989==(x990%(x991%x992)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x993 = -3561;
	static int64_t x995 = -122795762944LL;
	volatile int32_t x996 = -207;
	int32_t t171 = -18021;

    t171 = (x993==(x994%(x995%x996)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x997 = INT16_MAX;
	int8_t x998 = 6;
	int64_t x999 = INT64_MIN;
	int16_t x1000 = -63;
	volatile int32_t t172 = -13;

    t172 = (x997==(x998%(x999%x1000)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1001 = 35614848U;
	volatile int8_t x1002 = INT8_MAX;
	static int32_t x1003 = INT32_MIN;
	volatile uint16_t x1004 = UINT16_MAX;
	volatile int32_t t173 = -21144;

    t173 = (x1001==(x1002%(x1003%x1004)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint8_t x1005 = UINT8_MAX;
	uint64_t x1007 = 43LLU;
	volatile int32_t t174 = 2718;

    t174 = (x1005==(x1006%(x1007%x1008)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1021 = -61LL;
	static volatile uint64_t x1024 = UINT64_MAX;
	int32_t t175 = 2414;

    t175 = (x1021==(x1022%(x1023%x1024)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile int32_t x1033 = 11;
	int32_t x1035 = INT32_MIN;
	int8_t x1036 = -10;

    t176 = (x1033==(x1034%(x1035%x1036)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1037 = INT64_MAX;
	int16_t x1038 = INT16_MIN;
	volatile int64_t x1039 = INT64_MIN;
	volatile int32_t x1040 = INT32_MAX;

    t177 = (x1037==(x1038%(x1039%x1040)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1045 = -1;
	uint8_t x1046 = 30U;
	volatile uint8_t x1047 = UINT8_MAX;
	int32_t x1048 = 10435;
	volatile int32_t t178 = -238331;

    t178 = (x1045==(x1046%(x1047%x1048)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x1053 = 3879;
	static volatile uint64_t x1055 = 8527079LLU;
	uint64_t x1056 = 9545LLU;
	int32_t t179 = 365;

    t179 = (x1053==(x1054%(x1055%x1056)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x1058 = INT8_MAX;
	static volatile int8_t x1059 = -1;
	int8_t x1060 = 7;
	static int32_t t180 = 6434;

    t180 = (x1057==(x1058%(x1059%x1060)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t t181 = -108311;

    t181 = (x1061==(x1062%(x1063%x1064)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint16_t x1067 = 14729U;
	static uint32_t x1068 = 533U;
	int32_t t182 = 11460831;

    t182 = (x1065==(x1066%(x1067%x1068)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1069 = INT32_MIN;
	uint8_t x1070 = 14U;
	int16_t x1072 = 131;

    t183 = (x1069==(x1070%(x1071%x1072)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1073 = INT8_MIN;
	int64_t x1074 = INT64_MIN;
	volatile uint32_t x1075 = 3U;

    t184 = (x1073==(x1074%(x1075%x1076)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x1081 = -7019950611878115LL;
	int64_t x1083 = -1LL;
	volatile int32_t t185 = 54575;

    t185 = (x1081==(x1082%(x1083%x1084)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x1085 = 2034U;
	volatile uint32_t x1086 = 2320U;
	volatile int32_t t186 = -16054164;

    t186 = (x1085==(x1086%(x1087%x1088)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int8_t x1089 = 1;
	uint16_t x1090 = 5504U;
	static uint8_t x1091 = 119U;
	uint16_t x1092 = UINT16_MAX;
	int32_t t187 = 2284;

    t187 = (x1089==(x1090%(x1091%x1092)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x1094 = -1LL;
	int16_t x1095 = -1;
	volatile int16_t x1096 = INT16_MIN;
	int32_t t188 = 11444;

    t188 = (x1093==(x1094%(x1095%x1096)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1101 = UINT8_MAX;
	volatile int32_t x1102 = INT32_MIN;
	int16_t x1103 = INT16_MIN;
	volatile int64_t x1104 = 437827275167LL;
	static int32_t t189 = 83417;

    t189 = (x1101==(x1102%(x1103%x1104)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1105 = 0U;
	int16_t x1106 = INT16_MIN;
	static uint64_t x1107 = 30500640573244052LLU;
	int64_t x1108 = 6279LL;
	int32_t t190 = -10;

    t190 = (x1105==(x1106%(x1107%x1108)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1109 = INT8_MIN;
	int16_t x1110 = INT16_MAX;
	int16_t x1112 = INT16_MAX;
	static volatile int32_t t191 = -471538;

    t191 = (x1109==(x1110%(x1111%x1112)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1113 = -1;
	uint16_t x1114 = 1686U;
	uint16_t x1115 = 2U;
	static int64_t x1116 = 3LL;
	int32_t t192 = -98;

    t192 = (x1113==(x1114%(x1115%x1116)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1117 = INT8_MAX;
	int32_t x1118 = INT32_MIN;
	int8_t x1119 = -4;
	static uint8_t x1120 = 28U;

    t193 = (x1117==(x1118%(x1119%x1120)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1122 = -3;
	volatile int64_t x1124 = 4496403364417132LL;
	volatile int32_t t194 = 2879;

    t194 = (x1121==(x1122%(x1123%x1124)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x1133 = 29U;
	volatile int16_t x1135 = -1;
	int8_t x1136 = INT8_MAX;
	static int32_t t195 = -186422;

    t195 = (x1133==(x1134%(x1135%x1136)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1137 = INT32_MIN;
	int64_t x1138 = -1LL;
	static uint64_t x1139 = 3815747149375LLU;
	uint16_t x1140 = 4U;
	volatile int32_t t196 = -7568;

    t196 = (x1137==(x1138%(x1139%x1140)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1147 = INT8_MAX;
	static int32_t t197 = 0;

    t197 = (x1145==(x1146%(x1147%x1148)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1149 = INT8_MAX;
	volatile int64_t x1150 = INT64_MIN;
	volatile int16_t x1151 = INT16_MAX;
	int32_t x1152 = 13328;
	int32_t t198 = -7869459;

    t198 = (x1149==(x1150%(x1151%x1152)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1154 = INT8_MIN;
	int16_t x1156 = INT16_MIN;
	int32_t t199 = -12082978;

    t199 = (x1153==(x1154%(x1155%x1156)));

    if (t199 != 0) { NG(); } else { ; }
	
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

