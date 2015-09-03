#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x65 = UINT8_MAX;
volatile int32_t t2 = -602348;
int64_t x89 = 212305350LL;
uint8_t x113 = UINT8_MAX;
volatile int64_t x153 = INT64_MAX;
volatile int16_t x154 = INT16_MAX;
uint64_t x162 = UINT64_MAX;
int16_t x236 = -1;
volatile int8_t x247 = 43;
int32_t t12 = 66476;
uint16_t x258 = UINT16_MAX;
volatile int32_t t14 = -4;
uint8_t x340 = 3U;
uint32_t x385 = UINT32_MAX;
uint64_t x418 = UINT64_MAX;
int8_t x419 = 51;
int32_t x481 = -1;
static uint8_t x517 = 3U;
int16_t x520 = 3;
int64_t x539 = INT64_MIN;
int8_t x545 = 0;
uint32_t x689 = UINT32_MAX;
uint8_t x692 = 1U;
uint32_t t27 = UINT32_MAX;
int32_t x742 = INT32_MAX;
static volatile uint64_t x751 = 6LLU;
uint8_t x785 = UINT8_MAX;
volatile uint64_t t33 = UINT64_MAX;
static volatile int32_t x837 = 2105361;
static int8_t x839 = 1;
uint8_t x852 = 1U;
static uint32_t t36 = UINT32_MAX;
int16_t x896 = INT16_MIN;
volatile int64_t x917 = INT64_MAX;
volatile int64_t x919 = INT64_MIN;
volatile int16_t x932 = INT16_MIN;
volatile uint64_t t42 = 36284LLU;
uint64_t x955 = UINT64_MAX;
int16_t x990 = INT16_MAX;
uint64_t t48 = 5060913LLU;
volatile int32_t x1124 = -1;
static uint64_t x1205 = 60510111454819LLU;
int8_t x1232 = 12;
uint32_t t54 = 180U;
uint8_t x1301 = UINT8_MAX;
static int64_t x1304 = INT64_MIN;
uint16_t x1371 = 8U;
volatile uint8_t x1421 = 47U;
int8_t x1422 = 0;
int8_t x1559 = 0;
int8_t x1608 = 1;
uint32_t t66 = UINT32_MAX;
uint32_t x1657 = UINT32_MAX;
static uint32_t x1685 = 3986U;
int16_t x1687 = INT16_MAX;
uint32_t t70 = 28252U;
volatile int16_t x1735 = 1;
volatile uint16_t x1753 = 11132U;
uint64_t x1754 = 249192LLU;
int32_t x1755 = INT32_MAX;
int64_t x1790 = 1942210483LL;
static uint8_t x1791 = 16U;
int16_t x1805 = 14622;
int8_t x1808 = -32;
uint32_t x1858 = UINT32_MAX;
volatile uint64_t t80 = 2030627554073021LLU;
int32_t x1868 = INT32_MIN;
int8_t x1925 = 1;
uint8_t x1949 = UINT8_MAX;
int16_t x1952 = 6;
volatile int64_t x1995 = INT64_MIN;
volatile uint8_t x2032 = 59U;
uint64_t x2114 = 128142948166383397LLU;
volatile uint8_t x2122 = 6U;
int64_t x2123 = INT64_MAX;
uint16_t x2124 = 42U;
volatile int32_t t89 = 531350259;
volatile uint8_t x2130 = 5U;
volatile int16_t x2136 = 5;
uint32_t t92 = 818U;
int32_t x2163 = INT32_MAX;
volatile uint64_t t95 = 1676984448670LLU;
uint16_t x2193 = UINT16_MAX;
uint16_t x2194 = 3U;
int8_t x2195 = INT8_MIN;
static int8_t x2200 = INT8_MIN;
static uint64_t x2274 = UINT64_MAX;


