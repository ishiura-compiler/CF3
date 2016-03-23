
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

int32_t x1 = INT32_MIN;
uint32_t x4 = 398124U;
volatile int8_t x23 = -1;
int8_t x24 = -20;
int32_t x25 = INT32_MIN;
int64_t x28 = -1LL;
volatile int64_t t3 = -110087527900LL;
int32_t x39 = INT32_MIN;
int64_t x43 = 190558476071LL;
static volatile int64_t t8 = -11LL;
int64_t t9 = 0LL;
uint64_t x66 = UINT64_MAX;
int8_t x74 = -1;
volatile uint16_t x78 = 3368U;
static int8_t x82 = -1;
int16_t x84 = -1;
int8_t x94 = -1;
volatile uint64_t t18 = 9188139851404958500LLU;
int64_t x98 = INT64_MIN;
volatile uint64_t t19 = 876LLU;
int32_t x102 = INT32_MAX;
volatile int64_t t20 = 190977LL;
uint16_t x123 = 8556U;
static uint8_t x124 = UINT8_MAX;
volatile uint32_t x134 = 1290U;
static uint64_t x141 = 258890LLU;
static uint64_t t25 = 235774798462LLU;
volatile int64_t x158 = -1LL;
volatile uint32_t x160 = 2U;
static uint32_t x166 = 17413487U;
int8_t x186 = -1;
int16_t x187 = 135;
static int32_t x197 = INT32_MIN;
static uint64_t x202 = 5657369799970728277LLU;
static int16_t x203 = INT16_MIN;
uint16_t x204 = 14U;
uint8_t x209 = 12U;
int64_t x227 = -1LL;
volatile int8_t x230 = INT8_MIN;
int32_t t38 = -48;
uint8_t x233 = 73U;
uint32_t x236 = 126662U;
static uint16_t x243 = UINT16_MAX;
int16_t x249 = -1;
int64_t x250 = -270384955LL;
volatile int64_t t43 = 362620820LL;
volatile int64_t x256 = -1LL;
volatile uint32_t t45 = 14U;
uint64_t t47 = 8088LLU;
uint64_t x274 = 91917522907LLU;
int64_t x277 = -1LL;
static uint64_t x279 = 170LLU;
int64_t x282 = -3LL;
volatile int8_t x283 = -2;
static int64_t x284 = INT64_MIN;
int64_t t51 = 167381279258664LL;
static uint64_t x291 = 54552737334161486LLU;
volatile uint64_t t52 = 183372LLU;
int32_t x293 = 97082;
int64_t x305 = -1LL;
int64_t x324 = INT64_MIN;
uint32_t x325 = 14997U;
uint64_t x329 = 19332856445374019LLU;
volatile int16_t x334 = -2;
uint32_t x335 = 0U;
int8_t x339 = -8;
volatile uint32_t t63 = 6648751U;
int64_t x341 = INT64_MAX;
volatile uint16_t x342 = 953U;
static uint64_t x343 = UINT64_MAX;
int32_t x344 = INT32_MAX;
static uint64_t t64 = 2624084256090403274LLU;
static volatile uint16_t x348 = UINT16_MAX;
uint64_t t65 = 13LLU;
int64_t x350 = -974811681028702LL;
int64_t t66 = 976688342289374LL;
uint32_t x354 = 921U;
int64_t x364 = -1LL;
volatile uint64_t t68 = 63493866540LLU;
uint32_t x365 = UINT32_MAX;
static volatile int32_t x368 = INT32_MIN;
uint64_t t72 = 41LLU;
static int32_t x385 = INT32_MIN;
int64_t x401 = INT64_MIN;
static volatile uint64_t x407 = UINT64_MAX;
volatile uint64_t t77 = 82LLU;
static volatile int64_t x414 = INT64_MAX;
int64_t t78 = 949592514LL;
int8_t x419 = INT8_MIN;
uint32_t x426 = 323867U;
uint32_t x427 = UINT32_MAX;
volatile uint64_t x437 = 174988LLU;
int32_t x441 = -1;
int16_t x453 = INT16_MIN;
static int64_t x464 = INT64_MAX;
int8_t x472 = INT8_MIN;
uint16_t x478 = 2264U;
volatile int32_t x479 = -468;
int64_t x494 = -25830063392356291LL;
volatile int32_t x498 = 643;
uint16_t x499 = UINT16_MAX;
uint8_t x500 = 1U;
uint64_t x506 = 50LLU;
int8_t x512 = INT8_MIN;
volatile uint32_t t99 = 15929U;
int16_t x534 = -1;
int32_t x537 = -2956;
volatile int16_t x538 = 1;
static uint16_t x540 = UINT16_MAX;
volatile int32_t x542 = INT32_MIN;
uint64_t x547 = 9682553695365068LLU;
int32_t t106 = -35593;
int32_t x568 = INT32_MIN;
uint64_t x578 = UINT64_MAX;
static uint64_t x595 = UINT64_MAX;
uint64_t t113 = 1922555523388074939LLU;
uint64_t x600 = UINT64_MAX;
int32_t x601 = -1;
int8_t x611 = -1;
int16_t x614 = 6132;
volatile int32_t x616 = INT32_MIN;
volatile int32_t x620 = INT32_MIN;
uint32_t x626 = 6U;
uint8_t x627 = UINT8_MAX;
uint16_t x634 = UINT16_MAX;
volatile uint32_t t122 = 63820790U;
volatile int8_t x643 = INT8_MAX;
int8_t x651 = INT8_MIN;
volatile uint64_t t126 = 216932090LLU;
int32_t x661 = INT32_MIN;
volatile uint64_t x666 = UINT64_MAX;
static uint16_t x673 = UINT16_MAX;
volatile uint8_t x681 = UINT8_MAX;
static volatile uint32_t x683 = 4U;
static int32_t x688 = -1;
volatile int16_t x689 = INT16_MAX;
uint8_t x694 = UINT8_MAX;
volatile int16_t x705 = INT16_MIN;
static int16_t x729 = 19;
static volatile uint16_t x736 = UINT16_MAX;
int64_t t140 = -409041421377796LL;
int16_t x748 = -1;
int16_t x750 = -1;
int32_t x752 = INT32_MIN;
int8_t x754 = INT8_MAX;
uint64_t x767 = 533288268091LLU;
volatile uint64_t t146 = 4013058864408LLU;
uint32_t x769 = 709544347U;
int32_t x772 = 7642;
static int16_t x773 = 234;
uint64_t x775 = 59470823543LLU;
uint64_t t148 = 43117869677537LLU;
int32_t x786 = INT32_MIN;
int64_t x788 = INT64_MAX;
volatile int64_t t150 = -201280260200593LL;
int32_t x794 = -81596682;
static int16_t x803 = INT16_MIN;
static int64_t x810 = 198504041984467164LL;
uint8_t x815 = 10U;
uint16_t x818 = UINT16_MAX;
int8_t x819 = -1;
volatile int32_t t158 = -165636;
int32_t x822 = INT32_MAX;
uint32_t x824 = 1U;
volatile uint32_t t159 = 966U;
volatile int32_t x830 = -1;
uint64_t x831 = 5318851945LLU;
uint64_t x834 = 1603790LLU;
int64_t x841 = -2LL;
int32_t x847 = INT32_MIN;
uint64_t x848 = 7LLU;
static uint8_t x849 = 15U;
volatile int8_t x855 = INT8_MAX;
volatile uint32_t t168 = 1679707U;
int32_t x867 = -1;
uint64_t x868 = UINT64_MAX;
uint8_t x871 = 16U;
int8_t x883 = 1;
int64_t t174 = -343LL;
volatile uint64_t t175 = 33055092084LLU;
int16_t x895 = -1;
volatile int64_t x897 = 114891743LL;
uint16_t x899 = 10U;
int16_t x901 = -1;
int32_t x904 = INT32_MIN;
uint64_t t178 = 13544268LLU;
volatile int8_t x914 = 2;
int8_t x915 = INT8_MAX;
int64_t x923 = INT64_MIN;
int32_t x924 = INT32_MIN;
int64_t t182 = 39LL;
uint16_t x927 = 28U;
int16_t x940 = 0;
volatile uint32_t t185 = 4120126U;
static uint64_t x941 = UINT64_MAX;
static uint64_t t186 = 6454279LLU;
uint16_t x956 = UINT16_MAX;
int32_t x957 = -1;
volatile int32_t t191 = -7;
int8_t x969 = -1;
static uint8_t x977 = 16U;
volatile int32_t x1002 = -2993375;
int8_t x1003 = 0;
int16_t x1004 = -1;


void f0(void) {
    	uint16_t x2 = 6U;
	int8_t x3 = INT8_MIN;
	uint32_t t0 = 5U;

    t0 = ((x1+(x2-x3))&x4);

    if (t0 != 4U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x17 = 24;
	int8_t x18 = -50;
	static int8_t x19 = INT8_MIN;
	uint16_t x20 = 3U;
	volatile int32_t t1 = 3247041;

    t1 = ((x17+(x18-x19))&x20);

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x21 = -16161824516029748LL;
	int64_t x22 = -2LL;
	int64_t t2 = 3247854945975154LL;

    t2 = ((x21+(x22-x23))&x24);

    if (t2 != -16161824516029752LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x26 = INT64_MAX;
	static volatile uint8_t x27 = 52U;

    t3 = ((x25+(x26-x27))&x28);

    if (t3 != 9223372034707292107LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x33 = 1973952U;
	volatile uint32_t x34 = 4043U;
	volatile int16_t x35 = INT16_MAX;
	uint64_t x36 = UINT64_MAX;
	static uint64_t t4 = 35351797LLU;

    t4 = ((x33+(x34-x35))&x36);

    if (t4 != 1945228LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x37 = -1LL;
	static int8_t x38 = -1;
	int64_t x40 = 3120598859990LL;
	static int64_t t5 = -117LL;

    t5 = ((x37+(x38-x39))&x40);

    if (t5 != 305119446LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x41 = -483053749126869LL;
	int64_t x42 = INT64_MAX;
	static int64_t x44 = INT64_MIN;
	volatile int64_t t6 = -1698LL;

    t6 = ((x41+(x42-x43))&x44);

    if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x45 = -1LL;
	int16_t x46 = 6136;
	int32_t x47 = INT32_MAX;
	int64_t x48 = -315794086LL;
	int64_t t7 = -7641005237052LL;

    t7 = ((x45+(x46-x47))&x48);

    if (t7 != -2147478184LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x53 = UINT32_MAX;
	int64_t x54 = 1146848LL;
	int32_t x55 = INT32_MAX;
	uint16_t x56 = 31692U;

    t8 = ((x53+(x54-x55))&x56);

    if (t8 != 31680LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x57 = -1;
	volatile int64_t x58 = -1LL;
	volatile uint8_t x59 = UINT8_MAX;
	uint32_t x60 = 16951U;

    t9 = ((x57+(x58-x59))&x60);

    if (t9 != 16951LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint16_t x61 = 10U;
	static int8_t x62 = INT8_MIN;
	static int32_t x63 = -758;
	static uint64_t x64 = UINT64_MAX;
	static volatile uint64_t t10 = 571573576584502442LLU;

    t10 = ((x61+(x62-x63))&x64);

    if (t10 != 640LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t x65 = -11176514;
	volatile int64_t x67 = -1LL;
	static volatile int16_t x68 = INT16_MAX;
	static volatile uint64_t t11 = 13806732780047752LLU;

    t11 = ((x65+(x66-x67))&x68);

    if (t11 != 30142LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x69 = 1;
	int16_t x70 = INT16_MAX;
	int8_t x71 = -6;
	uint8_t x72 = 0U;
	volatile int32_t t12 = 76;

    t12 = ((x69+(x70-x71))&x72);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x73 = UINT64_MAX;
	uint64_t x75 = 4LLU;
	uint8_t x76 = 0U;
	uint64_t t13 = 69805035052583848LLU;

    t13 = ((x73+(x74-x75))&x76);

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint32_t x77 = 137U;
	int32_t x79 = INT32_MAX;
	static volatile int16_t x80 = -1;
	volatile uint32_t t14 = 2U;

    t14 = ((x77+(x78-x79))&x80);

    if (t14 != 2147487154U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x81 = -1;
	int16_t x83 = INT16_MIN;
	volatile int32_t t15 = 115246052;

    t15 = ((x81+(x82-x83))&x84);

    if (t15 != 32766) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x85 = UINT32_MAX;
	uint32_t x86 = 46U;
	int64_t x87 = 20LL;
	static int32_t x88 = -1;
	static int64_t t16 = 17217008342018044LL;

    t16 = ((x85+(x86-x87))&x88);

    if (t16 != 4294967321LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x89 = -1;
	uint16_t x90 = 1127U;
	uint64_t x91 = 244163LLU;
	static int64_t x92 = 4883552228971099LL;
	static volatile uint64_t t17 = 379670945900430LLU;

    t17 = ((x89+(x90-x91))&x92);

    if (t17 != 4883552228868611LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x93 = 276145418433230440LLU;
	uint8_t x95 = 68U;
	static int64_t x96 = -1059729LL;

    t18 = ((x93+(x94-x95))&x96);

    if (t18 != 276145418432173091LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x97 = -10206386LL;
	static uint64_t x99 = 68432104210600LLU;
	static volatile int32_t x100 = -1037648;

    t19 = ((x97+(x98-x99))&x100);

    if (t19 != 9223303604740293280LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x101 = 0U;
	int64_t x103 = -1LL;
	static int64_t x104 = -1LL;

    t20 = ((x101+(x102-x103))&x104);

    if (t20 != 2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x121 = 445581U;
	uint16_t x122 = 118U;
	uint32_t t21 = 6128860U;

    t21 = ((x121+(x122-x123))&x124);

    if (t21 != 151U) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x129 = INT32_MAX;
	static volatile uint32_t x130 = 1861U;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -9;
	volatile uint32_t t22 = 27U;

    t22 = ((x129+(x130-x131))&x132);

    if (t22 != 2147518276U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x133 = 245U;
	uint64_t x135 = UINT64_MAX;
	static int8_t x136 = 2;
	static volatile uint64_t t23 = 9733136501718895LLU;

    t23 = ((x133+(x134-x135))&x136);

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x137 = 836U;
	uint8_t x138 = 60U;
	static int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	static volatile int32_t t24 = -305;

    t24 = ((x137+(x138-x139))&x140);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x142 = -113;
	int64_t x143 = -1LL;
	static int64_t x144 = -434924063007721795LL;

    t25 = ((x141+(x142-x143))&x144);

    if (t25 != 242328LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x157 = -1;
	static int8_t x159 = INT8_MIN;
	volatile int64_t t26 = -1677779294734539LL;

    t26 = ((x157+(x158-x159))&x160);

    if (t26 != 2LL) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x161 = 27U;
	int16_t x162 = INT16_MAX;
	uint32_t x163 = UINT32_MAX;
	volatile int32_t x164 = -2;
	uint32_t t27 = 1395U;

    t27 = ((x161+(x162-x163))&x164);

    if (t27 != 32794U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x165 = -1;
	uint16_t x167 = 0U;
	int16_t x168 = INT16_MAX;
	uint32_t t28 = 231U;

    t28 = ((x165+(x166-x167))&x168);

    if (t28 != 13678U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x169 = 530798407U;
	volatile int8_t x170 = INT8_MAX;
	volatile uint16_t x171 = 83U;
	volatile int32_t x172 = INT32_MAX;
	volatile uint32_t t29 = 53U;

    t29 = ((x169+(x170-x171))&x172);

    if (t29 != 530798451U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x185 = -982787183LL;
	uint16_t x188 = 30113U;
	int64_t t30 = -671418961073797LL;

    t30 = ((x185+(x186-x187))&x188);

    if (t30 != 20737LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x189 = 1;
	volatile uint64_t x190 = UINT64_MAX;
	static int32_t x191 = INT32_MAX;
	static volatile uint32_t x192 = 0U;
	volatile uint64_t t31 = 908857467LLU;

    t31 = ((x189+(x190-x191))&x192);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x198 = -1;
	volatile int16_t x199 = -1;
	static volatile int8_t x200 = 1;
	static volatile int32_t t32 = -122061736;

    t32 = ((x197+(x198-x199))&x200);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x201 = -1LL;
	uint64_t t33 = 4343275116964228LLU;

    t33 = ((x201+(x202-x203))&x204);

    if (t33 != 4LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int8_t x210 = -8;
	uint16_t x211 = 57U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t34 = INT32_MIN;

    t34 = ((x209+(x210-x211))&x212);

    if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x213 = 8U;
	int16_t x214 = INT16_MIN;
	uint8_t x215 = UINT8_MAX;
	int16_t x216 = INT16_MIN;
	int32_t t35 = -1093;

    t35 = ((x213+(x214-x215))&x216);

    if (t35 != -65536) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x217 = UINT32_MAX;
	volatile uint32_t x218 = 1520U;
	volatile int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	uint32_t t36 = 55447801U;

    t36 = ((x217+(x218-x219))&x220);

    if (t36 != 1519U) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x225 = INT16_MAX;
	int16_t x226 = INT16_MIN;
	int64_t x228 = -636614276359646LL;
	static volatile int64_t t37 = -663502540LL;

    t37 = ((x225+(x226-x227))&x228);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x229 = 8;
	int16_t x231 = -1;
	uint8_t x232 = 7U;

    t38 = ((x229+(x230-x231))&x232);

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MIN;
	int64_t t39 = 405320445332LL;

    t39 = ((x233+(x234-x235))&x236);

    if (t39 != 32832LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x237 = INT64_MIN;
	uint16_t x238 = UINT16_MAX;
	volatile uint16_t x239 = 2U;
	int32_t x240 = INT32_MIN;
	int64_t t40 = INT64_MIN;

    t40 = ((x237+(x238-x239))&x240);

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x241 = -1;
	int16_t x242 = INT16_MAX;
	int32_t x244 = INT32_MAX;
	int32_t t41 = 646075474;

    t41 = ((x241+(x242-x243))&x244);

    if (t41 != 2147450879) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = UINT64_MAX;
	int16_t x248 = INT16_MIN;
	static uint64_t t42 = 92644874205712LLU;

    t42 = ((x245+(x246-x247))&x248);

    if (t42 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x251 = INT32_MIN;
	int16_t x252 = INT16_MIN;

    t43 = ((x249+(x250-x251))&x252);

    if (t43 != 1877082112LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x253 = UINT64_MAX;
	static volatile int32_t x254 = -1;
	uint32_t x255 = 440U;
	static volatile uint64_t t44 = 1471516890533244LLU;

    t44 = ((x253+(x254-x255))&x256);

    if (t44 != 4294966854LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x257 = -1;
	volatile int8_t x258 = INT8_MIN;
	uint32_t x259 = UINT32_MAX;
	uint8_t x260 = UINT8_MAX;

    t45 = ((x257+(x258-x259))&x260);

    if (t45 != 128U) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x265 = 8;
	int16_t x266 = INT16_MIN;
	volatile int16_t x267 = 11;
	uint8_t x268 = 8U;
	volatile int32_t t46 = 212950150;

    t46 = ((x265+(x266-x267))&x268);

    if (t46 != 8) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x269 = INT32_MAX;
	int8_t x270 = INT8_MAX;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;

    t47 = ((x269+(x270-x271))&x272);

    if (t47 != 2147483648LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x273 = UINT16_MAX;
	int64_t x275 = INT64_MAX;
	volatile uint32_t x276 = 123895U;
	volatile uint64_t t48 = 73570885LLU;

    t48 = ((x273+(x274-x275))&x276);

    if (t48 != 66515LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x278 = INT8_MIN;
	uint32_t x280 = 3U;
	uint64_t t49 = 513LLU;

    t49 = ((x277+(x278-x279))&x280);

    if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x281 = UINT8_MAX;
	volatile int64_t t50 = -1580447LL;

    t50 = ((x281+(x282-x283))&x284);

    if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint32_t x285 = 362094509U;
	uint16_t x286 = 1U;
	uint8_t x287 = 98U;
	volatile int64_t x288 = INT64_MIN;

    t51 = ((x285+(x286-x287))&x288);

    if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x289 = -1;
	static int16_t x290 = INT16_MIN;
	uint8_t x292 = UINT8_MAX;

    t52 = ((x289+(x290-x291))&x292);

    if (t52 != 177LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int64_t x294 = -6735854LL;
	int16_t x295 = 1;
	uint8_t x296 = 2U;
	int64_t t53 = 36991423588LL;

    t53 = ((x293+(x294-x295))&x296);

    if (t53 != 2LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x297 = 1801U;
	static int16_t x298 = -1;
	int16_t x299 = 1;
	static uint8_t x300 = 0U;
	volatile uint32_t t54 = 795630562U;

    t54 = ((x297+(x298-x299))&x300);

    if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x306 = INT32_MAX;
	int64_t x307 = -2252091LL;
	int32_t x308 = -5217;
	volatile int64_t t55 = 4201LL;

    t55 = ((x305+(x306-x307))&x308);

    if (t55 != 2149730585LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x309 = 10;
	int64_t x310 = -217755794LL;
	int16_t x311 = -1;
	static uint16_t x312 = 957U;
	volatile int64_t t56 = -23615548LL;

    t56 = ((x309+(x310-x311))&x312);

    if (t56 != 825LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x313 = -1;
	static uint16_t x314 = 2U;
	static volatile uint8_t x315 = 1U;
	static int16_t x316 = -1;
	int32_t t57 = 4574572;

    t57 = ((x313+(x314-x315))&x316);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x317 = INT64_MIN;
	uint32_t x318 = UINT32_MAX;
	uint32_t x319 = 107U;
	uint32_t x320 = 101339U;
	volatile int64_t t58 = 284787607011803655LL;

    t58 = ((x317+(x318-x319))&x320);

    if (t58 != 101264LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MAX;
	uint64_t x323 = UINT64_MAX;
	uint64_t t59 = 113LLU;

    t59 = ((x321+(x322-x323))&x324);

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x326 = -1;
	int32_t x327 = -1;
	uint16_t x328 = UINT16_MAX;
	uint32_t t60 = 992U;

    t60 = ((x325+(x326-x327))&x328);

    if (t60 != 14997U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x330 = INT32_MIN;
	int32_t x331 = -1;
	static int16_t x332 = -1;
	volatile uint64_t t61 = 389870556998157LLU;

    t61 = ((x329+(x330-x331))&x332);

    if (t61 != 19332854297890372LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x333 = -190;
	int32_t x336 = INT32_MAX;
	volatile uint32_t t62 = 0U;

    t62 = ((x333+(x334-x335))&x336);

    if (t62 != 2147483456U) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x337 = 94412123U;
	uint8_t x338 = 35U;
	volatile uint8_t x340 = 10U;

    t63 = ((x337+(x338-x339))&x340);

    if (t63 != 2U) { NG(); } else { ; }
	
}

void f64(void) {
    

    t64 = ((x341+(x342-x343))&x344);

    if (t64 != 953LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x345 = UINT64_MAX;
	uint8_t x346 = 16U;
	uint16_t x347 = 47U;

    t65 = ((x345+(x346-x347))&x348);

    if (t65 != 65504LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x349 = INT32_MAX;
	int16_t x351 = INT16_MIN;
	static int32_t x352 = -1;

    t66 = ((x349+(x350-x351))&x352);

    if (t66 != -974809533512287LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x353 = 124796130415256632LLU;
	int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	uint64_t t67 = 2664980852LLU;

    t67 = ((x353+(x354-x355))&x356);

    if (t67 != 124796130415247360LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x361 = UINT16_MAX;
	int16_t x362 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;

    t68 = ((x361+(x362-x363))&x364);

    if (t68 != 32768LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x366 = INT64_MIN;
	static int64_t x367 = INT64_MIN;
	int64_t t69 = 1181628881573494LL;

    t69 = ((x365+(x366-x367))&x368);

    if (t69 != 2147483648LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x369 = -1LL;
	uint8_t x370 = 7U;
	int16_t x371 = -2;
	volatile int8_t x372 = INT8_MIN;
	volatile int64_t t70 = -1LL;

    t70 = ((x369+(x370-x371))&x372);

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x377 = 0U;
	volatile uint8_t x378 = 105U;
	static uint16_t x379 = UINT16_MAX;
	static int64_t x380 = -1LL;
	int64_t t71 = -221LL;

    t71 = ((x377+(x378-x379))&x380);

    if (t71 != 4294901866LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x381 = 5482625400902LLU;
	int64_t x382 = -1LL;
	uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = -1;

    t72 = ((x381+(x382-x383))&x384);

    if (t72 != 5482625335366LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x386 = UINT8_MAX;
	uint8_t x387 = 30U;
	static int16_t x388 = INT16_MIN;
	int32_t t73 = INT32_MIN;

    t73 = ((x385+(x386-x387))&x388);

    if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x393 = INT32_MIN;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	int64_t x396 = INT64_MIN;
	static uint64_t t74 = 341LLU;

    t74 = ((x393+(x394-x395))&x396);

    if (t74 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x397 = INT8_MIN;
	uint64_t x398 = 17392918LLU;
	int16_t x399 = INT16_MAX;
	uint64_t x400 = 23869599491LLU;
	volatile uint64_t t75 = 495294832251LLU;

    t75 = ((x397+(x398-x399))&x400);

    if (t75 != 533507LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x402 = -1;
	volatile int64_t x403 = INT64_MIN;
	static volatile int8_t x404 = -4;
	volatile int64_t t76 = 54433LL;

    t76 = ((x401+(x402-x403))&x404);

    if (t76 != -4LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x405 = INT8_MAX;
	int16_t x406 = 57;
	uint32_t x408 = 74041624U;

    t77 = ((x405+(x406-x407))&x408);

    if (t77 != 24LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x413 = -220979;
	int64_t x415 = INT64_MAX;
	static volatile int32_t x416 = INT32_MIN;

    t78 = ((x413+(x414-x415))&x416);

    if (t78 != -2147483648LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x417 = 39U;
	int64_t x418 = INT64_MIN;
	uint16_t x420 = 70U;
	volatile int64_t t79 = 100443LL;

    t79 = ((x417+(x418-x419))&x420);

    if (t79 != 6LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x421 = INT64_MAX;
	int16_t x422 = 1;
	static int32_t x423 = INT32_MAX;
	int32_t x424 = INT32_MAX;
	volatile int64_t t80 = -991782555630051LL;

    t80 = ((x421+(x422-x423))&x424);

    if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x425 = INT32_MIN;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t81 = 2092639721U;

    t81 = ((x425+(x426-x427))&x428);

    if (t81 != 2147807516U) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x433 = 10;
	volatile int16_t x434 = 150;
	volatile uint16_t x435 = UINT16_MAX;
	int8_t x436 = 17;
	int32_t t82 = 48;

    t82 = ((x433+(x434-x435))&x436);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x438 = INT8_MIN;
	int8_t x439 = INT8_MAX;
	volatile int16_t x440 = 1583;
	uint64_t t83 = 1289904237LLU;

    t83 = ((x437+(x438-x439))&x440);

    if (t83 != 525LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x442 = -1;
	volatile int32_t x443 = INT32_MIN;
	int64_t x444 = -794595935246LL;
	static volatile int64_t t84 = -17969LL;

    t84 = ((x441+(x442-x443))&x444);

    if (t84 != 2120498162LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x445 = UINT64_MAX;
	static int64_t x446 = INT64_MIN;
	volatile int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MIN;
	volatile uint64_t t85 = 1629859LLU;

    t85 = ((x445+(x446-x447))&x448);

    if (t85 != 9223372039002226688LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x449 = -1LL;
	int8_t x450 = INT8_MAX;
	volatile uint16_t x451 = UINT16_MAX;
	static int32_t x452 = INT32_MAX;
	static volatile int64_t t86 = 319713051659291913LL;

    t86 = ((x449+(x450-x451))&x452);

    if (t86 != 2147418239LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x454 = 14095U;
	static uint32_t x455 = 134147123U;
	int8_t x456 = -47;
	volatile uint32_t t87 = 1915072746U;

    t87 = ((x453+(x454-x455))&x456);

    if (t87 != 4160801488U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x461 = INT32_MAX;
	static int8_t x462 = -23;
	static int16_t x463 = -1;
	volatile int64_t t88 = -1772764661329LL;

    t88 = ((x461+(x462-x463))&x464);

    if (t88 != 2147483625LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x469 = 15U;
	static volatile int32_t x470 = -1;
	int32_t x471 = INT32_MAX;
	volatile int32_t t89 = INT32_MIN;

    t89 = ((x469+(x470-x471))&x472);

    if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int64_t x473 = -194LL;
	uint64_t x474 = UINT64_MAX;
	int64_t x475 = INT64_MAX;
	int64_t x476 = -1LL;
	volatile uint64_t t90 = 7001LLU;

    t90 = ((x473+(x474-x475))&x476);

    if (t90 != 9223372036854775614LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x477 = 35U;
	uint8_t x480 = 9U;
	volatile int32_t t91 = -845;

    t91 = ((x477+(x478-x479))&x480);

    if (t91 != 9) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x489 = INT16_MIN;
	volatile int16_t x490 = -1;
	static volatile int32_t x491 = 32128;
	uint64_t x492 = UINT64_MAX;
	volatile uint64_t t92 = 7487086LLU;

    t92 = ((x489+(x490-x491))&x492);

    if (t92 != 18446744073709486719LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int32_t x493 = -1;
	static int32_t x495 = INT32_MAX;
	uint64_t x496 = 315375LLU;
	volatile uint64_t t93 = 100325881562120455LLU;

    t93 = ((x493+(x494-x495))&x496);

    if (t93 != 2093LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x497 = INT32_MAX;
	volatile int32_t t94 = 125142;

    t94 = ((x497+(x498-x499))&x500);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x505 = 130LL;
	int32_t x507 = 91;
	uint16_t x508 = UINT16_MAX;
	uint64_t t95 = 791LLU;

    t95 = ((x505+(x506-x507))&x508);

    if (t95 != 89LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x509 = 146;
	uint8_t x510 = 8U;
	uint32_t x511 = UINT32_MAX;
	volatile uint32_t t96 = 0U;

    t96 = ((x509+(x510-x511))&x512);

    if (t96 != 128U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x513 = 1U;
	uint16_t x514 = UINT16_MAX;
	int32_t x515 = INT32_MAX;
	uint32_t x516 = 427U;
	static volatile uint32_t t97 = 8U;

    t97 = ((x513+(x514-x515))&x516);

    if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x517 = INT32_MAX;
	uint64_t x518 = UINT64_MAX;
	static int16_t x519 = INT16_MIN;
	static uint8_t x520 = UINT8_MAX;
	static volatile uint64_t t98 = 135768LLU;

    t98 = ((x517+(x518-x519))&x520);

    if (t98 != 254LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x529 = INT16_MAX;
	uint16_t x530 = 141U;
	uint8_t x531 = 49U;
	uint32_t x532 = 7679967U;

    t99 = ((x529+(x530-x531))&x532);

    if (t99 != 91U) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x533 = INT32_MIN;
	int32_t x535 = -8494004;
	int8_t x536 = INT8_MIN;
	static int32_t t100 = 5462198;

    t100 = ((x533+(x534-x535))&x536);

    if (t100 != -2138989696) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x539 = 125;
	volatile int32_t t101 = -355216;

    t101 = ((x537+(x538-x539))&x540);

    if (t101 != 62456) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x541 = 2349;
	int64_t x543 = INT64_MIN;
	int64_t x544 = INT64_MIN;
	static int64_t t102 = 13353719296382LL;

    t102 = ((x541+(x542-x543))&x544);

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x545 = INT8_MIN;
	static int16_t x546 = -110;
	volatile int32_t x548 = INT32_MIN;
	uint64_t t103 = 3LLU;

    t103 = ((x545+(x546-x547))&x548);

    if (t103 != 18437061518764802048LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x549 = 1;
	int8_t x550 = 0;
	int16_t x551 = 28;
	int32_t x552 = INT32_MIN;
	volatile int32_t t104 = INT32_MIN;

    t104 = ((x549+(x550-x551))&x552);

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x553 = 550U;
	int16_t x554 = INT16_MAX;
	int32_t x555 = -153;
	uint64_t x556 = 746LLU;
	uint64_t t105 = 1942146234684849612LLU;

    t105 = ((x553+(x554-x555))&x556);

    if (t105 != 682LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x561 = 1;
	int16_t x562 = -6;
	int8_t x563 = INT8_MAX;
	static uint16_t x564 = 417U;

    t106 = ((x561+(x562-x563))&x564);

    if (t106 != 288) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x565 = UINT8_MAX;
	uint32_t x566 = UINT32_MAX;
	int16_t x567 = -1;
	volatile uint32_t t107 = 2381U;

    t107 = ((x565+(x566-x567))&x568);

    if (t107 != 0U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x573 = UINT32_MAX;
	static uint16_t x574 = UINT16_MAX;
	int16_t x575 = INT16_MIN;
	int16_t x576 = INT16_MIN;
	uint32_t t108 = 716061U;

    t108 = ((x573+(x574-x575))&x576);

    if (t108 != 65536U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x577 = INT16_MAX;
	int32_t x579 = INT32_MAX;
	uint8_t x580 = UINT8_MAX;
	uint64_t t109 = 24859536496LLU;

    t109 = ((x577+(x578-x579))&x580);

    if (t109 != 255LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int16_t x581 = INT16_MIN;
	static int8_t x582 = -19;
	volatile int64_t x583 = INT64_MIN;
	static uint8_t x584 = 1U;
	volatile int64_t t110 = -1052759046LL;

    t110 = ((x581+(x582-x583))&x584);

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x585 = INT32_MAX;
	int16_t x586 = 0;
	static int32_t x587 = INT32_MAX;
	static int32_t x588 = 231;
	volatile int32_t t111 = -4335879;

    t111 = ((x585+(x586-x587))&x588);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x589 = 429533169LLU;
	int16_t x590 = INT16_MIN;
	int64_t x591 = -344835380LL;
	volatile int32_t x592 = -30;
	volatile uint64_t t112 = 2676664274889982850LLU;

    t112 = ((x589+(x590-x591))&x592);

    if (t112 != 774335776LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x593 = INT64_MIN;
	int64_t x594 = INT64_MIN;
	int8_t x596 = INT8_MIN;

    t113 = ((x593+(x594-x595))&x596);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x597 = INT64_MIN;
	int8_t x598 = INT8_MAX;
	int16_t x599 = INT16_MIN;
	static uint64_t t114 = 40LLU;

    t114 = ((x597+(x598-x599))&x600);

    if (t114 != 9223372036854808703LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x602 = UINT16_MAX;
	int16_t x603 = INT16_MAX;
	volatile uint16_t x604 = UINT16_MAX;
	volatile int32_t t115 = -1;

    t115 = ((x601+(x602-x603))&x604);

    if (t115 != 32767) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x609 = INT8_MIN;
	uint8_t x610 = 62U;
	int16_t x612 = -1;
	volatile int32_t t116 = -272747;

    t116 = ((x609+(x610-x611))&x612);

    if (t116 != -65) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x613 = INT32_MIN;
	static uint8_t x615 = 38U;
	int32_t t117 = INT32_MIN;

    t117 = ((x613+(x614-x615))&x616);

    if (t117 != INT32_MIN) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x617 = -618213;
	int64_t x618 = -356LL;
	int16_t x619 = -1353;
	int64_t t118 = 215LL;

    t118 = ((x617+(x618-x619))&x620);

    if (t118 != -2147483648LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x621 = -1LL;
	uint8_t x622 = 4U;
	uint64_t x623 = UINT64_MAX;
	static volatile int32_t x624 = -1;
	static uint64_t t119 = 26340842LLU;

    t119 = ((x621+(x622-x623))&x624);

    if (t119 != 4LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x625 = 3311004U;
	static int16_t x628 = INT16_MIN;
	uint32_t t120 = 197U;

    t120 = ((x625+(x626-x627))&x628);

    if (t120 != 3309568U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x629 = 107U;
	int16_t x630 = INT16_MIN;
	volatile int64_t x631 = INT64_MIN;
	static uint32_t x632 = 14372690U;
	int64_t t121 = -2065923LL;

    t121 = ((x629+(x630-x631))&x632);

    if (t121 != 14352450LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x633 = INT8_MIN;
	static volatile uint32_t x635 = UINT32_MAX;
	int32_t x636 = -12277;

    t122 = ((x633+(x634-x635))&x636);

    if (t122 != 53248U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int16_t x641 = -1;
	static int32_t x642 = -1;
	static volatile int32_t x644 = INT32_MIN;
	volatile int32_t t123 = INT32_MIN;

    t123 = ((x641+(x642-x643))&x644);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x649 = INT8_MAX;
	int8_t x650 = -1;
	int8_t x652 = 4;
	volatile int32_t t124 = -248228;

    t124 = ((x649+(x650-x651))&x652);

    if (t124 != 4) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x653 = INT8_MAX;
	int8_t x654 = -1;
	static int8_t x655 = 0;
	static int8_t x656 = INT8_MAX;
	int32_t t125 = 477588;

    t125 = ((x653+(x654-x655))&x656);

    if (t125 != 126) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x657 = UINT64_MAX;
	uint64_t x658 = UINT64_MAX;
	volatile int64_t x659 = -1LL;
	static uint8_t x660 = 21U;

    t126 = ((x657+(x658-x659))&x660);

    if (t126 != 21LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x662 = -1761178218268819616LL;
	volatile uint16_t x663 = 1415U;
	int64_t x664 = -84833036LL;
	int64_t t127 = 246337043790090106LL;

    t127 = ((x661+(x662-x663))&x664);

    if (t127 != -1761178220434028336LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x665 = UINT8_MAX;
	int64_t x667 = -1LL;
	uint16_t x668 = 64U;
	volatile uint64_t t128 = 2LLU;

    t128 = ((x665+(x666-x667))&x668);

    if (t128 != 64LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x674 = UINT16_MAX;
	uint8_t x675 = UINT8_MAX;
	int32_t x676 = 28;
	volatile int32_t t129 = -173863372;

    t129 = ((x673+(x674-x675))&x676);

    if (t129 != 28) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x682 = INT32_MIN;
	volatile int8_t x684 = -1;
	uint32_t t130 = 766U;

    t130 = ((x681+(x682-x683))&x684);

    if (t130 != 2147483899U) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x685 = 0;
	int32_t x686 = INT32_MIN;
	int32_t x687 = INT32_MIN;
	volatile int32_t t131 = -967665;

    t131 = ((x685+(x686-x687))&x688);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x690 = INT64_MAX;
	uint64_t x691 = 439668334305747LLU;
	volatile uint8_t x692 = 9U;
	static uint64_t t132 = 10342LLU;

    t132 = ((x689+(x690-x691))&x692);

    if (t132 != 9LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int16_t x693 = INT16_MIN;
	int16_t x695 = INT16_MAX;
	static volatile int8_t x696 = -14;
	int32_t t133 = 1;

    t133 = ((x693+(x694-x695))&x696);

    if (t133 != -65280) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x697 = 2890;
	int8_t x698 = -62;
	volatile int8_t x699 = -5;
	int32_t x700 = INT32_MIN;
	volatile int32_t t134 = 499292785;

    t134 = ((x697+(x698-x699))&x700);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static int8_t x706 = INT8_MIN;
	int8_t x707 = INT8_MIN;
	uint8_t x708 = 69U;
	int32_t t135 = -62462702;

    t135 = ((x705+(x706-x707))&x708);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint64_t x721 = 29742002124LLU;
	static int32_t x722 = INT32_MIN;
	static int8_t x723 = INT8_MIN;
	int64_t x724 = INT64_MIN;
	volatile uint64_t t136 = 2990205752LLU;

    t136 = ((x721+(x722-x723))&x724);

    if (t136 != 0LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x725 = INT64_MIN;
	uint32_t x726 = 3U;
	int32_t x727 = INT32_MIN;
	static uint16_t x728 = UINT16_MAX;
	static int64_t t137 = -13036973LL;

    t137 = ((x725+(x726-x727))&x728);

    if (t137 != 3LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x730 = UINT64_MAX;
	int32_t x731 = INT32_MIN;
	int32_t x732 = 82661843;
	volatile uint64_t t138 = 58428591340LLU;

    t138 = ((x729+(x730-x731))&x732);

    if (t138 != 18LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x733 = INT16_MAX;
	int8_t x734 = INT8_MIN;
	int32_t x735 = -1;
	volatile int32_t t139 = 32;

    t139 = ((x733+(x734-x735))&x736);

    if (t139 != 32640) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x737 = 12U;
	int32_t x738 = INT32_MIN;
	uint32_t x739 = 22050U;
	static int64_t x740 = -1LL;

    t140 = ((x737+(x738-x739))&x740);

    if (t140 != 2147461610LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x745 = 16299U;
	uint32_t x746 = 165824U;
	int64_t x747 = -1LL;
	volatile int64_t t141 = -179250335627LL;

    t141 = ((x745+(x746-x747))&x748);

    if (t141 != 182124LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x749 = INT32_MAX;
	int16_t x751 = 0;
	volatile int32_t t142 = 481697;

    t142 = ((x749+(x750-x751))&x752);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint32_t x753 = 1206912U;
	uint64_t x755 = 430998069942120596LLU;
	int16_t x756 = 7180;
	volatile uint64_t t143 = 19286262240393282LLU;

    t143 = ((x753+(x754-x755))&x756);

    if (t143 != 6152LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x757 = UINT16_MAX;
	uint64_t x758 = 2740643017345787LLU;
	volatile int8_t x759 = INT8_MAX;
	uint32_t x760 = 63U;
	volatile uint64_t t144 = 110770356774555LLU;

    t144 = ((x757+(x758-x759))&x760);

    if (t144 != 59LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x761 = 36;
	uint64_t x762 = 198216304359LLU;
	static int64_t x763 = INT64_MAX;
	volatile int64_t x764 = -107615503583LL;
	static uint64_t t145 = 140623837961459LLU;

    t145 = ((x761+(x762-x763))&x764);

    if (t145 != 9223372200610661120LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint8_t x765 = 0U;
	uint64_t x766 = 11LLU;
	int16_t x768 = 1028;

    t146 = ((x765+(x766-x767))&x768);

    if (t146 != 1024LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x770 = UINT8_MAX;
	static int16_t x771 = INT16_MAX;
	volatile uint32_t t147 = 557U;

    t147 = ((x769+(x770-x771))&x772);

    if (t147 != 2202U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x774 = INT16_MAX;
	int32_t x776 = INT32_MAX;

    t148 = ((x773+(x774-x775))&x776);

    if (t148 != 658751602LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x781 = -23;
	int16_t x782 = -50;
	uint16_t x783 = 1U;
	static volatile int16_t x784 = 1;
	volatile int32_t t149 = 0;

    t149 = ((x781+(x782-x783))&x784);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x785 = 14;
	int32_t x787 = INT32_MIN;

    t150 = ((x785+(x786-x787))&x788);

    if (t150 != 14LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x789 = INT8_MAX;
	int32_t x790 = 17;
	uint32_t x791 = UINT32_MAX;
	int16_t x792 = INT16_MIN;
	uint32_t t151 = 3537990U;

    t151 = ((x789+(x790-x791))&x792);

    if (t151 != 0U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x793 = 0;
	volatile int32_t x795 = INT32_MIN;
	uint32_t x796 = 2554U;
	uint32_t t152 = 19941U;

    t152 = ((x793+(x794-x795))&x796);

    if (t152 != 2290U) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x797 = 11866977344902709LLU;
	volatile int8_t x798 = -1;
	int32_t x799 = 81312669;
	static uint8_t x800 = 4U;
	volatile uint64_t t153 = 574093995689945730LLU;

    t153 = ((x797+(x798-x799))&x800);

    if (t153 != 4LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x801 = 1810U;
	int64_t x802 = INT64_MIN;
	static uint32_t x804 = UINT32_MAX;
	static volatile int64_t t154 = -27808330LL;

    t154 = ((x801+(x802-x803))&x804);

    if (t154 != 34578LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x805 = -1;
	static int16_t x806 = -3;
	uint8_t x807 = 4U;
	uint64_t x808 = UINT64_MAX;
	volatile uint64_t t155 = 20841721671386565LLU;

    t155 = ((x805+(x806-x807))&x808);

    if (t155 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x809 = 1;
	int8_t x811 = -1;
	int64_t x812 = INT64_MIN;
	int64_t t156 = -505971645LL;

    t156 = ((x809+(x810-x811))&x812);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x813 = INT32_MIN;
	static uint32_t x814 = 867U;
	int64_t x816 = INT64_MIN;
	volatile int64_t t157 = -16016010052LL;

    t157 = ((x813+(x814-x815))&x816);

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static volatile int32_t x817 = -1;
	int16_t x820 = -1;

    t158 = ((x817+(x818-x819))&x820);

    if (t158 != 65535) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x821 = 27;
	int32_t x823 = INT32_MAX;

    t159 = ((x821+(x822-x823))&x824);

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x825 = 50626223U;
	volatile int32_t x826 = INT32_MIN;
	int16_t x827 = INT16_MIN;
	static int64_t x828 = -1LL;
	volatile int64_t t160 = -3705070LL;

    t160 = ((x825+(x826-x827))&x828);

    if (t160 != 2198142639LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x829 = -752607797LL;
	uint64_t x832 = 348746783702LLU;
	static volatile uint64_t t161 = 243LLU;

    t161 = ((x829+(x830-x831))&x832);

    if (t161 != 343900192832LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x833 = INT16_MIN;
	int32_t x835 = 354383;
	int32_t x836 = 413;
	uint64_t t162 = 23082540209LLU;

    t162 = ((x833+(x834-x835))&x836);

    if (t162 != 29LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x837 = 36003741U;
	static volatile int8_t x838 = 4;
	static uint64_t x839 = 28145547145886LLU;
	volatile uint16_t x840 = UINT16_MAX;
	uint64_t t163 = 30LLU;

    t163 = ((x837+(x838-x839))&x840);

    if (t163 != 27907LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x842 = INT16_MAX;
	uint16_t x843 = 85U;
	static int16_t x844 = INT16_MAX;
	volatile int64_t t164 = 2704000189LL;

    t164 = ((x841+(x842-x843))&x844);

    if (t164 != 32680LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x845 = 0U;
	static uint64_t x846 = 8635708019079920406LLU;
	volatile uint64_t t165 = 0LLU;

    t165 = ((x845+(x846-x847))&x848);

    if (t165 != 6LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x850 = INT16_MIN;
	static int16_t x851 = -1;
	int8_t x852 = INT8_MIN;
	volatile int32_t t166 = 737;

    t166 = ((x849+(x850-x851))&x852);

    if (t166 != -32768) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x853 = UINT32_MAX;
	static volatile int32_t x854 = INT32_MAX;
	static int16_t x856 = INT16_MIN;
	uint32_t t167 = 6163U;

    t167 = ((x853+(x854-x855))&x856);

    if (t167 != 2147450880U) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x857 = -1;
	uint16_t x858 = 668U;
	static int16_t x859 = -1;
	uint32_t x860 = 56U;

    t168 = ((x857+(x858-x859))&x860);

    if (t168 != 24U) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile int8_t x865 = 1;
	int32_t x866 = INT32_MIN;
	volatile uint64_t t169 = 823248728342759328LLU;

    t169 = ((x865+(x866-x867))&x868);

    if (t169 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int32_t x869 = -1127;
	uint16_t x870 = 960U;
	int8_t x872 = -1;
	volatile int32_t t170 = -71905430;

    t170 = ((x869+(x870-x871))&x872);

    if (t170 != -183) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int16_t x873 = -1;
	volatile uint8_t x874 = UINT8_MAX;
	volatile uint16_t x875 = UINT16_MAX;
	int8_t x876 = -1;
	volatile int32_t t171 = 351067347;

    t171 = ((x873+(x874-x875))&x876);

    if (t171 != -65281) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x877 = 4U;
	int32_t x878 = -1;
	static int8_t x879 = -1;
	int32_t x880 = -1;
	static volatile int32_t t172 = 28423;

    t172 = ((x877+(x878-x879))&x880);

    if (t172 != 4) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x881 = INT8_MIN;
	int16_t x882 = -1;
	int32_t x884 = INT32_MIN;
	static volatile int32_t t173 = INT32_MIN;

    t173 = ((x881+(x882-x883))&x884);

    if (t173 != INT32_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x885 = INT16_MIN;
	volatile uint32_t x886 = 1268U;
	int64_t x887 = 30090996522LL;
	int32_t x888 = INT32_MIN;

    t174 = ((x885+(x886-x887))&x888);

    if (t174 != -32212254720LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x889 = UINT64_MAX;
	uint16_t x890 = 440U;
	static volatile int8_t x891 = INT8_MIN;
	static int16_t x892 = INT16_MIN;

    t175 = ((x889+(x890-x891))&x892);

    if (t175 != 0LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int64_t x893 = -2708020724571LL;
	static uint16_t x894 = 42U;
	int64_t x896 = INT64_MIN;
	static int64_t t176 = INT64_MIN;

    t176 = ((x893+(x894-x895))&x896);

    if (t176 != INT64_MIN) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x898 = INT16_MIN;
	uint32_t x900 = UINT32_MAX;
	volatile int64_t t177 = 65935378673166LL;

    t177 = ((x897+(x898-x899))&x900);

    if (t177 != 114858965LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int8_t x902 = INT8_MIN;
	static uint64_t x903 = UINT64_MAX;

    t178 = ((x901+(x902-x903))&x904);

    if (t178 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x905 = INT32_MAX;
	volatile int32_t x906 = INT32_MIN;
	volatile int32_t x907 = INT32_MIN;
	uint32_t x908 = UINT32_MAX;
	volatile uint32_t t179 = 58663U;

    t179 = ((x905+(x906-x907))&x908);

    if (t179 != 2147483647U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint64_t x913 = 341139424336168LLU;
	int64_t x916 = INT64_MIN;
	uint64_t t180 = 1149657708498159996LLU;

    t180 = ((x913+(x914-x915))&x916);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x917 = INT8_MIN;
	uint16_t x918 = UINT16_MAX;
	int16_t x919 = 9;
	uint8_t x920 = 73U;
	int32_t t181 = 646;

    t181 = ((x917+(x918-x919))&x920);

    if (t181 != 64) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x921 = -1;
	int16_t x922 = INT16_MIN;

    t182 = ((x921+(x922-x923))&x924);

    if (t182 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x925 = UINT16_MAX;
	volatile int32_t x926 = -1;
	int32_t x928 = 2679;
	static int32_t t183 = -2121;

    t183 = ((x925+(x926-x927))&x928);

    if (t183 != 2658) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x929 = UINT64_MAX;
	static volatile int8_t x930 = INT8_MAX;
	int32_t x931 = -1344066;
	static uint8_t x932 = 23U;
	static volatile uint64_t t184 = 0LLU;

    t184 = ((x929+(x930-x931))&x932);

    if (t184 != 0LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int8_t x937 = -1;
	static uint32_t x938 = UINT32_MAX;
	int8_t x939 = INT8_MAX;

    t185 = ((x937+(x938-x939))&x940);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x942 = -340490;
	volatile int16_t x943 = INT16_MAX;
	volatile int64_t x944 = -1LL;

    t186 = ((x941+(x942-x943))&x944);

    if (t186 != 18446744073709178358LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x945 = -1;
	int16_t x946 = -739;
	volatile int64_t x947 = 155450633831675LL;
	int32_t x948 = -405;
	static volatile int64_t t187 = 1050118713826457LL;

    t187 = ((x945+(x946-x947))&x948);

    if (t187 != -155450633832415LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x953 = -1784045983407069412LL;
	uint16_t x954 = 3381U;
	static uint64_t x955 = UINT64_MAX;
	volatile uint64_t t188 = 1LLU;

    t188 = ((x953+(x954-x955))&x956);

    if (t188 != 13394LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x958 = INT16_MIN;
	volatile uint32_t x959 = UINT32_MAX;
	static uint8_t x960 = 0U;
	uint32_t t189 = 3U;

    t189 = ((x957+(x958-x959))&x960);

    if (t189 != 0U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x961 = 356701U;
	static uint16_t x962 = UINT16_MAX;
	int16_t x963 = INT16_MIN;
	int32_t x964 = INT32_MIN;
	uint32_t t190 = 4U;

    t190 = ((x961+(x962-x963))&x964);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int16_t x965 = -7;
	uint16_t x966 = 41U;
	uint8_t x967 = UINT8_MAX;
	int32_t x968 = -45605775;

    t191 = ((x965+(x966-x967))&x968);

    if (t191 != -45605855) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x970 = INT64_MAX;
	uint64_t x971 = 19926LLU;
	int64_t x972 = INT64_MAX;
	volatile uint64_t t192 = 43217655732535954LLU;

    t192 = ((x969+(x970-x971))&x972);

    if (t192 != 9223372036854755880LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x973 = INT64_MIN;
	uint16_t x974 = 1292U;
	volatile uint16_t x975 = 9U;
	int64_t x976 = -986680925505LL;
	int64_t t193 = 6103885160572330LL;

    t193 = ((x973+(x974-x975))&x976);

    if (t193 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x978 = -29501LL;
	int16_t x979 = -105;
	int8_t x980 = INT8_MIN;
	static volatile int64_t t194 = -70714LL;

    t194 = ((x977+(x978-x979))&x980);

    if (t194 != -29440LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint8_t x981 = UINT8_MAX;
	int8_t x982 = INT8_MIN;
	volatile int16_t x983 = INT16_MIN;
	static uint64_t x984 = UINT64_MAX;
	volatile uint64_t t195 = 14560901428826890LLU;

    t195 = ((x981+(x982-x983))&x984);

    if (t195 != 32895LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int32_t x989 = INT32_MAX;
	volatile int16_t x990 = 115;
	volatile int32_t x991 = 8533;
	int64_t x992 = INT64_MIN;
	int64_t t196 = -3978218640LL;

    t196 = ((x989+(x990-x991))&x992);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x993 = INT32_MAX;
	int32_t x994 = -1;
	static int32_t x995 = INT32_MAX;
	int64_t x996 = -1LL;
	volatile int64_t t197 = 4155532LL;

    t197 = ((x993+(x994-x995))&x996);

    if (t197 != -1LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x997 = UINT64_MAX;
	int32_t x998 = 1;
	int8_t x999 = INT8_MIN;
	int32_t x1000 = INT32_MIN;
	uint64_t t198 = 14752806370410LLU;

    t198 = ((x997+(x998-x999))&x1000);

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x1001 = -490;
	int32_t t199 = 122;

    t199 = ((x1001+(x1002-x1003))&x1004);

    if (t199 != -2993865) { NG(); } else { ; }
	
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