void f0(void) {
	uint32_t x9 = 10U;
	int16_t x10 = INT16_MAX;
	static int64_t x11 = INT64_MIN;
	int32_t x12 = -1;
	static uint32_t t0 = 1U;

	t0 = ((x9|x10)>>(x11%x12));

	if (t0 != 32767U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x45 = 41U;
	uint16_t x46 = 523U;
	static uint8_t x47 = 13U;
	int16_t x48 = -3;
	volatile int32_t t1 = -157;

	t1 = ((x45|x46)>>(x47%x48));

	if (t1 != 277) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x66 = INT32_MAX;
	uint64_t x67 = 2040239137LLU;
	uint16_t x68 = 35U;

	t2 = ((x65|x66)>>(x67%x68));

	if (t2 != 15) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x73 = 5U;
	static int32_t x74 = 3850124;
	int32_t x75 = 277;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t3 = 186280;

	t3 = ((x73|x74)>>(x75%x76));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x90 = 8;
	uint8_t x91 = 1U;
	int32_t x92 = 3393;
	volatile int64_t t4 = -22744190LL;

	t4 = ((x89|x90)>>(x91%x92));

	if (t4 != 106152679LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x114 = UINT8_MAX;
	uint8_t x115 = 52U;
	volatile int16_t x116 = -1;
	int32_t t5 = 97466;

	t5 = ((x113|x114)>>(x115%x116));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x141 = 73651LLU;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = 120957LLU;
	static uint8_t x144 = 2U;
	static uint64_t t6 = 18800433075068758LLU;

	t6 = ((x141|x142)>>(x143%x144));

	if (t6 != 9223372036854775769LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x155 = -1;
	static int64_t x156 = -1LL;
	int64_t t7 = INT64_MAX;

	t7 = ((x153|x154)>>(x155%x156));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x161 = INT32_MIN;
	uint64_t x163 = UINT64_MAX;
	uint16_t x164 = UINT16_MAX;
	static volatile uint64_t t8 = UINT64_MAX;

	t8 = ((x161|x162)>>(x163%x164));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x189 = 3256U;
	static uint16_t x190 = 25U;
	int32_t x191 = INT32_MAX;
	int8_t x192 = -1;
	uint32_t t9 = 339388343U;

	t9 = ((x189|x190)>>(x191%x192));

	if (t9 != 3257U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x213 = 715171837489711333LLU;
	uint8_t x214 = UINT8_MAX;
	int32_t x215 = INT32_MIN;
	int8_t x216 = INT8_MIN;
	static uint64_t t10 = 329759351026327LLU;

	t10 = ((x213|x214)>>(x215%x216));

	if (t10 != 715171837489711359LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x233 = 2U;
	int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MIN;
	static volatile int32_t t11 = 1;

	t11 = ((x233|x234)>>(x235%x236));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x245 = INT8_MAX;
	int32_t x246 = INT32_MAX;
	static uint8_t x248 = 9U;

	t12 = ((x245|x246)>>(x247%x248));

	if (t12 != 16777215) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x257 = UINT8_MAX;
	int16_t x259 = INT16_MAX;
	uint8_t x260 = 10U;
	volatile int32_t t13 = 511;

	t13 = ((x257|x258)>>(x259%x260));

	if (t13 != 511) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x333 = 1;
	int16_t x334 = INT16_MAX;
	volatile int64_t x335 = 158LL;
	int8_t x336 = INT8_MIN;

	t14 = ((x333|x334)>>(x335%x336));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x337 = INT64_MAX;
	uint16_t x338 = 636U;
	static int8_t x339 = 3;
	int64_t t15 = INT64_MAX;

	t15 = ((x337|x338)>>(x339%x340));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	uint32_t t16 = UINT32_MAX;

	t16 = ((x385|x386)>>(x387%x388));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x397 = 2U;
	uint16_t x398 = UINT16_MAX;
	uint64_t x399 = 1LLU;
	uint32_t x400 = 5722U;
	int32_t t17 = -174312;

	t17 = ((x397|x398)>>(x399%x400));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x405 = UINT32_MAX;
	volatile uint8_t x406 = 2U;
	int16_t x407 = 11;
	static int64_t x408 = -1LL;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = ((x405|x406)>>(x407%x408));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x417 = INT8_MIN;
	volatile int8_t x420 = INT8_MIN;
	uint64_t t19 = 163168LLU;

	t19 = ((x417|x418)>>(x419%x420));

	if (t19 != 8191LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x482 = 1079LLU;
	uint64_t x483 = UINT64_MAX;
	uint8_t x484 = 35U;
	uint64_t t20 = 1758347674525855LLU;

	t20 = ((x481|x482)>>(x483%x484));

	if (t20 != 562949953421311LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x518 = 110;
	static int64_t x519 = INT64_MAX;
	volatile int32_t t21 = -459805803;

	t21 = ((x517|x518)>>(x519%x520));

	if (t21 != 55) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x537 = 4504955LLU;
	static uint64_t x538 = 30692LLU;
	int64_t x540 = INT64_MIN;
	static volatile uint64_t t22 = 97570LLU;

	t22 = ((x537|x538)>>(x539%x540));

	if (t22 != 4521983LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x546 = INT16_MAX;
	volatile int8_t x547 = INT8_MAX;
	int32_t x548 = -1;
	int32_t t23 = -12595;

	t23 = ((x545|x546)>>(x547%x548));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x549 = -1;
	uint32_t x550 = UINT32_MAX;
	static uint16_t x551 = UINT16_MAX;
	int64_t x552 = -1LL;
	uint32_t t24 = UINT32_MAX;

	t24 = ((x549|x550)>>(x551%x552));

	if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x617 = 3;
	int16_t x618 = INT16_MAX;
	volatile uint8_t x619 = 9U;
	int8_t x620 = -15;
	int32_t t25 = 367425;

	t25 = ((x617|x618)>>(x619%x620));

	if (t25 != 63) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x673 = INT64_MAX;
	volatile int32_t x674 = INT32_MAX;
	uint64_t x675 = UINT64_MAX;
	static int64_t x676 = -1LL;
	static int64_t t26 = INT64_MAX;

	t26 = ((x673|x674)>>(x675%x676));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x690 = INT16_MIN;
	uint8_t x691 = UINT8_MAX;

	t27 = ((x689|x690)>>(x691%x692));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x705 = 1;
	uint8_t x706 = UINT8_MAX;
	static int16_t x707 = INT16_MIN;
	int8_t x708 = -1;
	int32_t t28 = 178;

	t28 = ((x705|x706)>>(x707%x708));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x741 = INT8_MAX;
	volatile int8_t x743 = -40;
	static int64_t x744 = -1LL;
	int32_t t29 = INT32_MAX;

	t29 = ((x741|x742)>>(x743%x744));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x749 = INT16_MAX;
	uint8_t x750 = UINT8_MAX;
	volatile uint32_t x752 = 230U;
	volatile int32_t t30 = -12607633;

	t30 = ((x749|x750)>>(x751%x752));

	if (t30 != 511) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x773 = -1;
	uint32_t x774 = 43U;
	int8_t x775 = 0;
	int16_t x776 = -1;
	uint32_t t31 = UINT32_MAX;

	t31 = ((x773|x774)>>(x775%x776));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x786 = 2;
	volatile uint8_t x787 = 21U;
	static int16_t x788 = INT16_MAX;
	volatile int32_t t32 = -10917;

	t32 = ((x785|x786)>>(x787%x788));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x789 = INT8_MIN;
	static uint64_t x790 = UINT64_MAX;
	uint16_t x791 = UINT16_MAX;
	volatile int8_t x792 = -1;

	t33 = ((x789|x790)>>(x791%x792));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x838 = 361893439131562LLU;
	int32_t x840 = INT32_MIN;
	volatile uint64_t t34 = 1903LLU;

	t34 = ((x837|x838)>>(x839%x840));

	if (t34 != 180946719569885LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x849 = UINT32_MAX;
	static int32_t x850 = INT32_MIN;
	int16_t x851 = INT16_MIN;
	uint32_t t35 = UINT32_MAX;

	t35 = ((x849|x850)>>(x851%x852));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x873 = UINT32_MAX;
	volatile int8_t x874 = -62;
	int64_t x875 = -6256097793LL;
	int16_t x876 = -1;

	t36 = ((x873|x874)>>(x875%x876));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x893 = 3U;
	uint64_t x894 = 85LLU;
	int32_t x895 = INT32_MIN;
	uint64_t t37 = 3371LLU;

	t37 = ((x893|x894)>>(x895%x896));

	if (t37 != 87LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x909 = UINT32_MAX;
	uint16_t x910 = UINT16_MAX;
	static uint32_t x911 = UINT32_MAX;
	uint16_t x912 = UINT16_MAX;
	uint32_t t38 = UINT32_MAX;

	t38 = ((x909|x910)>>(x911%x912));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x918 = 18440U;
	int8_t x920 = INT8_MIN;
	volatile int64_t t39 = INT64_MAX;

	t39 = ((x917|x918)>>(x919%x920));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x929 = 68U;
	volatile uint16_t x930 = UINT16_MAX;
	int32_t x931 = INT32_MIN;
	static volatile int32_t t40 = -406069;

	t40 = ((x929|x930)>>(x931%x932));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x933 = INT16_MAX;
	int64_t x934 = INT64_MAX;
	int8_t x935 = INT8_MIN;
	uint16_t x936 = 1U;
	int64_t t41 = INT64_MAX;

	t41 = ((x933|x934)>>(x935%x936));

	if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x949 = INT8_MAX;
	static uint64_t x950 = 136742526236729LLU;
	uint32_t x951 = 2U;
	volatile int16_t x952 = INT16_MIN;

	t42 = ((x949|x950)>>(x951%x952));

	if (t42 != 34185631559199LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x953 = INT8_MIN;
	uint32_t x954 = 2121450U;
	int32_t x956 = 976;
	uint32_t t43 = 611396133U;

	t43 = ((x953|x954)>>(x955%x956));

	if (t43 != 131071U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x957 = -1;
	volatile uint64_t x958 = 89396454LLU;
	uint8_t x959 = 19U;
	uint64_t x960 = UINT64_MAX;
	uint64_t t44 = 28888LLU;

	t44 = ((x957|x958)>>(x959%x960));

	if (t44 != 35184372088831LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x977 = -53;
	volatile uint32_t x978 = UINT32_MAX;
	uint16_t x979 = 0U;
	int64_t x980 = INT64_MIN;
	static uint32_t t45 = UINT32_MAX;

	t45 = ((x977|x978)>>(x979%x980));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x989 = UINT64_MAX;
	int32_t x991 = INT32_MAX;
	uint32_t x992 = 1U;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x989|x990)>>(x991%x992));

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x1029 = UINT16_MAX;
	uint64_t x1030 = 54733633LLU;
	volatile uint8_t x1031 = 122U;
	volatile uint16_t x1032 = 94U;
	static uint64_t t47 = 141233536088LLU;

	t47 = ((x1029|x1030)>>(x1031%x1032));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x1053 = 2751159508409569LLU;
	uint16_t x1054 = 1143U;
	int64_t x1055 = INT64_MIN;
	volatile int32_t x1056 = -1;

	t48 = ((x1053|x1054)>>(x1055%x1056));

	if (t48 != 2751159508409591LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x1121 = UINT64_MAX;
	int16_t x1122 = -1;
	int32_t x1123 = INT32_MIN;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x1121|x1122)>>(x1123%x1124));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x1157 = UINT64_MAX;
	static volatile int8_t x1158 = INT8_MIN;
	static uint32_t x1159 = 62111899U;
	uint16_t x1160 = 33U;
	volatile uint64_t t50 = 2LLU;

	t50 = ((x1157|x1158)>>(x1159%x1160));

	if (t50 != 549755813887LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x1185 = 14206600043LL;
	uint8_t x1186 = 15U;
	int32_t x1187 = -1;
	uint64_t x1188 = UINT64_MAX;
	volatile int64_t t51 = 0LL;

	t51 = ((x1185|x1186)>>(x1187%x1188));

	if (t51 != 14206600047LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x1206 = 3240U;
	volatile uint64_t x1207 = 1186120064497027838LLU;
	static uint8_t x1208 = 8U;
	uint64_t t52 = 5LLU;

	t52 = ((x1205|x1206)>>(x1207%x1208));

	if (t52 != 945470491515LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x1229 = 9232335U;
	uint32_t x1230 = 361U;
	static uint64_t x1231 = 458LLU;
	uint32_t t53 = 23U;

	t53 = ((x1229|x1230)>>(x1231%x1232));

	if (t53 != 2308091U) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1273 = 3913U;
	uint32_t x1274 = 195160U;
	int32_t x1275 = -1;
	static volatile uint64_t x1276 = UINT64_MAX;

	t54 = ((x1273|x1274)>>(x1275%x1276));

	if (t54 != 196441U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x1302 = INT16_MAX;
	uint8_t x1303 = 5U;
	int32_t t55 = -12390;

	t55 = ((x1301|x1302)>>(x1303%x1304));

	if (t55 != 1023) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x1345 = 8;
	uint32_t x1346 = UINT32_MAX;
	volatile int32_t x1347 = INT32_MIN;
	int16_t x1348 = INT16_MIN;
	volatile uint32_t t56 = UINT32_MAX;

	t56 = ((x1345|x1346)>>(x1347%x1348));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x1369 = 6U;
	volatile int16_t x1370 = INT16_MAX;
	uint32_t x1372 = UINT32_MAX;
	int32_t t57 = -23504983;

	t57 = ((x1369|x1370)>>(x1371%x1372));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x1423 = 3;
	volatile int64_t x1424 = INT64_MAX;
	volatile int32_t t58 = 31002886;

	t58 = ((x1421|x1422)>>(x1423%x1424));

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x1461 = INT32_MIN;
	uint64_t x1462 = 5223434938492331005LLU;
	static uint16_t x1463 = 123U;
	int32_t x1464 = -60;
	uint64_t t59 = 242341LLU;

	t59 = ((x1461|x1462)>>(x1463%x1464));

	if (t59 != 2305843009113449599LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x1485 = 0U;
	static uint64_t x1486 = 506LLU;
	volatile int16_t x1487 = INT16_MIN;
	int64_t x1488 = 1LL;
	volatile uint64_t t60 = 49694611LLU;

	t60 = ((x1485|x1486)>>(x1487%x1488));

	if (t60 != 506LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x1489 = UINT64_MAX;
	int64_t x1490 = INT64_MIN;
	int64_t x1491 = INT64_MIN;
	int32_t x1492 = -1;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = ((x1489|x1490)>>(x1491%x1492));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x1549 = 38;
	uint16_t x1550 = 27338U;
	int32_t x1551 = -1;
	int64_t x1552 = -1LL;
	volatile int32_t t62 = -902;

	t62 = ((x1549|x1550)>>(x1551%x1552));

	if (t62 != 27374) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x1557 = 3393815754780821584LLU;
	int64_t x1558 = 2253286576554973649LL;
	uint64_t x1560 = 1426LLU;
	uint64_t t63 = 4841LLU;

	t63 = ((x1557|x1558)>>(x1559%x1560));

	if (t63 != 4565886359603501521LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x1585 = INT64_MIN;
	volatile uint64_t x1586 = 2267455762433829LLU;
	int16_t x1587 = 56;
	int64_t x1588 = INT64_MIN;
	uint64_t t64 = 242473264203716LLU;

	t64 = ((x1585|x1586)>>(x1587%x1588));

	if (t64 != 128LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x1605 = 29U;
	int64_t x1606 = 29LL;
	int32_t x1607 = -1;
	volatile int64_t t65 = -1042983495404841LL;

	t65 = ((x1605|x1606)>>(x1607%x1608));

	if (t65 != 29LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x1609 = UINT32_MAX;
	uint8_t x1610 = 1U;
	uint32_t x1611 = UINT32_MAX;
	int16_t x1612 = 1;

	t66 = ((x1609|x1610)>>(x1611%x1612));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x1633 = 5LL;
	uint8_t x1634 = 7U;
	volatile int16_t x1635 = INT16_MIN;
	uint32_t x1636 = 2U;
	int64_t t67 = 26264209LL;

	t67 = ((x1633|x1634)>>(x1635%x1636));

	if (t67 != 7LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x1658 = -1;
	int64_t x1659 = INT64_MIN;
	int64_t x1660 = INT64_MIN;
	static uint32_t t68 = UINT32_MAX;

	t68 = ((x1657|x1658)>>(x1659%x1660));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x1673 = -1;
	uint32_t x1674 = UINT32_MAX;
	uint16_t x1675 = 858U;
	uint16_t x1676 = 6U;
	uint32_t t69 = UINT32_MAX;

	t69 = ((x1673|x1674)>>(x1675%x1676));

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x1686 = 13U;
	int64_t x1688 = -1LL;

	t70 = ((x1685|x1686)>>(x1687%x1688));

	if (t70 != 3999U) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x1725 = 6U;
	volatile uint32_t x1726 = 11054U;
	uint16_t x1727 = 4110U;
	static int64_t x1728 = -1LL;
	volatile uint32_t t71 = 12545329U;

	t71 = ((x1725|x1726)>>(x1727%x1728));

	if (t71 != 11054U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x1733 = UINT8_MAX;
	uint8_t x1734 = 4U;
	int64_t x1736 = INT64_MIN;
	int32_t t72 = -39480133;

	t72 = ((x1733|x1734)>>(x1735%x1736));

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x1745 = 15262217U;
	uint64_t x1746 = 20542LLU;
	int32_t x1747 = INT32_MIN;
	int16_t x1748 = INT16_MIN;
	static uint64_t t73 = 358415394565LLU;

	t73 = ((x1745|x1746)>>(x1747%x1748));

	if (t73 != 15266367LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x1756 = INT16_MAX;
	static volatile uint64_t t74 = 3851996056701714LLU;

	t74 = ((x1753|x1754)>>(x1755%x1756));

	if (t74 != 128958LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x1765 = UINT64_MAX;
	int32_t x1766 = -5250188;
	int16_t x1767 = INT16_MIN;
	volatile int8_t x1768 = INT8_MIN;
	uint64_t t75 = UINT64_MAX;

	t75 = ((x1765|x1766)>>(x1767%x1768));

	if (t75 != UINT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x1777 = UINT32_MAX;
	uint32_t x1778 = 165U;
	static int32_t x1779 = 40819;
	static int8_t x1780 = -1;
	static uint32_t t76 = UINT32_MAX;

	t76 = ((x1777|x1778)>>(x1779%x1780));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x1789 = 15012;
	static volatile uint8_t x1792 = 23U;
	int64_t t77 = -7LL;

	t77 = ((x1789|x1790)>>(x1791%x1792));

	if (t77 != 29635LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x1806 = 658950337897881LLU;
	volatile int8_t x1807 = INT8_MIN;
	volatile uint64_t t78 = 108375512LLU;

	t78 = ((x1805|x1806)>>(x1807%x1808));

	if (t78 != 658950337904031LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x1857 = -1;
	uint16_t x1859 = UINT16_MAX;
	static int16_t x1860 = -1;
	volatile uint32_t t79 = UINT32_MAX;

	t79 = ((x1857|x1858)>>(x1859%x1860));

	if (t79 != UINT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x1861 = 23;
	uint64_t x1862 = 7926196486630152LLU;
	int32_t x1863 = 15044665;
	static int8_t x1864 = INT8_MIN;

	t80 = ((x1861|x1862)>>(x1863%x1864));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x1865 = INT8_MIN;
	uint64_t x1866 = UINT64_MAX;
	static volatile uint8_t x1867 = 23U;
	uint64_t t81 = 175788053886LLU;

	t81 = ((x1865|x1866)>>(x1867%x1868));

	if (t81 != 2199023255551LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x1926 = 24101342911711LLU;
	uint8_t x1927 = UINT8_MAX;
	volatile int16_t x1928 = -1;
	static uint64_t t82 = 5456473939LLU;

	t82 = ((x1925|x1926)>>(x1927%x1928));

	if (t82 != 24101342911711LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x1937 = 88163LLU;
	volatile int32_t x1938 = INT32_MAX;
	int32_t x1939 = INT32_MIN;
	int32_t x1940 = INT32_MIN;
	uint64_t t83 = 8778955LLU;

	t83 = ((x1937|x1938)>>(x1939%x1940));

	if (t83 != 2147483647LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x1950 = 11U;
	volatile uint16_t x1951 = 12U;
	uint32_t t84 = 5986356U;

	t84 = ((x1949|x1950)>>(x1951%x1952));

	if (t84 != 255U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x1961 = 90;
	int64_t x1962 = INT64_MAX;
	uint32_t x1963 = UINT32_MAX;
	uint16_t x1964 = 5U;
	int64_t t85 = INT64_MAX;

	t85 = ((x1961|x1962)>>(x1963%x1964));

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x1993 = 669U;
	volatile int16_t x1994 = -7;
	static int16_t x1996 = INT16_MIN;
	uint32_t t86 = 11451U;

	t86 = ((x1993|x1994)>>(x1995%x1996));

	if (t86 != 4294967293U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x2029 = UINT64_MAX;
	volatile int64_t x2030 = -381720LL;
	uint8_t x2031 = 40U;
	volatile uint64_t t87 = 81405886337630LLU;

	t87 = ((x2029|x2030)>>(x2031%x2032));

	if (t87 != 16777215LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x2113 = -4304860690845LL;
	volatile uint16_t x2115 = UINT16_MAX;
	volatile int32_t x2116 = -51;
	uint64_t t88 = 75634340633537605LLU;

	t88 = ((x2113|x2114)>>(x2115%x2116));

	if (t88 != 18446741143399954279LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x2121 = 43U;

	t89 = ((x2121|x2122)>>(x2123%x2124));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x2125 = 68U;
	int16_t x2126 = INT16_MAX;
	int8_t x2127 = 0;
	uint16_t x2128 = 126U;
	volatile int32_t t90 = 33790891;

	t90 = ((x2125|x2126)>>(x2127%x2128));

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x2129 = INT16_MAX;
	int32_t x2131 = INT32_MIN;
	int32_t x2132 = -1;
	int32_t t91 = -130006590;

	t91 = ((x2129|x2130)>>(x2131%x2132));

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x2133 = 1198265U;
	static uint8_t x2134 = 38U;
	static uint8_t x2135 = UINT8_MAX;

	t92 = ((x2133|x2134)>>(x2135%x2136));

	if (t92 != 1198271U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x2137 = 1086802U;
	int8_t x2138 = 1;
	uint8_t x2139 = 6U;
	uint8_t x2140 = UINT8_MAX;
	volatile uint32_t t93 = 24312233U;

	t93 = ((x2137|x2138)>>(x2139%x2140));

	if (t93 != 16981U) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x2161 = UINT16_MAX;
	uint16_t x2162 = 674U;
	uint8_t x2164 = 40U;
	int32_t t94 = -25426;

	t94 = ((x2161|x2162)>>(x2163%x2164));

	if (t94 != 511) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x2169 = 2016LLU;
	int64_t x2170 = -1LL;
	volatile uint8_t x2171 = 116U;
	static volatile uint8_t x2172 = 61U;

	t95 = ((x2169|x2170)>>(x2171%x2172));

	if (t95 != 511LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x2196 = -1LL;
	volatile int32_t t96 = 12;

	t96 = ((x2193|x2194)>>(x2195%x2196));

	if (t96 != 65535) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x2197 = 39;
	int64_t x2198 = INT64_MAX;
	int16_t x2199 = INT16_MIN;
	volatile int64_t t97 = INT64_MAX;

	t97 = ((x2197|x2198)>>(x2199%x2200));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x2221 = 0;
	uint64_t x2222 = 286303481017772LLU;
	int16_t x2223 = -2;
	int64_t x2224 = -1LL;
	volatile uint64_t t98 = 41LLU;

	t98 = ((x2221|x2222)>>(x2223%x2224));

	if (t98 != 286303481017772LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x2273 = INT32_MAX;
	static uint32_t x2275 = 0U;
	int8_t x2276 = INT8_MIN;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = ((x2273|x2274)>>(x2275%x2276));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

